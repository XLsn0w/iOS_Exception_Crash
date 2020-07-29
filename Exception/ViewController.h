//
//  ViewController.h
//  Exception
//
//  Created by i on 2020/7/29.
//  Copyright © 2020 xlsn0w. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController


@end


/*
 
 前言:crash log 对 定位崩溃问题 ,并且不容易复现,尤其是及时对appstore 上正在运营的 app 的迭代改进来说 非常重要.

 1 crash两种情况

 1.1 测试环境下 追踪bug

 1.2 App Store  上应用 追踪bug

      我们主要讨论在App Store  上应用 追踪bug 的情况

 2获取crash log信息途径

 2.1自己收集,做错误分析 错误趋势:

       收集崩溃信息 存储 上传服务器 (时机可以是再一次打开应用时候同步)

      方法:

 复制代码
 // 将系统提供的获取崩溃信息函数 封装成CrashExceptioinCatcher类方法
 //.h
 #import <Foundation/Foundation.h>

 @interface CrashExceptioinCatcher : NSObject
 + (void)startCrashExceptionCatch;
 @end

 //.m
 #import "CrashExceptioinCatcher.h"
 // 提交异常Log信息
 void uncaughtExceptionHandler(NSException *exception) {
     // 异常Log信息// TODO: 提交服务器收集
     // ....
 //    NSArray *arr = [exception callStackSymbols];
 //    NSString *reason = [exception reason];
 //    NSString *name = [exception name];
 //除了可以选择写到应用下的某个文件，通过后续处理将信息发送到服务器等
 //不建议发送邮件形式告知程序人员,当数据量足够大,很可能就被当成垃圾邮件屏蔽了//或者调用某个处理程序来处理这个信息也可 但是 要慎重,有时候 闪退本身就是一种保护机制,错误不能继续错误下去 到此就应该戛然而止
 }

 @implementation CrashExceptioinCatcher

 + (void)startCrashExceptionCatch
 {
     // Sets the top-level error-handling function where you can perform last-minute logging before the program terminates.
     NSSetUncaughtExceptionHandler(&uncaughtExceptionHandler); //设置异常Log信息的处理
 }
 //该类方法需要在  “didFinishLaunchingWithOptions”里面调就开始调用,因为我们需要在应用的整个生命周期中都有机会获取crash log 的机会,虽然我们希望自己的程序完美
 [CrashExceptioinCatcher startCrashExceptionCatch];
 复制代码
 2.2Xcode 工具

 Xcode-Devices中直接查看”测试机 设备的crash log”

 在手机 设置-> 诊断与用量-> 诊断与用量数据  里面 有各种应用的crash log,

 获取方式:

 手机连接电脑, xcode中 Window->Devices->xxx 的iPhone   明细栏目中 有 View Device log 按钮 点击即手机app中的crash log

 如图1

  

 图2 crash log 源码(我手机里 选中的这个 是微信的log

 )

 2.3苹果官方提供的crash log崩溃收集服务

 即”获取用户的 crash log”

 这个是需要用户配合的,因为需要用户在手机 中 设置-> 诊断与用量->勾选 自动发送 ,然后在xcode中 Window->Organizer->Crashes 对应的app,就是当前app最新一版本的crash log ,并且是解析过的,可以根据crash 栈 等相关信息 ,尤其是程序代码级别的 有超链接,一键可以直接跳转到程序崩溃的相关代码,这样更容易定位bug出处.

 参见图3



 2.4第三方:

     2.4.1 友盟”错误趋势 错误分析”

          这个我正在用,crash log 可读性差,需要配合.dSYM文件 定位可能报错代码位置(下面会详细介绍crash log文件和.dSYM文件 是什么 怎么用)

         网上的确有很牛逼的人,人家直接写了mac程序dSYMTool(具体使用参见参考资料(3))

         简单说就是,我们每次迭代的应用时候,对应版本的.xcarchive文件要保存好备份,配合工具使用,当UUID和友盟里日志一致时候,填写错误信息内存地址,就可得到具体的代码行,即潜在的错误出处.

     2.4.2 Fabric 崩溃检查

         这个我也正在用,它的 crash log直接可读,直接定位可能报错代码位置 (此时没使用友盟错误统计)

     小结:

     不论是自己收集crash还是靠第三方收集,一般一个应用程序只应该有一处调用crash统计,很多第三方为了使自己能够尽可能全面统计crash会对NSSetUncaughtExceptionHandler()函数指针的恶意覆盖，因为这个函数是将函数地址当做参数传递，所以只要重复调用就会被覆盖，这样就不能保证崩溃收集的稳定性。

 2.5 解析Crash文件(Xcode 符号化 和 命令行解析)

     2.5.1 xcode 符号化 crash log

          准备三个文件 (1)dSYM (appName.app.dSYM) 文件是

                            (2).crash  原始crash log 文件

                            (3) appName.app 应用程序文件 在ipa文件中

        因为 每一个xxx.app.dSYM,xx.app文件都拥有相应的uuid 当然 .crash文件也有uuid,只有三者uuid一至才表明之三者可以解析出正确的日志文件 所以 这三个文件

        uuid 当用户删除 应用后 重装 理论上 uuid 是会变化的, 现在可以通过"keychain"方式 存储, 此时当应用被删除,当应用重新安装后 uuid仍然被保存可读取,除非刷机或者重新安装系统uuid才会变.(目前这是最值得用的一个重要参数,udid 包含太多硬件和用户信息,暴露会影响信息安全,所以被禁用,不允许上架的) 参考(5)

       三个文件放到一个文件中,然后打开 View Device logs 把  .crash文件拖进去,然后点击右键re- symbolicate log 进行解析,过一会 crash log 即可读

    2.5.2 命令行解析 (一般少有 用2.5.1  和 第三方 十分普遍)

      (1)使用symbolicatecrash手动解析  目前 暂没.crash文件 稍后补充 实践经验

     (2)atos 命令 解析,最简单的是 在获取符号化后的crash log

        拿到 错误地址 执行:

        a.     cd /Users/hr-zhjh/Library/Developer/Xcode/Archives/2017-01-18/appName\ 17-1-18\ 上午12.13.xcarchive/dSYMs/appName.app.dSYM/Contents/Resources/DWARF

       b.     atos -arch arm64 -o dailylife 0x1741ff200

             结果:-[AHFSkuMessageView textFieldShouldReturn:] (in dailylife) (AHFSkuMessageView.m:50)

               atos -arch armv7 dailylife 0x43f21

             结果:-[AHFSkuMessageView setMessageViewWithArray:] (in dailylife) (AHFSkuMessageView.m:106)

     (3) dwarfdump 命令

        命令:dwarfdump --arch=armv7 --lookup 0x43f21 /Users/hr-zhjh/Library/Developer/Xcode/Archives/2017-01-18/appName\ 17-1-18\ 上午12.13.xcarchive/dSYMs/Xxxx.app.dSYM

  

       这样就可以去查查 错误详细原因了

   3 解读 crash log 信息

       未经过二次分析解读的crash log可读性差,参见图2.

       dYSM文件是iOS编译后保存16进制函数地址映射信息的中转文件，每次应用程序build或者 archive后，都会生成对应的xxx.app, xxx.app.dSYM文件。(所以说 每次封包 xxx.app, xxx.app.dSYM 都是需要备份的文件,方便追溯crash)

        xx.app.dSYM 文件和 友盟 crash log都有自己的 UUID 当二者一致 那么crash 的堆栈信息就一致,查出来的错误内存地址转化成的代码行才相对更准确

       转化成可读的"crash log"如下(参见图 4)

       

       (1)设备信息和 crash 信息

       例如:

 复制代码
 Incident Identifier: 270D46C0-99F3-407D-A08A-306865B7C1A4              //crash的id
 CrashReporter Key:   597b2e336c5ec7000f1016b56ccba018f7d5960d              //crash的设备id
 Hardware Model:      iPhone7,1                     //手机型号
 Process:             [AppName] [6621]              //APP的名字[进程的id]
 Path:                /private/.../Application.../WeChat  //APP的位置
 Identifier:          com.tencent.xin                       //bundle ID
 Version:             6.5.3.32 (6.5.3)              //版本号
 Code Type:           ARM-64 (Native)               //app的应用架构之类 一些资料讲 如果是64 则是程序bug 如果是armv7 就是友盟端错误...
 Parent Process:      launchd [1]
 Coalition:           com.tencent.xin [2043]

 Date/Time:           2017-02-08 15:26:31.8885 +0800    //crash发生时间
 Launch Time:         2017-02-08 15:26:21.3045 +0800    //进入应用时间
 OS Version:          iOS 10.0.1 (14A404)                //iOS版本
 Report Version:      105
 复制代码
         通常第三方,会把 错误时间 硬件机型都统计出来了 给个扇形 折线 条形统计图鲜明表现出来告知我们, 如果是我们自己做错误收集,我们就应该实际需求归类处理这些

 对自己有用的数据.

        (2)异常信息

         常见异常类型信息

 复制代码
 1、Exception Type
 1）EXC_BAD_ACCESS

 此类型的Excpetion是我们最长碰到的Crash，通常用于访问了不改访问的内存导致。一般EXC_BAD_ACCESS后面的"()"还会带有补充信息。

 SIGSEGV: 通常由于重复释放对象导致，这种类型在切换了ARC以后应该已经很少见到了。

 SIGABRT:  收到Abort信号退出，通常Foundation库中的容器为了保护状态正常会做一些检测，例如插入nil到数组中等会遇到此类错误。

 SEGV:（Segmentation  Violation），代表无效内存地址，比如空指针，未初始化指针，栈溢出等；

 SIGBUS：总线错误，与 SIGSEGV 不同的是，SIGSEGV 访问的是无效地址，而 SIGBUS 访问的是有效地址，但总线访问异常(如地址对齐问题, 它之所以称为总线错误是因为对未对齐的内存访问时,被阻塞的组件就是地址总线)

 SIGILL：尝试执行非法的指令，可能不被识别或者没有权限

 2）EXC_BAD_INSTRUCTION

 此类异常通常由于线程执行非法指令导致

 3）EXC_ARITHMETIC

 除零错误会抛出此类异常

 2、Exception Code

 0xbaaaaaad 此种类型的log意味着该Crash log并非一个真正的Crash，它仅仅只是包含了整个系统某一时刻的运行状态。通常可以通过同时按Home键和音量键，可能由于用户不小心触发

 0xbad22222当VOIP程序在后台太过频繁的激活时，系统可能会终止此类程序

 0x8badf00d这个前面已经介绍了，程序启动或者恢复时间过长被watch dog终止

 0xc00010ff程序执行大量耗费CPU和GPU的运算，导致设备过热，触发系统过热保护被系统终止

 0xdead10cc程序退到后台时还占用系统资源，如通讯录被系统终止

 0xdeadfa11前面也提到过，程序无响应用户强制关闭
 复制代码
 crash log:

 复制代码
 Exception Type:   EXC_CRASH (SIGKILL)                     //异常的类型
 Exception Subtype: KERN_INVALID_ADDRESS at 0x0000000000000118  //异常子类型

 我手机中 WeChat展示形式如下:
 Exception Code: 0x0000000000000000, 0x0000000000000000     //异常地址
 Exception Note: EXC_CORPSE_NOTIFY//描述
 Termination reason:Namespace SPRINGBOARD, Code 0x8badf00d   //终止原因

 Triggered by Thread:  0                    //异常发生的线程(0为主线程，其他为子线程)

 复制代码
        

       (3) 线程回溯(backtrace),线程信息,crash 栈

        

 上面(2)异常信息 描灰处 相对最关键定位错误类型 方向信息  那么(3) 错误栈里面就是定位错误出处的

 简单分析一下:
  (1) 以下做标记处并没展示出app执行代码 但是有地址 也是值得查查 该代码映射到哪里,这个应该用 dSYM 查一下
  (2)thread 1 基本是UI层级渲染相关的地址  深度渲染 影响开启进程???
  (3) Code 0x8badf00d  意思是 "程序启动或者恢复时间过长被watch dog终止"
   "The exception code 0x8badf00d indicates that an application has been terminated by iOS because a watchdog timeout occurred. The application took too long to launch, terminate, or respond to system events. One common cause of this is doing synchronous networking on the main thread. Whatever operation is on Thread 0: needs to be moved to a background thread, or processed differently, so that it does not block the main thread." 参见 参考链接4
     那么问题就很简单了,就是应用重新被开启时间过长/终止/响应系统行为. 这种类似的事情应该放到父线程中操作,不应该放在主线程中阻塞主线程.
 这里猜测"开启应用过程中 一些处理数据在主线程中了或者 做了一些耗费性能的离屏幕渲染的行为等 再根据dSYM定位的代码 理论上就可以明确错误了"
 复制代码
 Thread 0 name:  Dispatch queue: com.apple.main-thread
 Thread 0 Crashed:
 0   libsystem_malloc.dylib            0x000000018cf7cb7c szone_size + 544
 1   libsystem_malloc.dylib            0x000000018cf7c7a4 free + 220
 2   WeChat                            0x0000000100af5924 0x10001c000 + 11376932
 3   WeChat                            0x0000000100aec7f0 0x10001c000 + 11339760
 4   WeChat                            0x0000000102798558 0x10001c000 + 41403736
 5   WeChat                            0x0000000100af3274 0x10001c000 + 11367028
 6   WeChat                            0x0000000100af17c8 0x10001c000 + 11360200
 7   WeChat                            0x0000000100af4128 0x10001c000 + 11370792
 8   WeChat                            0x0000000100af3e80 0x10001c000 + 11370112
 9   WeChat                            0x000000010273afec 0x10001c000 + 41021420
 10  WeChat                            0x000000010273b7dc 0x10001c000 + 41023452
 11  WeChat                            0x0000000100acf36c 0x10001c000 + 11219820
 12  WeChat                            0x000000010264dd8c 0x10001c000 + 40050060
 13  WeChat                            0x000000010264d9c8 0x10001c000 + 40049096
 14  WeChat                            0x0000000101e16d04 0x10001c000 + 31436036
 15  WeChat                            0x0000000101e11eb4 0x10001c000 + 31415988
 16  UIKit                             0x0000000193dbd738 -[UIView(CALayerDelegate) layoutSublayersOfLayer:] + 1196
 17  QuartzCore                        0x000000019128640c -[CALayer layoutSublayers] + 14
 18 QuartzCore 0x000000019127b0e8 CA::Layer::layout_if_needed(CA::Transaction*) + 292
 19 UIKit 0x0000000193dd21a8 -[UIView(Hierarchy) layoutBelowIfNeeded] + 1020
 20 UIKit 0x0000000193dce480 +[UIView(Animation) performWithoutAnimation:] + 104
 21 UIKit 0x0000000194103728 -[UITableView _createPreparedCellForGlobalRow:withIndexPath:willDisplay:] + 1072
 22 UIKit 0x00000001941037f4 -[UITableView _createPreparedCellForGlobalRow:willDisplay:] + 80
 23 UIKit 0x00000001940f0d9c -[UITableView _updateVisibleCellsNow:isRecursive:] + 2304
 24 UIKit 0x0000000194108858 -[UITableView _performWithCachedTraitCollection:] + 116
 25 UIKit 0x0000000193ea4d04 -[UITableView layoutSubviews] + 176
 26 WeChat 0x000000010264a078 0x10001c000 + 40034424
 27 UIKit 0x0000000193dbd738 -[UIView(CALayerDelegate) layoutSublayersOfLayer:] + 1196
 28 QuartzCore 0x000000019128640c -[CALayer layoutSublayers] + 148
 29 QuartzCore 0x000000019127b0e8 CA::Layer::layout_if_needed(CA::Transaction*) + 292
 30 UIKit 0x0000000193dd21a8 -[UIView(Hierarchy) layoutBelowIfNeeded] + 1020
 31 UIKit 0x0000000193e7a620 -[UINavigationController _layoutViewController:] + 1196
 32 UIKit 0x0000000193e77f04 -[UINavigationController _layoutTopViewController] + 228
 33 UIKit 0x0000000193e90e5c -[UINavigationController navigationTransitionView:didEndTransition:fromView:toView:] + 760
 34 UIKit 0x0000000193e90b28 -[UINavigationTransitionView _notifyDelegateTransitionDidStopWithContext:] + 420
 35 UIKit 0x0000000193e90780 -[UINavigationTransitionView _cleanupTransition] + 724
 36 UIKit 0x0000000193df8d38 -[UIViewAnimationState sendDelegateAnimationDidStop:finished:] + 312
 37 UIKit 0x0000000193df6f14 +[UIViewAnimationState popAnimationState] + 324
 38 UIKit 0x0000000193e8400c -[UINavigationTransitionView transition:fromView:toView:] + 1972
 39 UIKit 0x0000000193e79d5c -[UINavigationController _startTransition:fromViewController:toViewController:] + 2572
 40 UIKit 0x0000000193e78e28 -[UINavigationController _startDeferredTransitionIfNeeded:] + 856
 41 UIKit 0x0000000193e789dc -[UINavigationController __viewWillLayoutSubviews] + 64
 42 UIKit 0x0000000193e78940 -[UILayoutContainerView layoutSubviews] + 188
 43 UIKit 0x0000000193dbd738 -[UIView(CALayerDelegate) layoutSublayersOfLayer:] + 1196
 44 QuartzCore 0x000000019128640c -[CALayer layoutSublayers] + 148
 45 QuartzCore 0x000000019127b0e8 CA::Layer::layout_if_needed(CA::Transaction*) + 292
 46 QuartzCore 0x000000019127afa8 CA::Layer::layout_and_display_if_needed(CA::Transaction*) + 32
 47 QuartzCore 0x00000001911f7c64 CA::Context::commit_transaction(CA::Transaction*) + 252
 48 QuartzCore 0x000000019121f0d0 CA::Transaction::commit() + 512
 49 QuartzCore 0x000000019121faf0 CA::Transaction::observer_callback(__CFRunLoopObserver*, unsigned long, void*) + 120
 50 CoreFoundation 0x000000018df257dc __CFRUNLOOP_IS_CALLING_OUT_TO_AN_OBSERVER_CALLBACK_FUNCTION__ + 32
 51 CoreFoundation 0x000000018df2340c __CFRunLoopDoObservers + 372
 52 CoreFoundation 0x000000018de52068 CFRunLoopRunSpecific + 476
 53 UIKit 0x0000000193e2b7cc -[UIApplication _run] + 608
 54 UIKit 0x0000000193e26550 UIApplicationMain + 208
 55 WeChat 0x00000001000a90ec 0x10001c000 + 577772
 56 libdyld.dylib 0x000000018ce345b8 start + 4


 Thread 1:
 0   libsystem_kernel.dylib            0x000000018cf46a88 __workq_kernreturn + 8
 1   libsystem_pthread.dylib           0x000000018d00936c _pthread_wqthread + 1452
 2   libsystem_pthread.dylib           0x000000018d008db4 start_wqthread + 4

 Thread 2:
 0   libsystem_kernel.dylib            0x000000018cf46a88 __workq_kernreturn + 8
 1   libsystem_pthread.dylib           0x000000018d00936c _pthread_wqthread + 1452
 2   libsystem_pthread.dylib           0x000000018d008db4 start_wqthread + 4

 Thread 3 name:  Dispatch queue: NSOperationQueue 0x1090b5900 :: NSOperation 0x1090f2b30 (QOS: USER_INTERACTIVE)
 Thread 3:
 0   libsystem_kernel.dylib            0x000000018cf2816c mach_msg_trap + 8
 1   libsystem_kernel.dylib            0x000000018cf27fdc mach_msg + 72
 2   CoreFoundation                    0x000000018df25cec __CFRunLoopServiceMachPort + 192
 3   CoreFoundation                    0x000000018df23908 __CFRunLoopRun + 1132
 4   CoreFoundation                    0x000000018de52048 CFRunLoopRunSpecific + 444
 5   WeChat                            0x00000001029dbac4 0x10001c000 + 43776708
 6   CoreFoundation                    0x000000018df7e160 __invoking___ + 144
 7   CoreFoundation                    0x000000018de71c3c -[NSInvocation invoke] + 284
 8   Foundation                        0x000000018ea39c98 -[NSInvocationOperation main] + 40
 9   Foundation                        0x000000018e96e954 -[__NSOperationInternal _start:] + 620
 10  Foundation                        0x000000018ea3bb90 __NSOQSchedule_f + 228
 11  libdispatch.dylib                 0x000000018ce011c0 _dispatch_client_callout + 1

 Thread 3 name:  KSCrash Exception Handler (Secondary)
 Thread 3:
 0   libsystem_kernel.dylib            0x000000018cf2816c mach_msg_trap + 8
 1   libsystem_kernel.dylib            0x000000018cf27fdc mach_msg + 72
 2   libsystem_kernel.dylib            0x000000018cf2c28c thread_suspend + 76
 3   WeChat                            0x000000010041dcf0 0x10001c000 + 4201712
 4   libsystem_pthread.dylib           0x000000018d00b860 _pthread_body + 240
 5   libsystem_pthread.dylib           0x000000018d00b770 _pthread_body + 0
 6   libsystem_pthread.dylib           0x000000018d008dbc thread_start + 4                       0x00000001947a0e6c -[UIEventFetcher thr
 .....
 EOF
 复制代码
  

           
 
 
 */
