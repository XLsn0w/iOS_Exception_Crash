# iOS_Exception_Crash
iOS_Exception异常_Crash崩溃 处理大全

```
{"app_name":"cyqp","timestamp":"2020-07-29 01:39:07.00 +0800","app_version":"1.6","slice_uuid":"d17afb64-8e39-3502-b41c-b18bf7c6a380","adam_id":0,"build_version":"18","bundleID":"qipai.guangxichangyou.com","share_with_app_devs":0,"is_first_party":0,"bug_type":"109","os_version":"iPhone OS 13.4.1 (17E262)","incident_id":"8B8D7A5F-13CF-4943-BA6B-1B0EC51D312A","name":"cyqp"}
Incident Identifier: 8B8D7A5F-13CF-4943-BA6B-1B0EC51D312A
CrashReporter Key:   90c92369f81f72aec2605dedd44a5d3b6370ac97
Hardware Model:      iPhone9,4
Process:             cyqp [424]
Path:                /private/var/containers/Bundle/Application/DDD157FD-8945-4E3E-86A5-80AD5393E958/cyqp.app/cyqp
Identifier:          qipai.guangxichangyou.com
Version:             18 (1.6)
Code Type:           ARM-64 (Native)
Role:                Foreground
Parent Process:      launchd [1]
Coalition:           qipai.guangxichangyou.com [562]


Date/Time:           2020-07-29 01:39:07.0825 +0800
Launch Time:         2020-07-29 01:38:59.6953 +0800
OS Version:          iPhone OS 13.4.1 (17E262)
Release Type:        User
Baseband Version:    4.02.02
Report Version:      104

Exception Type:  EXC_BAD_ACCESS (SIGSEGV)
Exception Subtype: KERN_INVALID_ADDRESS at 0x0000000000000528
VM Region Info: 0x528 is not in any region.  Bytes before following region: 4296030936
      REGION TYPE                      START - END             [ VSIZE] PRT/MAX SHRMOD  REGION DETAIL
      UNUSED SPACE AT START
--->  
      __TEXT                 0000000100104000-0000000100c68000 [ 11.4M] r-x/r-x SM=COW  ...cyqp.app/cyqp

Termination Signal: Segmentation fault: 11
Termination Reason: Namespace SIGNAL, Code 0xb
Terminating Process: exc handler [424]
Triggered by Thread:  0

Thread 0 name:  Dispatch queue: com.apple.main-thread
Thread 0 Crashed:
0   cyqp                              0x000000010064db08 0x100104000 + 5544712
1   cyqp                              0x00000001007df7b4 0x100104000 + 7190452
2   cyqp                              0x0000000100458128 0x100104000 + 3490088
3   libsystem_c.dylib                 0x000000019d3d34c8 0x19d380000 + 341192
4   libsystem_c.dylib                 0x000000019d3d37d8 0x19d380000 + 341976
5   nnnnnFramework                    0x000000010114a7d0 0x101144000 + 26576
6   UIKitCore                         0x00000001a0e66a90 0x1a0e10000 + 354960
7   UIKitCore                         0x00000001a0e673bc 0x1a0e10000 + 357308
8   UIKitCore                         0x00000001a111b3bc 0x1a0e10000 + 3191740
9   UIKitCore                         0x00000001a111fa7c 0x1a0e10000 + 3209852
10  UIKitCore                         0x00000001a1222c94 0x1a0e10000 + 4271252
11  UIKitCore                         0x00000001a1cde764 0x1a0e10000 + 15525732
12  UIKitCore                         0x00000001a1cb2b68 0x1a0e10000 + 15346536
13  UIKitCore                         0x00000001a1cb3070 0x1a0e10000 + 15347824
14  UIKitCore                         0x00000001a1cb31c0 0x1a0e10000 + 15348160
15  QuartzCore                        0x00000001a4295d9c 0x1a4133000 + 1453468
16  libdispatch.dylib                 0x000000019d457524 0x19d3fc000 + 374052
17  libdispatch.dylib                 0x000000019d4095b4 0x19d3fc000 + 54708
18  CoreFoundation                    0x000000019d70f748 0x19d667000 + 689992
19  CoreFoundation                    0x000000019d70a61c 0x19d667000 + 669212
20  CoreFoundation                    0x000000019d709c34 0x19d667000 + 666676
21  GraphicsServices                  0x00000001a785338c 0x1a7850000 + 13196
22  UIKitCore                         0x00000001a183c22c 0x1a0e10000 + 10666540
23  cyqp                              0x000000010012d9fc 0x100104000 + 170492
24  libdyld.dylib                     0x000000019d591800 0x19d590000 + 6144

Thread 1:
0   libsystem_kernel.dylib            0x000000019d588868 0x19d561000 + 161896
1   QiSuDunSdk                        0x000000010105d630 0x101034000 + 169520
2   QiSuDunSdk                        0x000000010105d41c 0x101034000 + 168988
3   QiSuDunSdk                        0x000000010105d1d4 0x101034000 + 168404
4   QiSuDunSdk                        0x0000000101054528 0x101034000 + 132392
5   QiSuDunSdk                        0x000000010105de14 0x101034000 + 171540
6   libsystem_pthread.dylib           0x000000019d4a7d98 0x19d49d000 + 44440
7   libsystem_pthread.dylib           0x000000019d4ab74c 0x19d49d000 + 59212

Thread 2:
0   libsystem_kernel.dylib            0x000000019d587104 0x19d561000 + 155908
1   libsystem_c.dylib                 0x000000019d3ef458 0x19d380000 + 455768
2   libc++.1.dylib                    0x000000019d612464 0x19d5cc000 + 287844
3   QiSuDunSdk                        0x00000001010a172c 0x101034000 + 448300
4   QiSuDunSdk                        0x00000001010a1820 0x101034000 + 448544
5   libsystem_pthread.dylib           0x000000019d4a7d98 0x19d49d000 + 44440
6   libsystem_pthread.dylib           0x000000019d4ab74c 0x19d49d000 + 59212

Thread 3 name:  Dispatch queue: com.apple.runningboardservices.background-workloop
Thread 3:
0   libsystem_kernel.dylib            0x000000019d565198 0x19d561000 + 16792
1   libsystem_kernel.dylib            0x000000019d56460c 0x19d561000 + 13836
2   libdispatch.dylib                 0x000000019d412c04 0x19d3fc000 + 93188
3   libdispatch.dylib                 0x000000019d412fcc 0x19d3fc000 + 94156
4   libxpc.dylib                      0x000000019d3589d8 0x19d34d000 + 47576
5   RunningBoardServices              0x00000001a0306ba8 0x1a02dc000 + 175016
6   RunningBoardServices              0x00000001a03072dc 0x1a02dc000 + 176860
7   RunningBoardServices              0x00000001a02ef0bc 0x1a02dc000 + 78012
8   RunningBoardServices              0x00000001a02ebda4 0x1a02dc000 + 64932
9   AssertionServices                 0x00000001a1f265fc 0x1a1f25000 + 5628
10  AssertionServices                 0x00000001a1f2b0b0 0x1a1f25000 + 24752
11  libdispatch.dylib                 0x000000019d4569a8 0x19d3fc000 + 371112
12  libdispatch.dylib                 0x000000019d457524 0x19d3fc000 + 374052
13  libdispatch.dylib                 0x000000019d4054a4 0x19d3fc000 + 38052
14  libdispatch.dylib                 0x000000019d40d78c 0x19d3fc000 + 71564
15  libsystem_pthread.dylib           0x000000019d4a8b74 0x19d49d000 + 47988
16  libsystem_pthread.dylib           0x000000019d4ab740 0x19d49d000 + 59200

Thread 4:
0   libsystem_pthread.dylib           0x000000019d4ab738 0x19d49d000 + 59192

Thread 5:
0   libsystem_pthread.dylib           0x000000019d4ab738 0x19d49d000 + 59192

Thread 6 name:  com.apple.uikit.eventfetch-thread
Thread 6:
0   libsystem_kernel.dylib            0x000000019d565198 0x19d561000 + 16792
1   libsystem_kernel.dylib            0x000000019d56460c 0x19d561000 + 13836
2   CoreFoundation                    0x000000019d70f3b4 0x19d667000 + 689076
3   CoreFoundation                    0x000000019d70a3e8 0x19d667000 + 668648
4   CoreFoundation                    0x000000019d709c34 0x19d667000 + 666676
5   Foundation                        0x000000019da4cbcc 0x19da45000 + 31692
6   Foundation                        0x000000019da4caac 0x19da45000 + 31404
7   UIKitCore                         0x00000001a18de160 0x1a0e10000 + 11329888
8   Foundation                        0x000000019db7b9d0 0x19da45000 + 1272272
9   libsystem_pthread.dylib           0x000000019d4a7d98 0x19d49d000 + 44440
10  libsystem_pthread.dylib           0x000000019d4ab74c 0x19d49d000 + 59212

Thread 7 name:  AVAudioSession Notify Thread
Thread 7:
0   libsystem_kernel.dylib            0x000000019d565198 0x19d561000 + 16792
1   libsystem_kernel.dylib            0x000000019d56460c 0x19d561000 + 13836
2   CoreFoundation                    0x000000019d70f3b4 0x19d667000 + 689076
3   CoreFoundation                    0x000000019d70a3e8 0x19d667000 + 668648
4   CoreFoundation                    0x000000019d709c34 0x19d667000 + 666676
5   AVFAudio                          0x00000001aa4b25dc 0x1aa44d000 + 415196
6   AVFAudio                          0x00000001aa503300 0x1aa44d000 + 746240
7   libsystem_pthread.dylib           0x000000019d4a7d98 0x19d49d000 + 44440
8   libsystem_pthread.dylib           0x000000019d4ab74c 0x19d49d000 + 59212

Thread 8 name:  com.apple.CoreMotion.MotionThread
Thread 8:
0   libsystem_kernel.dylib            0x000000019d565198 0x19d561000 + 16792
1   libsystem_kernel.dylib            0x000000019d56460c 0x19d561000 + 13836
2   CoreFoundation                    0x000000019d70f3b4 0x19d667000 + 689076
3   CoreFoundation                    0x000000019d70a3e8 0x19d667000 + 668648
4   CoreFoundation                    0x000000019d709c34 0x19d667000 + 666676
5   CoreFoundation                    0x000000019d70a990 0x19d667000 + 670096
6   CoreMotion                        0x00000001aa36f188 0x1aa285000 + 958856
7   libsystem_pthread.dylib           0x000000019d4a7d98 0x19d49d000 + 44440
8   libsystem_pthread.dylib           0x000000019d4ab74c 0x19d49d000 + 59212

Thread 9 name:  AURemoteIO::IOThread
Thread 9:
0   libsystem_kernel.dylib            0x000000019d565198 0x19d561000 + 16792
1   libsystem_kernel.dylib            0x000000019d56460c 0x19d561000 + 13836
2   libEmbeddedSystemAUs.dylib        0x00000001bbe38330 0x1bbdac000 + 574256
3   libAudioToolboxUtility.dylib      0x00000001a8afc614 0x1a8aed000 + 62996
4   libsystem_pthread.dylib           0x000000019d4a7d98 0x19d49d000 + 44440
5   libsystem_pthread.dylib           0x000000019d4ab74c 0x19d49d000 + 59212

Thread 10:
0   libsystem_kernel.dylib            0x000000019d586b58 0x19d561000 + 154456
1   libsystem_pthread.dylib           0x000000019d4a0ce4 0x19d49d000 + 15588
2   QiSuDunSdk                        0x000000010105dce0 0x101034000 + 171232
3   QiSuDunSdk                        0x000000010105d3e4 0x101034000 + 168932
4   QiSuDunSdk                        0x0000000101072310 0x101034000 + 254736
5   QiSuDunSdk                        0x0000000101095c3c 0x101034000 + 400444
6   QiSuDunSdk                        0x0000000101095bc0 0x101034000 + 400320
7   libsystem_pthread.dylib           0x000000019d4a7d98 0x19d49d000 + 44440
8   libsystem_pthread.dylib           0x000000019d4ab74c 0x19d49d000 + 59212

Thread 11:
0   libsystem_kernel.dylib            0x000000019d588868 0x19d561000 + 161896
1   QiSuDunSdk                        0x000000010105d630 0x101034000 + 169520
2   QiSuDunSdk                        0x000000010105d41c 0x101034000 + 168988
3   QiSuDunSdk                        0x0000000101072310 0x101034000 + 254736
4   QiSuDunSdk                        0x000000010106fc30 0x101034000 + 244784
5   QiSuDunSdk                        0x000000010105de14 0x101034000 + 171540
6   libsystem_pthread.dylib           0x000000019d4a7d98 0x19d49d000 + 44440
7   libsystem_pthread.dylib           0x000000019d4ab74c 0x19d49d000 + 59212

Thread 12:
0   libsystem_kernel.dylib            0x000000019d586b58 0x19d561000 + 154456
1   libsystem_pthread.dylib           0x000000019d4a0ce4 0x19d49d000 + 15588
2   QiSuDunSdk                        0x000000010105dce0 0x101034000 + 171232
3   QiSuDunSdk                        0x000000010105d3e4 0x101034000 + 168932
4   QiSuDunSdk                        0x0000000101072310 0x101034000 + 254736
5   QiSuDunSdk                        0x000000010106fc30 0x101034000 + 244784
6   QiSuDunSdk                        0x000000010105de14 0x101034000 + 171540
7   libsystem_pthread.dylib           0x000000019d4a7d98 0x19d49d000 + 44440
8   libsystem_pthread.dylib           0x000000019d4ab74c 0x19d49d000 + 59212

Thread 13:
0   libsystem_kernel.dylib            0x000000019d586b58 0x19d561000 + 154456
1   libsystem_pthread.dylib           0x000000019d4a0ce4 0x19d49d000 + 15588
2   QiSuDunSdk                        0x000000010105dce0 0x101034000 + 171232
3   QiSuDunSdk                        0x000000010105d3e4 0x101034000 + 168932
4   QiSuDunSdk                        0x0000000101072310 0x101034000 + 254736
5   QiSuDunSdk                        0x000000010106fc30 0x101034000 + 244784
6   QiSuDunSdk                        0x000000010105de14 0x101034000 + 171540
7   libsystem_pthread.dylib           0x000000019d4a7d98 0x19d49d000 + 44440
8   libsystem_pthread.dylib           0x000000019d4ab74c 0x19d49d000 + 59212

Thread 14:
0   libsystem_kernel.dylib            0x000000019d586b58 0x19d561000 + 154456
1   libsystem_pthread.dylib           0x000000019d4a0ce4 0x19d49d000 + 15588
2   QiSuDunSdk                        0x000000010105dce0 0x101034000 + 171232
3   QiSuDunSdk                        0x000000010105d3e4 0x101034000 + 168932
4   QiSuDunSdk                        0x0000000101072310 0x101034000 + 254736
5   QiSuDunSdk                        0x000000010106fc30 0x101034000 + 244784
6   QiSuDunSdk                        0x000000010105de14 0x101034000 + 171540
7   libsystem_pthread.dylib           0x000000019d4a7d98 0x19d49d000 + 44440
8   libsystem_pthread.dylib           0x000000019d4ab74c 0x19d49d000 + 59212

Thread 15:
0   libsystem_kernel.dylib            0x000000019d586b58 0x19d561000 + 154456
1   libsystem_pthread.dylib           0x000000019d4a0ce4 0x19d49d000 + 15588
2   QiSuDunSdk                        0x000000010105dce0 0x101034000 + 171232
3   QiSuDunSdk                        0x000000010105d3e4 0x101034000 + 168932
4   QiSuDunSdk                        0x0000000101072310 0x101034000 + 254736
5   QiSuDunSdk                        0x000000010106fc30 0x101034000 + 244784
6   QiSuDunSdk                        0x000000010105de14 0x101034000 + 171540
7   libsystem_pthread.dylib           0x000000019d4a7d98 0x19d49d000 + 44440
8   libsystem_pthread.dylib           0x000000019d4ab74c 0x19d49d000 + 59212

Thread 16:
0   libsystem_kernel.dylib            0x000000019d586b58 0x19d561000 + 154456
1   libsystem_pthread.dylib           0x000000019d4a0ce4 0x19d49d000 + 15588
2   QiSuDunSdk                        0x000000010105dce0 0x101034000 + 171232
3   QiSuDunSdk                        0x000000010105d3e4 0x101034000 + 168932
4   QiSuDunSdk                        0x0000000101072310 0x101034000 + 254736
5   QiSuDunSdk                        0x000000010106fc30 0x101034000 + 244784
6   QiSuDunSdk                        0x000000010105de14 0x101034000 + 171540
7   libsystem_pthread.dylib           0x000000019d4a7d98 0x19d49d000 + 44440
8   libsystem_pthread.dylib           0x000000019d4ab74c 0x19d49d000 + 59212

Thread 17:
0   libsystem_kernel.dylib            0x000000019d586b58 0x19d561000 + 154456
1   libsystem_pthread.dylib           0x000000019d4a0ce4 0x19d49d000 + 15588
2   QiSuDunSdk                        0x000000010105dce0 0x101034000 + 171232
3   QiSuDunSdk                        0x000000010105d3e4 0x101034000 + 168932
4   QiSuDunSdk                        0x0000000101072310 0x101034000 + 254736
5   QiSuDunSdk                        0x000000010106fc30 0x101034000 + 244784
6   QiSuDunSdk                        0x000000010105de14 0x101034000 + 171540
7   libsystem_pthread.dylib           0x000000019d4a7d98 0x19d49d000 + 44440
8   libsystem_pthread.dylib           0x000000019d4ab74c 0x19d49d000 + 59212

Thread 18:
0   libsystem_kernel.dylib            0x000000019d586b58 0x19d561000 + 154456
1   libsystem_pthread.dylib           0x000000019d4a0ce4 0x19d49d000 + 15588
2   QiSuDunSdk                        0x000000010105dce0 0x101034000 + 171232
3   QiSuDunSdk                        0x000000010105d3e4 0x101034000 + 168932
4   QiSuDunSdk                        0x0000000101072310 0x101034000 + 254736
5   QiSuDunSdk                        0x000000010106fc30 0x101034000 + 244784
6   QiSuDunSdk                        0x000000010105de14 0x101034000 + 171540
7   libsystem_pthread.dylib           0x000000019d4a7d98 0x19d49d000 + 44440
8   libsystem_pthread.dylib           0x000000019d4ab74c 0x19d49d000 + 59212

Thread 19:
0   libsystem_kernel.dylib            0x000000019d586b58 0x19d561000 + 154456
1   libsystem_pthread.dylib           0x000000019d4a0ce4 0x19d49d000 + 15588
2   QiSuDunSdk                        0x000000010105dce0 0x101034000 + 171232
3   QiSuDunSdk                        0x000000010105d3e4 0x101034000 + 168932
4   QiSuDunSdk                        0x0000000101072310 0x101034000 + 254736
5   QiSuDunSdk                        0x000000010106fc30 0x101034000 + 244784
6   QiSuDunSdk                        0x000000010105de14 0x101034000 + 171540
7   libsystem_pthread.dylib           0x000000019d4a7d98 0x19d49d000 + 44440
8   libsystem_pthread.dylib           0x000000019d4ab74c 0x19d49d000 + 59212

Thread 20:
0   libsystem_kernel.dylib            0x000000019d586b58 0x19d561000 + 154456
1   libsystem_pthread.dylib           0x000000019d4a0ce4 0x19d49d000 + 15588
2   QiSuDunSdk                        0x000000010105dce0 0x101034000 + 171232
3   QiSuDunSdk                        0x000000010105d3e4 0x101034000 + 168932
4   QiSuDunSdk                        0x0000000101072310 0x101034000 + 254736
5   QiSuDunSdk                        0x000000010106fc30 0x101034000 + 244784
6   QiSuDunSdk                        0x000000010105de14 0x101034000 + 171540
7   libsystem_pthread.dylib           0x000000019d4a7d98 0x19d49d000 + 44440
8   libsystem_pthread.dylib           0x000000019d4ab74c 0x19d49d000 + 59212

Thread 21:
0   libsystem_kernel.dylib            0x000000019d586b58 0x19d561000 + 154456
1   libsystem_pthread.dylib           0x000000019d4a0ce4 0x19d49d000 + 15588
2   QiSuDunSdk                        0x000000010105dce0 0x101034000 + 171232
3   QiSuDunSdk                        0x000000010105d3e4 0x101034000 + 168932
4   QiSuDunSdk                        0x0000000101072310 0x101034000 + 254736
5   QiSuDunSdk                        0x000000010106fc30 0x101034000 + 244784
6   QiSuDunSdk                        0x000000010105de14 0x101034000 + 171540
7   libsystem_pthread.dylib           0x000000019d4a7d98 0x19d49d000 + 44440
8   libsystem_pthread.dylib           0x000000019d4ab74c 0x19d49d000 + 59212

Thread 22:
0   libsystem_pthread.dylib           0x000000019d4ab738 0x19d49d000 + 59192

Thread 23:
0   libsystem_pthread.dylib           0x000000019d4ab738 0x19d49d000 + 59192

Thread 24:
0   libsystem_pthread.dylib           0x000000019d4ab738 0x19d49d000 + 59192

Thread 25 name:  com.apple.NSURLConnectionLoader
Thread 25:
0   libsystem_kernel.dylib            0x000000019d565198 0x19d561000 + 16792
1   libsystem_kernel.dylib            0x000000019d56460c 0x19d561000 + 13836
2   CoreFoundation                    0x000000019d70f3b4 0x19d667000 + 689076
3   CoreFoundation                    0x000000019d70a3e8 0x19d667000 + 668648
4   CoreFoundation                    0x000000019d709c34 0x19d667000 + 666676
5   CFNetwork                         0x00000001a09cec44 0x1a09cd000 + 7236
6   Foundation                        0x000000019db7b9d0 0x19da45000 + 1272272
7   libsystem_pthread.dylib           0x000000019d4a7d98 0x19d49d000 + 44440
8   libsystem_pthread.dylib           0x000000019d4ab74c 0x19d49d000 + 59212

Thread 26 name:  com.autonavi.AMapLocationThread
Thread 26:
0   libsystem_kernel.dylib            0x000000019d565198 0x19d561000 + 16792
1   libsystem_kernel.dylib            0x000000019d56460c 0x19d561000 + 13836
2   CoreFoundation                    0x000000019d70f3b4 0x19d667000 + 689076
3   CoreFoundation                    0x000000019d70a3e8 0x19d667000 + 668648
4   CoreFoundation                    0x000000019d709c34 0x19d667000 + 666676
5   Foundation                        0x000000019da4cbcc 0x19da45000 + 31692
6   Foundation                        0x000000019da85fe0 0x19da45000 + 266208
7   cyqp                              0x0000000100a0a164 0x100104000 + 9462116
8   Foundation                        0x000000019db7b9d0 0x19da45000 + 1272272
9   libsystem_pthread.dylib           0x000000019d4a7d98 0x19d49d000 + 44440
10  libsystem_pthread.dylib           0x000000019d4ab74c 0x19d49d000 + 59212

Thread 27:
0   libsystem_kernel.dylib            0x000000019d589010 0x19d561000 + 163856
1   cyqp                              0x00000001004ca928 0x100104000 + 3959080
2   cyqp                              0x00000001004c0be0 0x100104000 + 3918816
3   cyqp                              0x00000001004c318c 0x100104000 + 3928460
4   libsystem_pthread.dylib           0x000000019d4a7d98 0x19d49d000 + 44440
5   libsystem_pthread.dylib           0x000000019d4ab74c 0x19d49d000 + 59212

Thread 28 name:  com.apple.CFSocket.private
Thread 28:
0   libsystem_kernel.dylib            0x000000019d587014 0x19d561000 + 155668
1   CoreFoundation                    0x000000019d71cfe8 0x19d667000 + 745448
2   libsystem_pthread.dylib           0x000000019d4a7d98 0x19d49d000 + 44440
3   libsystem_pthread.dylib           0x000000019d4ab74c 0x19d49d000 + 59212

Thread 29 name:  AMapNetwork
Thread 29:
0   libsystem_kernel.dylib            0x000000019d565198 0x19d561000 + 16792
1   libsystem_kernel.dylib            0x000000019d56460c 0x19d561000 + 13836
2   CoreFoundation                    0x000000019d70f3b4 0x19d667000 + 689076
3   CoreFoundation                    0x000000019d70a3e8 0x19d667000 + 668648
4   CoreFoundation                    0x000000019d709c34 0x19d667000 + 666676
5   Foundation                        0x000000019da4cbcc 0x19da45000 + 31692
6   Foundation                        0x000000019da85fe0 0x19da45000 + 266208
7   cyqp                              0x0000000100a5fdb4 0x100104000 + 9813428
8   Foundation                        0x000000019db7b9d0 0x19da45000 + 1272272
9   libsystem_pthread.dylib           0x000000019d4a7d98 0x19d49d000 + 44440
10  libsystem_pthread.dylib           0x000000019d4ab74c 0x19d49d000 + 59212

Thread 30 name:  com.apple.coreaudio.AQClient
Thread 30:
0   libsystem_kernel.dylib            0x000000019d565198 0x19d561000 + 16792
1   libsystem_kernel.dylib            0x000000019d56460c 0x19d561000 + 13836
2   CoreFoundation                    0x000000019d70f3b4 0x19d667000 + 689076
3   CoreFoundation                    0x000000019d70a3e8 0x19d667000 + 668648
4   CoreFoundation                    0x000000019d709c34 0x19d667000 + 666676
5   AudioToolbox                      0x00000001a8a3b4d4 0x1a88b8000 + 1586388
6   libAudioToolboxUtility.dylib      0x00000001a8afc614 0x1a8aed000 + 62996
7   libsystem_pthread.dylib           0x000000019d4a7d98 0x19d49d000 + 44440
8   libsystem_pthread.dylib           0x000000019d4ab74c 0x19d49d000 + 59212

Thread 0 crashed with ARM Thread State (64-bit):
    x0: 0x0000000100f26fa0   x1: 0x000000016fcfa4c8   x2: 0x0000000000000000   x3: 0x000000000000000c
    x4: 0x0000000000000000   x5: 0x0000000000000000   x6: 0x000000016fcf89a8   x7: 0x0000000100c334c8
    x8: 0x000000000000018d   x9: 0x0000000100f3b200  x10: 0x22223113135b4859  x11: 0x000000000000018c
   x12: 0x000000000000018c  x13: 0x00000000000000a5  x14: 0x0000000000000000  x15: 0x000000000000013e
   x16: 0x000000019d4a1d38  x17: 0x0000000067e00000  x18: 0x0000000000000000  x19: 0x00000002825c4c00
   x20: 0x00000002825c4c00  x21: 0x00000001ea662000  x22: 0x0000000102008200  x23: 0x0000000000000000
   x24: 0x0000000000000008  x25: 0x00000001ea662000  x26: 0x0000000000000015  x27: 0x0000000000000002
   x28: 0x00000001ea661030   fp: 0x000000016fcfa4e0   lr: 0x00000001007df7b4
    sp: 0x000000016fcfa4c0   pc: 0x000000010064db08 cpsr: 0x20000000
   esr: 0x92000006 (Data Abort) byte read Translation fault

Binary Images:
0x100104000 - 0x100c67fff cyqp arm64  <d17afb648e393502b41cb18bf7c6a380> /var/containers/Bundle/Application/DDD157FD-8945-4E3E-86A5-80AD5393E958/cyqp.app/cyqp
0x101034000 - 0x1010bbfff QiSuDunSdk arm64  <50dc4cec94093f71a4cbb1e564612d2c> /var/containers/Bundle/Application/DDD157FD-8945-4E3E-86A5-80AD5393E958/cyqp.app/Frameworks/QiSuDunSdk.framework/QiSuDunSdk
0x101144000 - 0x10114bfff nnnnnFramework arm64  <bcd14564597136b593c990286480c67f> /var/containers/Bundle/Application/DDD157FD-8945-4E3E-86A5-80AD5393E958/cyqp.app/Frameworks/YiWenFramework.framework/nnnnnFramework
0x101200000 - 0x101263fff dyld arm64  <23eead922ec9376cbb08574507ab6177> /usr/lib/dyld
0x101700000 - 0x10170bfff libobjc-trampolines.dylib arm64  <2df134bae62230edb227eb9333bfa4d9> /usr/lib/libobjc-trampolines.dylib
0x19d336000 - 0x19d34cfff libsystem_trace.dylib arm64  <f67d8aff28893f9abf166036c3203325> /usr/lib/system/libsystem_trace.dylib
0x19d34d000 - 0x19d37efff libxpc.dylib arm64  <9e9d069de3b136fa85755e1d9e6b6b54> /usr/lib/system/libxpc.dylib
0x19d37f000 - 0x19d37ffff libsystem_blocks.dylib arm64  <0afa438b8355370794f5015ad81f32df> /usr/lib/system/libsystem_blocks.dylib
0x19d380000 - 0x19d3fbfff libsystem_c.dylib arm64  <8d39ff48e14c3f868e1090f54896bb65> /usr/lib/system/libsystem_c.dylib
0x19d3fc000 - 0x19d470fff libdispatch.dylib arm64  <5a83d0cf8fb937278a32012d20a47ec8> /usr/lib/system/libdispatch.dylib
0x19d471000 - 0x19d491fff libsystem_malloc.dylib arm64  <a0a7d67af0f3399a8f006f92716d8e6f> /usr/lib/system/libsystem_malloc.dylib
0x19d492000 - 0x19d49cfff libsystem_platform.dylib arm64  <a5d5822c76223859b0c0b869b7e244b5> /usr/lib/system/libsystem_platform.dylib
0x19d49d000 - 0x19d4adfff libsystem_pthread.dylib arm64  <fb1dd49f0cfb3114bdb40ef7be44f6bc> /usr/lib/system/libsystem_pthread.dylib
0x19d4ae000 - 0x19d4dffff libobjc.A.dylib arm64  <091241f8e94c39ba9ca67352e998bb41> /usr/lib/libobjc.A.dylib
0x19d4e0000 - 0x19d547fff libcorecrypto.dylib arm64  <28c07c08a95635b1b04e88d84542020b> /usr/lib/system/libcorecrypto.dylib
0x19d548000 - 0x19d560fff libc++abi.dylib arm64  <f07199ac8a903127b17f0a906ffb7302> /usr/lib/libc++abi.dylib
0x19d561000 - 0x19d58ffff libsystem_kernel.dylib arm64  <b422ba38a9f63062be28d28d39e3fe25> /usr/lib/system/libsystem_kernel.dylib
0x19d590000 - 0x19d5c2fff libdyld.dylib arm64  <876fb49abfba37bfad376ffc90f7f981> /usr/lib/system/libdyld.dylib
0x19d5c3000 - 0x19d5cbfff libsystem_darwin.dylib arm64  <fc50d2ff80ac31179ff0608fa6cff3a3> /usr/lib/system/libsystem_darwin.dylib
0x19d5cc000 - 0x19d625fff libc++.1.dylib arm64  <d7934e7f3eed3c078d1342fe55250c88> /usr/lib/libc++.1.dylib
0x19d626000 - 0x19d666fff libsystem_info.dylib arm64  <6a94223de5dc3df6b89780ba56191d92> /usr/lib/system/libsystem_info.dylib
0x19d667000 - 0x19d9dafff CoreFoundation arm64  <409609cd841038e1ba5dbded609d2018> /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
0x19d9db000 - 0x19da44fff SystemConfiguration arm64  <b1f843cc55883c0ba02fc5b80883cc9c> /System/Library/Frameworks/SystemConfiguration.framework/SystemConfiguration
0x19da45000 - 0x19dcfcfff Foundation arm64  <1a46239df2fc34b695bc9f38869f0c85> /System/Library/Frameworks/Foundation.framework/Foundation
0x19dcfd000 - 0x19dd2ffff libCRFSuite.dylib arm64  <b5116ed3cf69347d85687d2c8d5d76c0> /usr/lib/libCRFSuite.dylib
0x19dd30000 - 0x19deaafff CoreServices arm64  <43035d98ba1c3d5d972fd61df826fcb3> /System/Library/Frameworks/CoreServices.framework/CoreServices
0x19deab000 - 0x19df0bfff libSparse.dylib arm64  <fd83188d02163838a7c012b81f36e440> /System/Library/Frameworks/Accelerate.framework/Frameworks/vecLib.framework/libSparse.dylib
0x19df0c000 - 0x19e3f6fff ImageIO arm64  <428fc36a6d0234b5a10cc2cf6f9e0674> /System/Library/Frameworks/ImageIO.framework/ImageIO
0x19e3f7000 - 0x19e3f9fff ConstantClasses arm64  <07aead6b70b73890b27f7aea1cd02350> /System/Library/PrivateFrameworks/ConstantClasses.framework/ConstantClasses
0x19e3fa000 - 0x19e598fff CoreText arm64  <3a068b6f533e36b18e9823833c815854> /System/Library/Frameworks/CoreText.framework/CoreText
0x19e599000 - 0x19e6cefff Security arm64  <d5a88c36cb0932a6906055bbc4b6817d> /System/Library/Frameworks/Security.framework/Security
0x19e6cf000 - 0x19e772fff IOKit arm64  <d138895882be3a12964aa53ca8da1b74> /System/Library/Frameworks/IOKit.framework/Versions/A/IOKit
0x19e773000 - 0x19e7aafff libMobileGestalt.dylib arm64  <fe7d38beb09530eca24b70bc964ec273> /usr/lib/libMobileGestalt.dylib
0x19e7ab000 - 0x19e807fff libprotobuf.dylib arm64  <027d49d7fea839cda49a4a4fb32c7f6f> /usr/lib/libprotobuf.dylib
0x19e808000 - 0x19e819fff libprotobuf-lite.dylib arm64  <2c82919a66fa30a7841320190f2c202d> /usr/lib/libprotobuf-lite.dylib
0x19e81a000 - 0x19ea6afff libicucore.A.dylib arm64  <e00735d86bab31f8acbac8fdb01f290e> /usr/lib/libicucore.A.dylib
0x19ea6b000 - 0x19ea94fff CoreServicesInternal arm64  <7b6acc45f64532258e2012c49fbcde7a> /System/Library/PrivateFrameworks/CoreServicesInternal.framework/CoreServicesInternal
0x19ea95000 - 0x19eadcfff WirelessDiagnostics arm64  <dc60c14089ab3ecb916e94fb63a2ae46> /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/WirelessDiagnostics
0x19eadd000 - 0x19eb16fff libAWDSupport.dylib arm64  <52926ffdcfd0397881e93a4df6893672> /usr/lib/libAWDSupport.dylib
0x19eb17000 - 0x19ef9bfff CoreAudio arm64  <e467570caf523683bf36ce2594f1c98e> /System/Library/Frameworks/CoreAudio.framework/CoreAudio
0x19ef9c000 - 0x19f268fff CoreImage arm64  <4aee50c9e546312ead5d721a6afdb059> /System/Library/Frameworks/CoreImage.framework/CoreImage
0x19f269000 - 0x19f357fff LanguageModeling arm64  <1d022988ea363113a096c2f107568542> /System/Library/PrivateFrameworks/LanguageModeling.framework/LanguageModeling
0x19f358000 - 0x19f39efff Lexicon arm64  <9d08273daeac34e78493ff7bff76cab2> /System/Library/PrivateFrameworks/Lexicon.framework/Lexicon
0x19f39f000 - 0x19f521fff libsqlite3.dylib arm64  <4fadb9ee56a73afca3604780ddf3411b> /usr/lib/libsqlite3.dylib
0x19f522000 - 0x19f554fff MobileKeyBag arm64  <6cf66de926bb32089688747ed1dbd888> /System/Library/PrivateFrameworks/MobileKeyBag.framework/MobileKeyBag
0x19f555000 - 0x19f55efff libsystem_notify.dylib arm64  <21a918766a2c3f89855046e0f854018a> /usr/lib/system/libsystem_notify.dylib
0x19f55f000 - 0x19f740fff CoreDuet arm64  <5640bda664273303800ed189c16e8049> /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
0x19f741000 - 0x19f883fff Montreal arm64  <69a3d186833f35c5963a43e4d365e897> /System/Library/PrivateFrameworks/Montreal.framework/Montreal
0x19f989000 - 0x19f9c6fff AppSupport arm64  <1731e2fba0303bdbb0cf8b02e5e56ecd> /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
0x19f9c7000 - 0x19fe98fff libnetwork.dylib arm64  <cf9b76bf435b38d2aed3fb2c050d9216> /usr/lib/libnetwork.dylib
0x19fe99000 - 0x19ffa5fff ManagedConfiguration arm64  <a40f654260d932528c5ebff3f5575cab> /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
0x19ffa6000 - 0x19ffcffff CoreServicesStore arm64  <c16b4fad3e753a2e85d67639481e8080> /System/Library/PrivateFrameworks/CoreServicesStore.framework/CoreServicesStore
0x19ffd0000 - 0x19fff0fff UserManagement arm64  <ad5afd364e75332288e4a3bbcce41b5a> /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
0x19fff1000 - 0x1a02a8fff CoreML arm64  <4b1ed9735bef37929aa9775df017a4f2> /System/Library/Frameworks/CoreML.framework/CoreML
0x1a02a9000 - 0x1a02bffff ProtocolBuffer arm64  <4e652067e296363bbfa380eba32585ad> /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
0x1a02c0000 - 0x1a02dafff CommonUtilities arm64  <8c65f3b91e6d322ebeedf8a0e60e717a> /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
0x1a02db000 - 0x1a02dbfff libenergytrace.dylib arm64  <b9fc54b519c53301bda0c5607f0e7806> /usr/lib/libenergytrace.dylib
0x1a02dc000 - 0x1a0312fff RunningBoardServices arm64  <c78723a9f231370b8944596226f2b836> /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
0x1a0313000 - 0x1a0390fff BaseBoard arm64  <33a252545a9730ab9cc7fad0345d4758> /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
0x1a08e7000 - 0x1a0959fff CoreLocation arm64  <c8b1e677d38435d38b12bab96c65a426> /System/Library/Frameworks/CoreLocation.framework/CoreLocation
0x1a0967000 - 0x1a09bbfff Accounts arm64  <75940abf4f773731855da69467dbb796> /System/Library/Frameworks/Accounts.framework/Accounts
0x1a09cd000 - 0x1a0d2ffff CFNetwork arm64  <c4865497192b3dbe81e984a99b788adf> /System/Library/Frameworks/CFNetwork.framework/CFNetwork
0x1a0d30000 - 0x1a0e0ffff UIFoundation arm64  <5633754447e039efbb34f207fda2553c> /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
0x1a0e10000 - 0x1a1f24fff UIKitCore arm64  <3062ff32218237a2a5f9b38f6fb6b8c3> /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
0x1a1f25000 - 0x1a1f32fff AssertionServices arm64  <eff14a5c8feb33c1ac3004921caa2a25> /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
0x1a1f33000 - 0x1a2005fff CoreTelephony arm64  <f04a58a0c439319784c1f4ea154f6363> /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
0x1a2006000 - 0x1a200bfff AggregateDictionary arm64  <e0ce74236eb13c98bb05186b7f4e3d2b> /System/Library/PrivateFrameworks/AggregateDictionary.framework/AggregateDictionary
0x1a200c000 - 0x1a2022fff libsystem_asl.dylib arm64  <24190e9ac7db3006b4dfc5e64e85774a> /usr/lib/system/libsystem_asl.dylib
0x1a209c000 - 0x1a23c4fff CoreData arm64  <a654d396b79c3f469e3fbe9ec0ee1af4> /System/Library/Frameworks/CoreData.framework/CoreData
0x1a262e000 - 0x1a2659fff BoardServices arm64  <728b59e6907e31e5892de5b2c55c48ce> /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
0x1a265a000 - 0x1a270ffff libboringssl.dylib arm64  <e764c033b42637618fe522445b621fcf> /usr/lib/libboringssl.dylib
0x1a2710000 - 0x1a271efff libsystem_networkextension.dylib arm64  <3a3722da76863c2a99c2cce0e3924bf7> /usr/lib/system/libsystem_networkextension.dylib
0x1a271f000 - 0x1a273ffff CoreAnalytics arm64  <85843ee0a89b3316a3e68531eba75336> /System/Library/PrivateFrameworks/CoreAnalytics.framework/CoreAnalytics
0x1a2740000 - 0x1a28b0fff CloudKit arm64  <d54d14692ec130d7b5af5f852438dc3e> /System/Library/Frameworks/CloudKit.framework/CloudKit
0x1a28b1000 - 0x1a28fefff SpringBoardServices arm64  <50878840805636d7bff4a6aa6d6cdfa9> /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
0x1a28ff000 - 0x1a2971fff FrontBoardServices arm64  <ca8e712fa22732ae842b65567f6046bb> /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
0x1a2972000 - 0x1a2a99fff Network arm64  <38a032852b86333e95c553eb41e5d3e5> /System/Library/Frameworks/Network.framework/Network
0x1a2a9a000 - 0x1a2af6fff libusrtcp.dylib arm64  <10fe0faf8a4d3bcfbc43e8a951656957> /usr/lib/libusrtcp.dylib
0x1a2af7000 - 0x1a2afefff libsystem_symptoms.dylib arm64  <a0e89bc6db7f3c578468bdc9ae67fdcb> /usr/lib/system/libsystem_symptoms.dylib
0x1a2aff000 - 0x1a39e9fff GeoServices arm64  <d2fc5b30d98a352d952013a5b60a073b> /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
0x1a39ea000 - 0x1a39f2fff TCC arm64  <e8eb1bfdf24d34f2a53b5d0700632050> /System/Library/PrivateFrameworks/TCC.framework/TCC
0x1a39f3000 - 0x1a3a4cfff IMFoundation arm64  <b2d85b147b823944beebc644d365b564> /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
0x1a3a4d000 - 0x1a3bc0fff CoreUtils arm64  <b642c3a48cdc3b1aba6d651b7e00d61c> /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
0x1a3ca9000 - 0x1a3cb2fff libsystem_containermanager.dylib arm64  <4764ee5a2f0a3fbb8a756f60f0e02cd8> /usr/lib/system/libsystem_containermanager.dylib
0x1a3cb3000 - 0x1a3d2efff AppleAccount arm64  <972cea5083b43105b83f737be8ad7a43> /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
0x1a3d2f000 - 0x1a3d49fff ApplePushService arm64  <89033f36d91031a594a517ecea968a3a> /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
0x1a3d4a000 - 0x1a3e32fff IDS arm64  <cf2b018761f736d4a1dfad15aa703c85> /System/Library/PrivateFrameworks/IDS.framework/IDS
0x1a3e33000 - 0x1a3f5dfff IDSFoundation arm64  <a6bd395156ff3624b78997bb3ed24a06> /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
0x1a3f5e000 - 0x1a3f5ffff libCTGreenTeaLogger.dylib arm64  <2ab5f36320803bda84913992c492743e> /usr/lib/libCTGreenTeaLogger.dylib
0x1a3fc4000 - 0x1a40c4fff CoreMedia arm64  <b9bf44cd041a37af8879451f66687468> /System/Library/Frameworks/CoreMedia.framework/CoreMedia
0x1a40c5000 - 0x1a40d4fff UIKitServices arm64  <0eeb42c795483dba82a142eeda85503e> /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
0x1a40d5000 - 0x1a4132fff BackBoardServices arm64  <6f0540d2fedc308eacff631bff19cd69> /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
0x1a4133000 - 0x1a4384fff QuartzCore arm64  <ba9eccee9f613baab8a88eb3b7e0a24f> /System/Library/Frameworks/QuartzCore.framework/QuartzCore
0x1a4385000 - 0x1a444cfff ColorSync arm64  <503c108270703f1786df14588e7f9ff7> /System/Library/PrivateFrameworks/ColorSync.framework/ColorSync
0x1a444d000 - 0x1a49bcfff CoreGraphics arm64  <e068b7652d603d90aba30df6da3578bc> /System/Library/Frameworks/CoreGraphics.framework/CoreGraphics
0x1a4aed000 - 0x1a4b1bfff UserNotifications arm64  <44b07041e9723af2a6446a04bc8588a7> /System/Library/Frameworks/UserNotifications.framework/UserNotifications
0x1a4b1c000 - 0x1a4b3ffff LocationSupport arm64  <470b39d55daf3170b1a38841292d494d> /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
0x1a4c9c000 - 0x1a52dbfff WebKit arm64  <0d71fc8cc7e331948094d1c767c7bc09> /System/Library/Frameworks/WebKit.framework/WebKit
0x1a52dc000 - 0x1a7090fff WebCore arm64  <fbf9a3b9df503629af395c41d3e4e83a> /System/Library/PrivateFrameworks/WebCore.framework/WebCore
0x1a7091000 - 0x1a70abfff libAccessibility.dylib arm64  <f55983edebf933948322efaefe1ecbca> /usr/lib/libAccessibility.dylib
0x1a70ac000 - 0x1a70b7fff AXCoreUtilities arm64  <c9ced073466a32208dbabf96d0a50f15> /System/Library/PrivateFrameworks/AXCoreUtilities.framework/AXCoreUtilities
0x1a712c000 - 0x1a7140fff PowerLog arm64  <eec0214c57da38818a8622fde679829c> /System/Library/PrivateFrameworks/PowerLog.framework/PowerLog
0x1a7141000 - 0x1a7152fff IOSurface arm64  <4abf1719833c3f8db61863ff9b392891> /System/Library/Frameworks/IOSurface.framework/IOSurface
0x1a7153000 - 0x1a784ffff MediaToolbox arm64  <bce0f04fbe4d3f55bce62184be284bfd> /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
0x1a7850000 - 0x1a7858fff GraphicsServices arm64  <aea26bf9483739a29902950b92b52592> /System/Library/PrivateFrameworks/GraphicsServices.framework/GraphicsServices
0x1a7941000 - 0x1a7b39fff AVFoundation arm64  <20bfceb457453bd2a5b3ce71ea50c1b2> /System/Library/Frameworks/AVFoundation.framework/AVFoundation
0x1a7b72000 - 0x1a7bc0fff MobileWiFi arm64  <3e4f5fc8825839f084694f7c77d62907> /System/Library/PrivateFrameworks/MobileWiFi.framework/MobileWiFi
0x1a7bc1000 - 0x1a7bd9fff MobileAsset arm64  <9a597efb899f383a867473d91b06eb94> /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
0x1a7bda000 - 0x1a7be7fff libGSFont.dylib arm64  <59fe7a3b9b8437a7a992bdae0faab9d6> /System/Library/PrivateFrameworks/FontServices.framework/libGSFont.dylib
0x1a7be8000 - 0x1a7bf1fff FontServices arm64  <2b26f3985f9030d39a40bfe0df98686b> /System/Library/PrivateFrameworks/FontServices.framework/FontServices
0x1a7bf2000 - 0x1a7d3bfff libFontParser.dylib arm64  <cac8dc5601323efd9875a5e886d92ea8> /System/Library/PrivateFrameworks/FontServices.framework/libFontParser.dylib
0x1a8653000 - 0x1a88b7fff vImage arm64  <1987440ca5e638368a23cd7341b1932a> /System/Library/Frameworks/Accelerate.framework/Frameworks/vImage.framework/vImage
0x1a88b8000 - 0x1a8aecfff AudioToolbox arm64  <9eea0978fcad33cc9e3035ea939b2143> /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
0x1a8aed000 - 0x1a8b1ffff libAudioToolboxUtility.dylib arm64  <5e0ec0bf47f03853a777ea0123cdecaa> /usr/lib/libAudioToolboxUtility.dylib
0x1a8f4c000 - 0x1a8fe0fff ShareSheet arm64  <0e75ee0b6aeb34c69e1403fe2a0b602a> /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
0x1a8ff5000 - 0x1a90a9fff PDFKit arm64  <d8c1fee5d77635d895bbd3b646f269fc> /System/Library/Frameworks/PDFKit.framework/PDFKit
0x1a9127000 - 0x1a9154fff DocumentManager arm64  <df6155e3a82c3b98aad02755b34ffac2> /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
0x1a93b0000 - 0x1a9427fff AuthKit arm64  <2fda46a0c0c03b0e8222936e5ef11f24> /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
0x1a9428000 - 0x1a9844fff Intents arm64  <4c28f731a5bf380abec95b89347dcca6> /System/Library/Frameworks/Intents.framework/Intents
0x1a9845000 - 0x1a9859fff libCGInterfaces.dylib arm64  <e2a730f6b7b63f2aa3be0ed27cf3cab5> /System/Library/Frameworks/Accelerate.framework/Frameworks/vImage.framework/Libraries/libCGInterfaces.dylib
0x1a985a000 - 0x1a99b9fff WebKitLegacy arm64  <dd6cd4bf7b9535ea92c9c5d914af546b> /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
0x1a99ba000 - 0x1a9a24fff TextInput arm64  <982b9b2cc64d3667aeb3863f355e5f6f> /System/Library/PrivateFrameworks/TextInput.framework/TextInput
0x1a9aa0000 - 0x1a9aa3fff XCTTargetBootstrap arm64  <5c185207156334bcbfddbae1d7470d2b> /System/Library/PrivateFrameworks/XCTTargetBootstrap.framework/XCTTargetBootstrap
0x1a9aa4000 - 0x1a9b58fff CorePDF arm64  <4068ec815d3438b59ad58c2ae7167ef4> /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
0x1a9b94000 - 0x1a9f45fff MediaPlayer arm64  <2730d66693cf3968b472685e5323ea96> /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
0x1a9f46000 - 0x1aa25dfff AppleMediaServices arm64  <bfd95f83910f387e9876e28ebdd4dd57> /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
0x1aa25e000 - 0x1aa284fff CacheDelete arm64  <0c48aade3fe43589acc552d3e119c591> /System/Library/PrivateFrameworks/CacheDelete.framework/CacheDelete
0x1aa285000 - 0x1aa44cfff CoreMotion arm64  <70ed3ef1d8263d55b5eae657ac5e8057> /System/Library/Frameworks/CoreMotion.framework/CoreMotion
0x1aa44d000 - 0x1aa53afff AVFAudio arm64  <1df3312395353945983fb139a4216fa9> /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
0x1aa758000 - 0x1aa80efff CoreUI arm64  <d90479e8d57435b1a4cbab0423d21770> /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
0x1aa834000 - 0x1aa869fff CoreVideo arm64  <443ef021c4123a32a3970433993d16fe> /System/Library/Frameworks/CoreVideo.framework/CoreVideo
0x1aa86a000 - 0x1aaaa0fff AudioToolboxCore arm64  <5cc99c07d3b3317aa0aa90b7edb05d00> /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
0x1aaaa1000 - 0x1aaae4fff CoreDuetContext arm64  <badc9da39c60341aa29c34542cb16158> /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
0x1aaae5000 - 0x1aab1ffff SetupAssistant arm64  <3f5a75d178773381875c6c41678d79e1> /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
0x1aabdd000 - 0x1aac07fff PlugInKit arm64  <5d4ad58191a23317a0d2ee6357784767> /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
0x1ab36a000 - 0x1ab386fff PrototypeTools arm64  <cc8e1d9d10a23e8785900518b23242dd> /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
0x1ab387000 - 0x1ab478fff MediaExperience arm64  <d3696f197c97386d855765ea3931bdea> /System/Library/PrivateFrameworks/MediaExperience.framework/MediaExperience
0x1ab479000 - 0x1ab74dfff Celestial arm64  <f23ff8ceade230c2946daf42793d76ab> /System/Library/PrivateFrameworks/Celestial.framework/Celestial
0x1ac166000 - 0x1ac168fff libapp_launch_measurement.dylib arm64  <2741e56c89873a20acde4979ee28be22> /usr/lib/libapp_launch_measurement.dylib
0x1ac279000 - 0x1ac288fff CrashReporterSupport arm64  <8f50c9095b293180a908ffdbdeecede3> /System/Library/PrivateFrameworks/CrashReporterSupport.framework/CrashReporterSupport
0x1ac289000 - 0x1ac29bfff MobileBluetooth arm64  <1b74874575393ca9ae852aed2a9fcaab> /System/Library/PrivateFrameworks/MobileBluetooth.framework/MobileBluetooth
0x1ac38e000 - 0x1ac392fff libsystem_configuration.dylib arm64  <1f77794460993bc0a06207f2193781f6> /usr/lib/system/libsystem_configuration.dylib
0x1ac57a000 - 0x1ac588fff HangTracer arm64  <f7cd6e3068023cb8b89cfb387970d104> /System/Library/PrivateFrameworks/HangTracer.framework/HangTracer
0x1ac589000 - 0x1ac5eefff CoreNLP arm64  <bc2c4aea12293a0fab1f92fc80182f74> /System/Library/PrivateFrameworks/CoreNLP.framework/CoreNLP
0x1ac5ef000 - 0x1ac5f0fff liblangid.dylib arm64  <e1c11f41cd7031148ffeb431b53b9fdd> /usr/lib/liblangid.dylib
0x1ac5f1000 - 0x1ad47cfff JavaScriptCore arm64  <aaf4e988dfd33f50af21779cf1258c80> /System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore
0x1ad47d000 - 0x1ad50afff libTelephonyUtilDynamic.dylib arm64  <a187f39512fe32d99a85829691a49f64> /usr/lib/libTelephonyUtilDynamic.dylib
0x1ad79e000 - 0x1ad7a7fff IOMobileFramebuffer arm64  <7462439e125833758ae73bd083b45ae2> /System/Library/PrivateFrameworks/IOMobileFramebuffer.framework/IOMobileFramebuffer
0x1adb1f000 - 0x1adb39fff CoreMaterial arm64  <0c57d0346b8038ac99da29d1c5756073> /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial
0x1adb3a000 - 0x1adc1ffff libxml2.2.dylib arm64  <59363b79c5c93f4a8225d4514922256a> /usr/lib/libxml2.2.dylib
0x1afe60000 - 0x1b0071fff NetworkExtension arm64  <b9952b5daeb134a6b570a193e0440119> /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
0x1b0072000 - 0x1b00a7fff DataDetectorsCore arm64  <3d0a108f71733e29965b637096e09ec8> /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
0x1b01fb000 - 0x1b0231fff MediaServices arm64  <280846cf79173979b3983b4d12c94480> /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
0x1b068d000 - 0x1b06b7fff PersistentConnection arm64  <396582b9038d33ecbbaf6270715f2b50> /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
0x1b07a3000 - 0x1b0991fff MediaRemote arm64  <1a209e28192c390bab18d149f841c17f> /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
0x1b0992000 - 0x1b099afff CorePhoneNumbers arm64  <68106cb9cf6d390d8e267e7bbf249c6b> /System/Library/PrivateFrameworks/CorePhoneNumbers.framework/CorePhoneNumbers
0x1b09ab000 - 0x1b09d1fff DuetActivityScheduler arm64  <13c0f1714e3036779c37852398f0bafa> /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
0x1b0ad6000 - 0x1b0af8fff CoreSVG arm64  <73bfc0febb0d31628b9223dc7a5a983f> /System/Library/PrivateFrameworks/CoreSVG.framework/CoreSVG
0x1b0b31000 - 0x1b0b3cfff MallocStackLogging arm64  <bd95833751b935d8bfaa122f9c6eaafa> /System/Library/PrivateFrameworks/MallocStackLogging.framework/MallocStackLogging
0x1b0dd6000 - 0x1b0fc2fff HealthKit arm64  <2c2b0cf59f503b24b258215f68ce3503> /System/Library/Frameworks/HealthKit.framework/HealthKit
0x1b15da000 - 0x1b15e7fff BluetoothManager arm64  <5a83f768e5313c6eb7a5d8d40f5a65ba> /System/Library/PrivateFrameworks/BluetoothManager.framework/BluetoothManager
0x1b15e8000 - 0x1b161dfff CoreBluetooth arm64  <0af559701b64365fa935b76fb2b6fc6f> /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
0x1b161e000 - 0x1b1620fff libsystem_sandbox.dylib arm64  <19bf542aa27f358aaf26c829d92f3995> /usr/lib/system/libsystem_sandbox.dylib
0x1b1705000 - 0x1b173cfff TextInputUI arm64  <584490afffd630b0a2b86d6045db9880> /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
0x1b1788000 - 0x1b17f4fff Rapport arm64  <0d829a31fed33c2bb4da9a2712178c8c> /System/Library/PrivateFrameworks/Rapport.framework/Rapport
0x1b17f5000 - 0x1b1838fff OSAnalytics arm64  <66d408f799793943ae529a4b12829625> /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
0x1b1839000 - 0x1b1867fff MobileInstallation arm64  <82830c2abb583bd5a627995189600504> /System/Library/PrivateFrameworks/MobileInstallation.framework/MobileInstallation
0x1b1868000 - 0x1b1902fff Metal arm64  <245b6ff0bdfd33a7a34ce4fe57ebc2a2> /System/Library/Frameworks/Metal.framework/Metal
0x1b1903000 - 0x1b1909fff IOAccelerator arm64  <3335cc966200367c99e96bb8fd064751> /System/Library/PrivateFrameworks/IOAccelerator.framework/IOAccelerator
0x1b190a000 - 0x1b1915fff MediaAccessibility arm64  <f8f4cb6f12af349aadc0c2124373d615> /System/Library/Frameworks/MediaAccessibility.framework/MediaAccessibility
0x1b1933000 - 0x1b193afff libsystem_dnssd.dylib arm64  <59b26d826fd335ed998cf5b62e38f910> /usr/lib/system/libsystem_dnssd.dylib
0x1b193b000 - 0x1b1941fff PushKit arm64  <634713aced1d38df81cd370674d873ad> /System/Library/Frameworks/PushKit.framework/PushKit
0x1b1942000 - 0x1b1a47fff FileProvider arm64  <817c33078d9f344bae2e99274886c2de> /System/Library/Frameworks/FileProvider.framework/FileProvider
0x1b1a5e000 - 0x1b1a63fff LinguisticData arm64  <ee7e5c2f67d63fdb8f294a556494ffa5> /System/Library/PrivateFrameworks/LinguisticData.framework/LinguisticData
0x1b1aa8000 - 0x1b1b63fff VideoToolbox arm64  <cb7226845bc83f528ef0eb5e3d9e7d06> /System/Library/Frameworks/VideoToolbox.framework/VideoToolbox
0x1b20c2000 - 0x1b20cafff SymptomDiagnosticReporter arm64  <7f5611dfa5063e699db9329b22f493de> /System/Library/PrivateFrameworks/SymptomDiagnosticReporter.framework/SymptomDiagnosticReporter
0x1b20cb000 - 0x1b20cdfff IOSurfaceAccelerator arm64  <4d17d1ca325c350a8cceec8a93550c14> /System/Library/PrivateFrameworks/IOSurfaceAccelerator.framework/IOSurfaceAccelerator
0x1b221f000 - 0x1b2234fff CoreFollowUp arm64  <edfbe826475a330eb7062eaf1f013738> /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
0x1b223e000 - 0x1b2253fff libcoretls.dylib arm64  <e83864eb177533af91d71d6e5bfd6799> /usr/lib/libcoretls.dylib
0x1b22aa000 - 0x1b233bfff libate.dylib arm64  <0dbd4cdb7d493a94a11e8c4b6eb9d303> /usr/lib/libate.dylib
0x1b35c6000 - 0x1b35eafff Pasteboard arm64  <e599feae3d8d3929b1afefeaf62018d6> /System/Library/PrivateFrameworks/Pasteboard.framework/Pasteboard
0x1b36eb000 - 0x1b3755fff SAObjects arm64  <4d72bf5c563e3a9ca016e691ae307b08> /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
0x1b3809000 - 0x1b3816fff DataMigration arm64  <bda78d7eac783fb7ad49253a971577af> /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
0x1b39ca000 - 0x1b39eefff IconServices arm64  <9d0a77437f5e311097babd6a8f94e8a1> /System/Library/PrivateFrameworks/IconServices.framework/IconServices
0x1b39ef000 - 0x1b3bdbfff iTunesCloud arm64  <e806cac9c1f13e80bf88b696c4cdd5e4> /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
0x1b3bdc000 - 0x1b3ea1fff MusicLibrary arm64  <c4573d69b57033c8871d37d686109222> /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
0x1b3ea2000 - 0x1b3ea3fff WatchdogClient arm64  <834e0b823de23ff6b57e7904ce03a445> /System/Library/PrivateFrameworks/WatchdogClient.framework/WatchdogClient
0x1b3ee0000 - 0x1b3ef0fff CoreEmoji arm64  <577a37002ad53990bcc8b0c9fd511a74> /System/Library/PrivateFrameworks/CoreEmoji.framework/CoreEmoji
0x1b4057000 - 0x1b4064fff CPMS arm64  <df575af01b103cfcb663abf02f06ac80> /System/Library/PrivateFrameworks/CPMS.framework/CPMS
0x1b41b2000 - 0x1b41c8fff IAP arm64  <28851bc967fb33a2a08fa4a0414d0225> /System/Library/PrivateFrameworks/IAP.framework/IAP
0x1b41c9000 - 0x1b4215fff MobileBackup arm64  <c8b58b1f4f1b3c4e90d8a015dc4b8a5d> /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
0x1b42c4000 - 0x1b42cbfff CoreTime arm64  <cf3715716c1635b68d871a966ae17239> /System/Library/PrivateFrameworks/CoreTime.framework/CoreTime
0x1b4be6000 - 0x1b4c04fff AppConduit arm64  <154844916f3532859f72c3ab9b95ae87> /System/Library/PrivateFrameworks/AppConduit.framework/AppConduit
0x1b4c05000 - 0x1b4c1dfff IntlPreferences arm64  <19b52e5151793276afea6f0b59e6a97e> /System/Library/PrivateFrameworks/IntlPreferences.framework/IntlPreferences
0x1b4fc4000 - 0x1b50b2fff CoreBrightness arm64  <df0aac48fa243894800d72a97e6b4943> /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
0x1b50b3000 - 0x1b50bafff libIOReport.dylib arm64  <ab2118f813b933e48f29f6d37d8d976e> /usr/lib/libIOReport.dylib
0x1b521e000 - 0x1b5242fff GameController arm64  <621b5f0c44e93f379c6f0f00f784bb82> /System/Library/Frameworks/GameController.framework/GameController
0x1b5243000 - 0x1b5476fff libBNNS.dylib arm64  <a36340b78a703f8180b712c7759ab043> /System/Library/Frameworks/Accelerate.framework/Frameworks/vecLib.framework/libBNNS.dylib
0x1b5477000 - 0x1b547efff StudyLog arm64  <6ba8e4d9754b3e25b97d3084e1646db0> /System/Library/PrivateFrameworks/StudyLog.framework/StudyLog
0x1b5594000 - 0x1b55a8fff ExternalAccessory arm64  <7a1f739d6c77396487a42d65df740186> /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
0x1b55a9000 - 0x1b5aeafff libAudioDSP.dylib arm64  <fda0ba2cb5d139df839a5dcfdad82151> /System/Library/Frameworks/AudioToolbox.framework/libAudioDSP.dylib
0x1b5aeb000 - 0x1b5fe5fff AudioCodecs arm64  <fa62119b09783dc9b3ee4f22c6ab42ae> /System/Library/Frameworks/AudioToolbox.framework/AudioCodecs
0x1b66b0000 - 0x1b66c2fff LocalAuthentication arm64  <b6f98d423e8634dc93182ca70b09cf3b> /System/Library/Frameworks/LocalAuthentication.framework/LocalAuthentication
0x1b66eb000 - 0x1b66f6fff CaptiveNetwork arm64  <dc9b5ed33e063d7eb9edec10ebd0e665> /System/Library/PrivateFrameworks/CaptiveNetwork.framework/CaptiveNetwork
0x1b66f7000 - 0x1b66f7fff AdSupport arm64  <afca7c21a5333a25a035cdb5ee2e7535> /System/Library/Frameworks/AdSupport.framework/AdSupport
0x1b6847000 - 0x1b68f7fff libBLAS.dylib arm64  <62050c2e28b83071926604f28576b48a> /System/Library/Frameworks/Accelerate.framework/Frameworks/vecLib.framework/libBLAS.dylib
0x1b68f8000 - 0x1b6906fff CTCarrierSpace arm64  <41d7677ad9313fe891ce68c033bec647> /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
0x1b73ce000 - 0x1b73e9fff libtailspin.dylib arm64  <450b7c0ece54385bbdab05395a050bcd> /usr/lib/libtailspin.dylib
0x1b752f000 - 0x1b753dfff MobileIcons arm64  <3326557a3286356a87ca1df0d6130151> /System/Library/PrivateFrameworks/MobileIcons.framework/MobileIcons
0x1b7704000 - 0x1b774efff CoreHaptics arm64  <06db7c401d2d3d9cb266f37874fa0bbb> /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
0x1b7888000 - 0x1b7917fff CoreSymbolication arm64  <a57040868d163139acb568011b34123a> /System/Library/PrivateFrameworks/CoreSymbolication.framework/CoreSymbolication
0x1b7918000 - 0x1b791efff IdleTimerServices arm64  <39c79767aa7034c9a680af46224d4640> /System/Library/PrivateFrameworks/IdleTimerServices.framework/IdleTimerServices
0x1b7faa000 - 0x1b7ff1fff LoggingSupport arm64  <6b7e370405d33c45967ac8c458928a3f> /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
0x1b80f5000 - 0x1b814efff ProtectedCloudStorage arm64  <bbc869b2f84b34d6bf61cef9d1fa8fc0> /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
0x1b814f000 - 0x1b8217fff GLEngine arm64  <1b5a16deb30b3589831851240da1efc8> /System/Library/Frameworks/OpenGLES.framework/GLEngine.bundle/GLEngine
0x1b8218000 - 0x1b8234fff AppleMetalGLRenderer arm64  <5c891a5bc2563d5ab3f6c42856ce154e> /System/Library/Extensions/AppleMetalGLRenderer.bundle/AppleMetalGLRenderer
0x1b8235000 - 0x1b823dfff OpenGLES arm64  <287f3b01842d30da9702f5cd4793458e> /System/Library/Frameworks/OpenGLES.framework/OpenGLES
0x1b823e000 - 0x1b839cfff libGLProgrammability.dylib arm64  <0f85f94239203b818fe9f75af9a6782f> /System/Library/Frameworks/OpenGLES.framework/libGLProgrammability.dylib
0x1b839d000 - 0x1b83a5fff libGFXShared.dylib arm64  <2209635c627c36d381f28da5e9019b90> /System/Library/Frameworks/OpenGLES.framework/libGFXShared.dylib
0x1b83a6000 - 0x1b83dbfff SharedUtils arm64  <f6c64f0f3df3385aab929b5f99acb807> /System/Library/Frameworks/LocalAuthentication.framework/Support/SharedUtils.framework/SharedUtils
0x1b9a36000 - 0x1b9a72fff StreamingZip arm64  <80a7602a6d27384abec3ffe12bc0c50f> /System/Library/PrivateFrameworks/StreamingZip.framework/StreamingZip
0x1bb2b9000 - 0x1bb2d1fff NetworkStatistics arm64  <52d0181fe70c385697ef3746d5fe1bb4> /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
0x1bb73d000 - 0x1bb743fff Netrb arm64  <53cc7821890f34b380124739cbb90896> /System/Library/PrivateFrameworks/Netrb.framework/Netrb
0x1bb747000 - 0x1bb777fff EAP8021X arm64  <e8e5622aa64439bdae85b80f604662f1> /System/Library/PrivateFrameworks/EAP8021X.framework/EAP8021X
0x1bb778000 - 0x1bb77afff OSAServicesClient arm64  <785aab0a88ed34ba885d7483d3be9ee9> /System/Library/PrivateFrameworks/OSAServicesClient.framework/OSAServicesClient
0x1bb8fe000 - 0x1bb902fff libgermantok.dylib arm64  <e15d5eee368a3e16b9a11328963ce574> /usr/lib/libgermantok.dylib
0x1bb903000 - 0x1bb9b6fff libmecab.dylib arm64  <0bb7b7b678bb3ab887345ee24d6eff43> /usr/lib/libmecab.dylib
0x1bbdac000 - 0x1bbeb3fff libEmbeddedSystemAUs.dylib arm64  <94c6d359a4a433259b16febff5772c2c> /System/Library/Frameworks/AudioToolbox.framework/libEmbeddedSystemAUs.dylib
0x1bbfca000 - 0x1bbfd8fff CoreDuetDaemonProtocol arm64  <165d40fd3ad831c19723d85738aabf53> /System/Library/PrivateFrameworks/CoreDuetDaemonProtocol.framework/CoreDuetDaemonProtocol
0x1bd5aa000 - 0x1bd5acfff OAuth arm64  <a6900a3c3a9639aca03ab1e00576cede> /System/Library/PrivateFrameworks/OAuth.framework/OAuth
0x1be05c000 - 0x1be0cafff libarchive.2.dylib arm64  <f687622c8e6e3452a0d48f7ed993c0d4> /usr/lib/libarchive.2.dylib
0x1be0cb000 - 0x1be0fbfff C2 arm64  <0d7a3e496f95395c9eae28b0d0b16ba5> /System/Library/PrivateFrameworks/C2.framework/C2
0x1be0fc000 - 0x1be12ffff NaturalLanguage arm64  <cfa438750b4032c8b14daf751e0b0df0> /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
0x1be1c2000 - 0x1be1c3fff libsystem_coreservices.dylib arm64  <50693ebd12b43fc8acaad84a8b82a0df> /usr/lib/system/libsystem_coreservices.dylib
0x1be1d5000 - 0x1be1e7fff libmis.dylib arm64  <70eb0208446d35d1a06035cee66ecf30> /usr/lib/libmis.dylib
0x1be3d7000 - 0x1be3dffff libcopyfile.dylib arm64  <f5f048c1d258338f96bd94863b7f84e4> /usr/lib/system/libcopyfile.dylib
0x1be743000 - 0x1be7d7fff AccountsDaemon arm64  <7abea61a48783baaa76d6ba23b765846> /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
0x1be7d8000 - 0x1be7e3fff AppleIDSSOAuthentication arm64  <e4999d56d7673b7b9c1370b23fcbbec5> /System/Library/PrivateFrameworks/AppleIDSSOAuthentication.framework/AppleIDSSOAuthentication
0x1be930000 - 0x1be9b2fff Symbolication arm64  <31fd30f6ccb13309b25294a1d85326e2> /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
0x1beb67000 - 0x1bebb4fff ChunkingLibrary arm64  <6c669fdc362138dd89e33201adb10962> /System/Library/PrivateFrameworks/ChunkingLibrary.framework/ChunkingLibrary
0x1bebb8000 - 0x1bebbcfff DAAPKit arm64  <407eb1b504133cf59185bb985c8834bd> /System/Library/PrivateFrameworks/DAAPKit.framework/DAAPKit
0x1bf091000 - 0x1bf093fff CoreDuetDebugLogging arm64  <1fd35a97edf032d68a771db66fc72f52> /System/Library/PrivateFrameworks/CoreDuetDebugLogging.framework/CoreDuetDebugLogging
0x1bfbb8000 - 0x1bfbf6fff SignpostSupport arm64  <a8ffcfa229463bc087f1dcc98e94864e> /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
0x1bfe8b000 - 0x1bfe94fff SignpostCollection arm64  <4f5984b7fa9938779a0e784f4ec5f2e1> /System/Library/PrivateFrameworks/SignpostCollection.framework/SignpostCollection
0x1c05c1000 - 0x1c05c7fff URLFormatting arm64  <fbc08a2be4293492a507ee08d69db0b9> /System/Library/PrivateFrameworks/URLFormatting.framework/URLFormatting
0x1c0d2a000 - 0x1c0d70fff CoreLocationProtobuf arm64  <354363c3361234f0bde81d06b68951a8> /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
0x1c0e24000 - 0x1c0ea0fff Quagga arm64  <1e8a7a5cf04239d8b8a9d719c1aeddad> /System/Library/PrivateFrameworks/Quagga.framework/Quagga
0x1c11ab000 - 0x1c11c0fff libEDR arm64  <66ee6000bd2339d1ba5e6b3b10c2470c> /System/Library/PrivateFrameworks/libEDR.framework/libEDR
0x1c1dde000 - 0x1c1debfff libperfcheck.dylib arm64  <3ba9a8fd8a773231ab960d7701333c63> /usr/lib/libperfcheck.dylib
0x1c1dec000 - 0x1c1df7fff libAudioStatistics.dylib arm64  <c74af5a6998431e3b5cf65f2283d2145> /usr/lib/libAudioStatistics.dylib
0x1c1fbb000 - 0x1c1fcbfff caulk arm64  <eb0f4cd651633b23948a25c8c2ba93c2> /System/Library/PrivateFrameworks/caulk.framework/caulk
0x1c200a000 - 0x1c2010fff MobileSystemServices arm64  <a1c84260dd6f36be94784291ef6f1c30> /System/Library/PrivateFrameworks/MobileSystemServices.framework/MobileSystemServices
0x1c3142000 - 0x1c314cfff HID arm64  <b07d4f0b24023f4ea0d2ab04d5871a94> /System/Library/PrivateFrameworks/HID.framework/HID
0x1c3179000 - 0x1c31b2fff libGLImage.dylib arm64  <15ad0d4a18443118ac68cf15538dab9e> /System/Library/Frameworks/OpenGLES.framework/libGLImage.dylib
0x1c35ad000 - 0x1c35befff libSparseBLAS.dylib arm64  <1f51189eaa19385c94b7fb0292561c82> /System/Library/Frameworks/Accelerate.framework/Frameworks/vecLib.framework/libSparseBLAS.dylib
0x1c35bf000 - 0x1c35d2fff Engram arm64  <6e8e17826af3317f92fb524fa0b85c33> /System/Library/PrivateFrameworks/Engram.framework/Engram
0x1c397a000 - 0x1c3982fff FSEvents arm64  <ff8eb4136ed734ddbba680ce0c3e88be> /System/Library/PrivateFrameworks/FSEvents.framework/FSEvents
0x1c4358000 - 0x1c4368fff RemoteTextInput arm64  <76a999dbfd5a363384d1ad23aaadccf6> /System/Library/PrivateFrameworks/RemoteTextInput.framework/RemoteTextInput
0x1c4425000 - 0x1c4439fff libLinearAlgebra.dylib arm64  <83e007597b01399783a65a8f7a6c3208> /System/Library/Frameworks/Accelerate.framework/Frameworks/vecLib.framework/libLinearAlgebra.dylib
0x1c46b4000 - 0x1c46c2fff CoreAUC arm64  <0baa16e29c3a372aafd1f0e84f547e5c> /System/Library/PrivateFrameworks/CoreAUC.framework/CoreAUC
0x1c5053000 - 0x1c5099fff PhysicsKit arm64  <b47ea3ebcfd037bda7b951e1ad5f7f90> /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
0x1c509a000 - 0x1c50ebfff CorePrediction arm64  <e70c69587f633651b1c42a87caa03dc9> /System/Library/PrivateFrameworks/CorePrediction.framework/CorePrediction
0x1c54dd000 - 0x1c552afff SafariSafeBrowsing arm64  <76e45ab6253135dbbcc5b9657344c140> /System/Library/PrivateFrameworks/SafariSafeBrowsing.framework/SafariSafeBrowsing
0x1c5586000 - 0x1c55b6fff OpenAL arm64  <5821ce04b53e3b7ba3bce263cbd9c2bc> /System/Library/Frameworks/OpenAL.framework/OpenAL
0x1c58d8000 - 0x1c594efff HomeSharing arm64  <f5d31569258d319fa9d6df64a246504d> /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
0x1c59dc000 - 0x1c59fafff GenerationalStorage arm64  <05a7c289ff76316bad961b4e87eefbf6> /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
0x1c5e81000 - 0x1c5e86fff kperf arm64  <4dd4a30e85383405b9959fde4fd003f1> /System/Library/PrivateFrameworks/kperf.framework/kperf
0x1c605e000 - 0x1c6091fff libpcap.A.dylib arm64  <80be39cf99d83d1eb3c6b8d3fd8a838d> /usr/lib/libpcap.A.dylib
0x1c63c9000 - 0x1c6463fff libvDSP.dylib arm64  <76375e092cdb311185ec8ed1d8f4bfc9> /System/Library/Frameworks/Accelerate.framework/Frameworks/vecLib.framework/libvDSP.dylib
0x1c64d6000 - 0x1c6560fff SampleAnalysis arm64  <b0b83d5c49fc3b3d9737165254abfacb> /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
0x1c6561000 - 0x1c656dfff IntentsFoundation arm64  <2090563ffa41300da28ea5bc984ed49b> /System/Library/PrivateFrameworks/IntentsFoundation.framework/IntentsFoundation
0x1c675c000 - 0x1c67ebfff MediaPlatform arm64  <a7f36f3dd45230f78c0dfd793cf737da> /System/Library/PrivateFrameworks/MediaPlatform.framework/MediaPlatform
0x1c67ec000 - 0x1c6afcfff MediaLibraryCore arm64  <55b303ee3c563e8ba58e5d3aaa7af419> /System/Library/PrivateFrameworks/MediaLibraryCore.framework/MediaLibraryCore
0x1c6dcd000 - 0x1c6eacfff AGXMetalA10 arm64  <15e1caa6eb36305186e48b8de68879c9> /System/Library/Extensions/AGXMetalA10.bundle/AGXMetalA10
0x1c6fd3000 - 0x1c6fd3fff Accelerate arm64  <9818869ce13333be8f6636eea59aedc8> /System/Library/Frameworks/Accelerate.framework/Accelerate
0x1c6fd4000 - 0x1c72e9fff libLAPACK.dylib arm64  <1d4e4b0531313da5b611fb2575e17079> /System/Library/Frameworks/Accelerate.framework/Frameworks/vecLib.framework/libLAPACK.dylib
0x1c72ea000 - 0x1c72eefff libQuadrature.dylib arm64  <cccd3657551a38ef9e6c240d60dc8df8> /System/Library/Frameworks/Accelerate.framework/Frameworks/vecLib.framework/libQuadrature.dylib
0x1c72ef000 - 0x1c7348fff libvMisc.dylib arm64  <435399eb7a8f3979b0d139c3f453fd29> /System/Library/Frameworks/Accelerate.framework/Frameworks/vecLib.framework/libvMisc.dylib
0x1c7349000 - 0x1c7349fff vecLib arm64  <b52984345da233bb9108b4b63a4b26a6> /System/Library/Frameworks/Accelerate.framework/Frameworks/vecLib.framework/vecLib
0x1c76fa000 - 0x1c7727fff GSS arm64  <a117041e533335ba8e67d0af00477b37> /System/Library/Frameworks/GSS.framework/GSS
0x1c773a000 - 0x1c776cfff MPSCore arm64  <7f98e0d3952a38c09bc314765766fc86> /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
0x1c776d000 - 0x1c77e9fff MPSImage arm64  <63f5ffc1702e36ff841abafcd47d0301> /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
0x1c77ea000 - 0x1c780cfff MPSMatrix arm64  <cb977b3da929362a9a59a85ba312a392> /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/MPSMatrix
0x1c780d000 - 0x1c7821fff MPSNDArray arm64  <8a75d75a84c439e0bdf578136ceb73f1> /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNDArray.framework/MPSNDArray
0x1c7822000 - 0x1c79b3fff MPSNeuralNetwork arm64  <4b7b42c84e2538758d2503bcaf4c695d> /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
0x1c79b4000 - 0x1c79f8fff MPSRayIntersector arm64  <9d947816460c35e2b072e2d9b809d01b> /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSRayIntersector.framework/MPSRayIntersector
0x1c79f9000 - 0x1c79f9fff MetalPerformanceShaders arm64  <7de1dbb3681835558dfb8c6d50de268b> /System/Library/Frameworks/MetalPerformanceShaders.framework/MetalPerformanceShaders
0x1c7a06000 - 0x1c7a06fff MobileCoreServices arm64  <d7873825e57d3c4081f1da103c723f89> /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
0x1c7a11000 - 0x1c7a12fff libCVMSPluginSupport.dylib arm64  <cda51c2ff1b33e6fa71ae3ae6daa7325> /System/Library/Frameworks/OpenGLES.framework/libCVMSPluginSupport.dylib
0x1c7a13000 - 0x1c7a19fff libCoreFSCache.dylib arm64  <84690d5764ad3ee3864e18d4704e08cd> /System/Library/Frameworks/OpenGLES.framework/libCoreFSCache.dylib
0x1c7a1a000 - 0x1c7a1ffff libCoreVMClient.dylib arm64  <66daee76addf32a981f2daca6fb6b0fe> /System/Library/Frameworks/OpenGLES.framework/libCoreVMClient.dylib
0x1c7ec0000 - 0x1c7ec0fff UIKit arm64  <47a27c57c3aa387fbc3d53d2e7249e16> /System/Library/Frameworks/UIKit.framework/UIKit
0x1c8312000 - 0x1c8464fff ANECompiler arm64  <931531fa29713983a242fe34c7917616> /System/Library/PrivateFrameworks/ANECompiler.framework/ANECompiler
0x1c8465000 - 0x1c8475fff ANEServices arm64  <c2fbaeaf090e35deacb75ae881fb4b14> /System/Library/PrivateFrameworks/ANEServices.framework/ANEServices
0x1c847e000 - 0x1c850efff APFS arm64  <0d446bc9f2f93ca0b2ee1727925f10ef> /System/Library/PrivateFrameworks/APFS.framework/APFS
0x1c850f000 - 0x1c8513fff ASEProcessing arm64  <d4b121b1aabb3f92baafe2a6b70e32de> /System/Library/PrivateFrameworks/ASEProcessing.framework/ASEProcessing
0x1c86b9000 - 0x1c86c4fff AccountSettings arm64  <d3c47caea6ce393a80e478b9f1266638> /System/Library/PrivateFrameworks/AccountSettings.framework/AccountSettings
0x1c8fef000 - 0x1c8ffdfff AppleFSCompression arm64  <a1d88ec9766332a89edc09ee5ab40182> /System/Library/PrivateFrameworks/AppleFSCompression.framework/AppleFSCompression
0x1c9004000 - 0x1c900efff AppleIDAuthSupport arm64  <fe30c61996483b1887f3cc6c25edf7ce> /System/Library/PrivateFrameworks/AppleIDAuthSupport.framework/AppleIDAuthSupport
0x1c900f000 - 0x1c9050fff AppleJPEG arm64  <14d3a4bcfc0f374297d912b8c85cc5a0> /System/Library/PrivateFrameworks/AppleJPEG.framework/AppleJPEG
0x1c9099000 - 0x1c90aafff AppleNeuralEngine arm64  <622801b185fe3bfb834d3d44ad9f9187> /System/Library/PrivateFrameworks/AppleNeuralEngine.framework/AppleNeuralEngine
0x1c90b1000 - 0x1c90d4fff AppleSauce arm64  <f5d836a116f13ebba5fc71d3efb4d030> /System/Library/PrivateFrameworks/AppleSauce.framework/AppleSauce
0x1c92cd000 - 0x1c92fdfff Bom arm64  <0dfe861e6be13f9eb920584c5b46f646> /System/Library/PrivateFrameworks/Bom.framework/Bom
0x1c9d76000 - 0x1c9d7dfff CommonAuth arm64  <ba671729ef0f30039c1774666fc6592c> /System/Library/PrivateFrameworks/CommonAuth.framework/CommonAuth
0x1ca1ab000 - 0x1ca1affff CoreOptimization arm64  <81a3200ad13730a59e896c36e69ff6fc> /System/Library/PrivateFrameworks/CoreOptimization.framework/CoreOptimization
0x1ca2fa000 - 0x1ca305fff DeviceIdentity arm64  <8e7caf4f24f0322c9947f91c17a715fd> /System/Library/PrivateFrameworks/DeviceIdentity.framework/DeviceIdentity
0x1ca495000 - 0x1ca4b1fff DocumentManagerCore arm64  <a077927cd5eb35ce992239758da231b9> /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore
0x1ca568000 - 0x1cabc3fff Espresso arm64  <9df07bcd41c4334fb57ed6ea22476366> /System/Library/PrivateFrameworks/Espresso.framework/Espresso
0x1cae75000 - 0x1cb286fff FaceCore arm64  <4de7d3c4806235d09407711b87b2bae5> /System/Library/PrivateFrameworks/FaceCore.framework/FaceCore
0x1cb357000 - 0x1cb36bfff libGSFontCache.dylib arm64  <abcdc382bad33a6c9ba10d0cf44c136f> /System/Library/PrivateFrameworks/FontServices.framework/libGSFontCache.dylib
0x1cb3cf000 - 0x1cb3dbfff libhvf.dylib arm64  <9563809693d6387db69fea88af4564e3> /System/Library/PrivateFrameworks/FontServices.framework/libhvf.dylib
0x1cbf5d000 - 0x1cbf5dfff libmetal_timestamp.dylib arm64  <114bf199e7e0374d94e385c271b0c8a3> /System/Library/PrivateFrameworks/GPUCompiler.framework/Libraries/libmetal_timestamp.dylib
0x1cc0de000 - 0x1cc0eafff GraphVisualizer arm64  <d5a5d07491713bfd892d31889ec1b6ce> /System/Library/PrivateFrameworks/GraphVisualizer.framework/GraphVisualizer
0x1cca22000 - 0x1cca92fff Heimdal arm64  <0a1b601c4d7331c4a37c44d2f5271264> /System/Library/PrivateFrameworks/Heimdal.framework/Heimdal
0x1ccfde000 - 0x1ccfe4fff InternationalSupport arm64  <56238f820e0f3cc4befe347f830ffe44> /System/Library/PrivateFrameworks/InternationalSupport.framework/InternationalSupport
0x1cd284000 - 0x1cd284fff Marco arm64  <d1a138229ac438b586ef4d9bd9f5d5a2> /System/Library/PrivateFrameworks/Marco.framework/Marco
0x1cd773000 - 0x1cd786fff MobileDeviceLink arm64  <687959b4e80d3fe08b0cc23ec02a82b2> /System/Library/PrivateFrameworks/MobileDeviceLink.framework/MobileDeviceLink
0x1cda3a000 - 0x1cda79fff OTSVG arm64  <4295cc2da66d3905963b70f4ca852533> /System/Library/PrivateFrameworks/OTSVG.framework/OTSVG
0x1ce0be000 - 0x1ce0befff PhoneNumbers arm64  <e23d89e41d5939f5a5def8c70b89efe4> /System/Library/PrivateFrameworks/PhoneNumbers.framework/PhoneNumbers
0x1cfa88000 - 0x1cfa8cfff RevealCore arm64  <40fbd11d577e3bbc9d10621400e5f57f> /System/Library/PrivateFrameworks/RevealCore.framework/RevealCore
0x1cfc28000 - 0x1cfc34fff SetupAssistantSupport arm64  <12028ece9f6a3995b90d31fed2d46a77> /System/Library/PrivateFrameworks/SetupAssistantSupport.framework/SetupAssistantSupport
0x1cfc52000 - 0x1cfc52fff SignpostMetrics arm64  <bd8c101a86253fdb87532ccbd64266f7> /System/Library/PrivateFrameworks/SignpostMetrics.framework/SignpostMetrics
0x1d05e1000 - 0x1d0682fff TextureIO arm64  <55a7d4be7c2835d59ed2cbc7db47f880> /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
0x1d15fb000 - 0x1d1b5cfff libwebrtc.dylib arm64  <fb6670b5c0093e729bd61ea2e0c710f4> /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
0x1d1cf4000 - 0x1d1cfcfff kperfdata arm64  <0280752ec857378482e788bd63ad43ef> /System/Library/PrivateFrameworks/kperfdata.framework/kperfdata
0x1d1cfd000 - 0x1d1d44fff ktrace arm64  <fddcc7c6de53358985ed0fe969d61468> /System/Library/PrivateFrameworks/ktrace.framework/ktrace
0x1d1d5d000 - 0x1d1d69fff perfdata arm64  <d5f09efc1baa33a0b6a7e59d13432cfb> /System/Library/PrivateFrameworks/perfdata.framework/perfdata
0x1d2187000 - 0x1d24b0fff libAWDSupportFramework.dylib arm64  <5079327466f43f86b15028858aa1bb67> /usr/lib/libAWDSupportFramework.dylib
0x1d265a000 - 0x1d2664fff libChineseTokenizer.dylib arm64  <5dd82d181e2e32d4a3e755012a2534aa> /usr/lib/libChineseTokenizer.dylib
0x1d268e000 - 0x1d2840fff libFosl_dynamic.dylib arm64  <6692e724c11b3bfb9593a3180f183057> /usr/lib/libFosl_dynamic.dylib
0x1d28bb000 - 0x1d28c2fff libMatch.1.dylib arm64  <d0d21782e5c730e59c5059b33b72995c> /usr/lib/libMatch.1.dylib
0x1d2a5f000 - 0x1d2a60fff libSystem.B.dylib arm64  <18687f3a21d73966b82704fc5d4e2188> /usr/lib/libSystem.B.dylib
0x1d2a69000 - 0x1d2a6bfff libThaiTokenizer.dylib arm64  <342d2a135b0a37a2969fcb30ef6f5217> /usr/lib/libThaiTokenizer.dylib
0x1d2b6a000 - 0x1d2b7ffff libapple_nghttp2.dylib arm64  <50a1e06796123db8af9bdc15a2c82dfe> /usr/lib/libapple_nghttp2.dylib
0x1d2bf8000 - 0x1d2c08fff libbsm.0.dylib arm64  <8072366407503038b0e1eccd42c12f23> /usr/lib/libbsm.0.dylib
0x1d2c09000 - 0x1d2c15fff libbz2.1.0.dylib arm64  <aa92d96b6c6b3c30b868bd327247c281> /usr/lib/libbz2.1.0.dylib
0x1d2c16000 - 0x1d2c16fff libcharset.1.dylib arm64  <3a1952fac60c363fb2720123f782b09c> /usr/lib/libcharset.1.dylib
0x1d2c17000 - 0x1d2c28fff libcmph.dylib arm64  <3db1a5a10dee3c8cac717ea539ca7ff6> /usr/lib/libcmph.dylib
0x1d2c29000 - 0x1d2c40fff libcompression.dylib arm64  <d5cd6dc1de683966b5a5a18a6f5eae85> /usr/lib/libcompression.dylib
0x1d2c41000 - 0x1d2c42fff libcoretls_cfhelpers.dylib arm64  <7940b1e1e9b33782860ac608bfd44fbc> /usr/lib/libcoretls_cfhelpers.dylib
0x1d2c43000 - 0x1d2c49fff libcupolicy.dylib arm64  <39fd4f3cb58e35ab8095f873beed4007> /usr/lib/libcupolicy.dylib
0x1d2c89000 - 0x1d2c92fff libdscsym.dylib arm64  <0b0f4385a47f3eeb9cc385864a69b909> /usr/lib/libdscsym.dylib
0x1d3205000 - 0x1d320afff libheimdal-asn1.dylib arm64  <40eb02d5300c3a129e2ad0ed647ac737> /usr/lib/libheimdal-asn1.dylib
0x1d320b000 - 0x1d32fcfff libiconv.2.dylib arm64  <8467990cb00c3b1194ce7feae7e3370a> /usr/lib/libiconv.2.dylib
0x1d3312000 - 0x1d331dfff liblockdown.dylib arm64  <63d8b54e30bf3af39b56fc654cabf8ff> /usr/lib/liblockdown.dylib
0x1d331e000 - 0x1d3336fff liblzma.5.dylib arm64  <4074d76ec7a93b8492a262a059d3b837> /usr/lib/liblzma.5.dylib
0x1d36b3000 - 0x1d36e2fff libncurses.5.4.dylib arm64  <fde38058c2563bb88c96fc717f409d6b> /usr/lib/libncurses.5.4.dylib
0x1d36e3000 - 0x1d36f8fff libnetworkextension.dylib arm64  <6dc4d4e4896a3c5da26ddd4f3528d833> /usr/lib/libnetworkextension.dylib
0x1d3a7b000 - 0x1d3a92fff libresolv.9.dylib arm64  <7d42c468c5223bcd8764b1706b530a84> /usr/lib/libresolv.9.dylib
0x1d3a93000 - 0x1d3a95fff libsandbox.1.dylib arm64  <ae76c31a749a355a9d26b8c216681c0f> /usr/lib/libsandbox.1.dylib
0x1d3a9c000 - 0x1d3acdfff libtidy.A.dylib arm64  <9596a6a694de3e1d80c5a18e8f81366a> /usr/lib/libtidy.A.dylib
0x1d3ad5000 - 0x1d3ad8fff libutil.dylib arm64  <0520efce5fe43c2fb18ee9d621dd2433> /usr/lib/libutil.dylib
0x1d3add000 - 0x1d3b05fff libxslt.1.dylib arm64  <4ae5d095347036d4b244b46c74808d82> /usr/lib/libxslt.1.dylib
0x1d3b06000 - 0x1d3b17fff libz.1.dylib arm64  <58a7ec43dad53a55aa9ed43f7d72639e> /usr/lib/libz.1.dylib
0x1d3b3e000 - 0x1d3b40fff liblog_network.dylib arm64  <331cc2c0fc3237aea38af49702e318fd> /usr/lib/log/liblog_network.dylib
0x1d3f2a000 - 0x1d3f2ffff libcache.dylib arm64  <f8f9d9c8fa2c341f9f6ba0fe985552eb> /usr/lib/system/libcache.dylib
0x1d3f30000 - 0x1d3f3cfff libcommonCrypto.dylib arm64  <367980207814337795ba9d6fd082d14e> /usr/lib/system/libcommonCrypto.dylib
0x1d3f3d000 - 0x1d3f41fff libcompiler_rt.dylib arm64  <cd83d9e185c43820a03fd018a7321b2a> /usr/lib/system/libcompiler_rt.dylib
0x1d400f000 - 0x1d400ffff liblaunch.dylib arm64  <5e9d917f41d23568889a2d74a12446a9> /usr/lib/system/liblaunch.dylib
0x1d4010000 - 0x1d4015fff libmacho.dylib arm64  <7e4bdcc5830e33feb1141fcd5abe21aa> /usr/lib/system/libmacho.dylib
0x1d4016000 - 0x1d4018fff libremovefile.dylib arm64  <4acd11ced3f83562a5ff9d6896b07164> /usr/lib/system/libremovefile.dylib
0x1d4019000 - 0x1d401afff libsystem_featureflags.dylib arm64  <956d43661dea3dd5a7029b8d345289ca> /usr/lib/system/libsystem_featureflags.dylib
0x1d401b000 - 0x1d4048fff libsystem_m.dylib arm64  <adfc3aac75c0342cb72b2d50d29ef28d> /usr/lib/system/libsystem_m.dylib
0x1d4049000 - 0x1d404efff libunwind.dylib arm64  <2ad0d47cf0f53a9f8c140cb8dd009c91> /usr/lib/system/libunwind.dylib
0x1d432e000 - 0x1d4395fff NanoRegistry arm64  <115719fffc0d394a9516e82dd06f219c> /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
0x1d4396000 - 0x1d43a3fff NanoPreferencesSync arm64  <d48f6b82db873cd99cb3332f0d4a8f48> /System/Library/PrivateFrameworks/NanoPreferencesSync.framework/NanoPreferencesSync
0x1d4d86000 - 0x1d4dbffff CryptoTokenKit arm64  <15782f61144b32ffa99852964437ef46> /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
0x1d5c96000 - 0x1d5caafff AppSSOCore arm64  <a8d86f1c336531a0a7144e8c0e059684> /System/Library/PrivateFrameworks/AppSSOCore.framework/AppSSOCore
0x1d6097000 - 0x1d60a1fff PointerUIServices arm64  <0df18b83eb173ca9a87fd1391fdeea49> /System/Library/PrivateFrameworks/PointerUIServices.framework/PointerUIServices

EOF


```


```
crash Log

Incident Identifier: 926328CE-927A-4D1B-940C-B17A0CD1A5DB
CrashReporter Key:   3af694acc56eb48927bd9022990ac1238a192d06
Hardware Model:      iPad2,2
Process:         LiBai [6180]
Path:            /var/mobile/Applications/321E7CC8-5D97-4739-B388-1E49E6A7E2BD/LiBai.app/LiBai
Identifier:      LiBai
Version:         ??? (???)
Code Type:       ARM (Native)
Parent Process:  launchd [1]

Date/Time:       2011-12-30 10:37:35.221 -0800
OS Version:      iPhone OS 5.0.1 (9A405)
Report Version:  104

Exception Type:  EXC_BAD_ACCESS (SIGSEGV)
Exception Codes: KERN_INVALID_ADDRESS at 0x00000000
Crashed Thread:  0

Thread 0 name:  Dispatch queue: com.apple.main-thread
Thread 0 Crashed:
0   libsystem_c.dylib                 0x32ed2c28 0x32e5d000 + 482344
1   libsystem_c.dylib                 0x32ea9bac 0x32e5d000 + 314284
2   libsystem_c.dylib                 0x32e73844 0x32e5d000 + 92228
3   LiBai                             0x00119028 0x100000 + 102440
4   LiBai                             0x00119f04 0x100000 + 106244
5   LiBai                             0x0011bd02 0x100000 + 113922
6   LiBai                             0x00117de6 0x100000 + 97766
7   LiBai                             0x0011818a 0x100000 + 98698
8   CoreFoundation                    0x34229224 0x34211000 + 98852
9   LiBai                             0x00118c82 0x100000 + 101506
10  Foundation                        0x32d51c32 0x32c8b000 + 814130
11  Foundation                        0x32ca96e2 0x32c8b000 + 124642
12  Foundation                        0x32ca96ac 0x32c8b000 + 124588
13  Foundation                        0x32ca95ce 0x32c8b000 + 124366
14  CFNetwork                         0x3795989e 0x3794a000 + 63646
15  CFNetwork                         0x3794e53e 0x3794a000 + 17726
16  CFNetwork                         0x3794e23c 0x3794a000 + 16956
17  CFNetwork                         0x3794e172 0x3794a000 + 16754
18  CoreFoundation                    0x3429eafc 0x34211000 + 580348
19  CoreFoundation                    0x3429e2c8 0x34211000 + 578248
20  CoreFoundation                    0x3429d06e 0x34211000 + 573550
21  CoreFoundation                    0x342204d6 0x34211000 + 62678
22  CoreFoundation                    0x3422039e 0x34211000 + 62366
23  GraphicsServices                  0x30b0bfc6 0x30b08000 + 16326
24  UIKit                             0x327e873c 0x327b7000 + 202556
25  LiBai                             0x00101820 0x100000 + 6176
26  LiBai                             0x001017d8 0x100000 + 6104

从这里只能初步判断是因为访问了空的内存。但是具体的就不知道了。因为下面的进程调用都是堆栈信息，在网上找了很久终于找到了解决的办法。



分析crash报告：

1、首先我们需要一个XXXXX.app.dSYM  这个在 Archive 中的 release 版本的 应用程序.xcarchive可以找到，只要在对应的文件上面 右键 显示包内荣，可以看到有一个 dSYMs的文件夹，里面就有我们要的  XXXXX.app.dSYM 文件。

2、下面我们需要 找到  symbolicatecrash

/Developer/Platforms/iPhoneOS.platform/Developer/Library/PrivateFrameworks/DTDeviceKit.framework/Versions/A/Resources/symbolicatecrash)

    3、用终端进入 这个目录 然后 用   symbolicatecrash  crash 文件   dSYM 文件 > 输出的文件 这样的命令就可以导出。

Incident Identifier: 9B4E1CA2-CEB5-4777-BD93-FFFD3AC10E0F
CrashReporter Key:   3af694acc56eb48927bd9022990ac1238a192d06
Hardware Model:      iPad2,2
Process:         LiBai [6166]
Path:            /var/mobile/Applications/321E7CC8-5D97-4739-B388-1E49E6A7E2BD/LiBai.app/LiBai
Identifier:      LiBai
Version:         ??? (???)
Code Type:       ARM (Native)
Parent Process:  launchd [1]

Date/Time:       2011-12-30 10:36:22.049 -0800
OS Version:      iPhone OS 5.0.1 (9A405)
Report Version:  104

Exception Type:  EXC_BAD_ACCESS (SIGSEGV)
Exception Codes: KERN_INVALID_ADDRESS at 0x00000000
Crashed Thread:  0

Thread 0 name:  Dispatch queue: com.apple.main-thread
Thread 0 Crashed:
0   libsystem_c.dylib                 0x32ed2c28 0x32e5d000 + 482344
1   libsystem_c.dylib                 0x32ea9bac 0x32e5d000 + 314284
2   libsystem_c.dylib                 0x32e73844 0x32e5d000 + 92228
3   LiBai                             0x000a6028 fread_file_func (ioapi.c:97)
4   LiBai                             0x000a6f04 unzReadCurrentFile (unzip.c:1279)
5   LiBai                             0x000a8d02 -[ZipArchive UnzipFileTo:overWrite:] (ZipArchive.mm:238)
6   LiBai                             0x000a4de6 -[booklistViewController OnUnZip] (booklistViewController.m:68)
7   LiBai                             0x000a518a -[booklistViewController downloadManagerDataDownloadFinished:] (booklistViewController.m:146)
8   CoreFoundation                    0x34229224 0x34211000 + 98852
9   LiBai                             0x000a5c82 -[DownloadManager connectionDidFinishLoading:] (DownloadManager.m:138)
10  Foundation                        0x32d51c32 0x32c8b000 + 814130
11  Foundation                        0x32ca96e2 0x32c8b000 + 124642
12  Foundation                        0x32ca96ac 0x32c8b000 + 124588
13  Foundation                        0x32ca95ce 0x32c8b000 + 124366
14  CFNetwork                         0x3795989e 0x3794a000 + 63646
15  CFNetwork                         0x3794e53e 0x3794a000 + 17726
16  CFNetwork                         0x3794e23c 0x3794a000 + 16956
17  CFNetwork                         0x3794e172 0x3794a000 + 16754
18  CoreFoundation                    0x3429eafc 0x34211000 + 580348
19  CoreFoundation                    0x3429e2c8 0x34211000 + 578248
20  CoreFoundation                    0x3429d06e 0x34211000 + 573550
21  CoreFoundation                    0x342204d6 0x34211000 + 62678
22  CoreFoundation                    0x3422039e 0x34211000 + 62366
23  GraphicsServices                  0x30b0bfc6 0x30b08000 + 16326
24  UIKit                             0x327e873c 0x327b7000 + 202556
25  LiBai                             0x0008e820 main (main.m:14)
26  LiBai                             0x0008e7d8 0x8d000 + 6104

```

## iOS 程序开发时经常用遇到 EXC_BAD_ACCESS 错误导致 Crash，出现这种错误时一般 Xcode 不会给我们太多的信息来定位错误来源

当一个应用发生崩溃时会产生一份崩溃报告（Crash Report），该报告可以帮助我们了解崩溃的产生原因。该文档讲述了关于怎么样符号化、理解和分析崩溃报告的相关内容。


介绍
当iOS设备上的应用崩溃时，设备上会为其生成和保存一份崩溃报告。崩溃报告描述了应用程序在什么情况下结束运行的。在大多数情况下报告会为每个执行的线程包含一个完整的回溯（Backtrace），这对于调试应用崩溃问题时非常有用。如果你是iOS开发者，你应该查看这些崩溃报告来了解你的应用存在哪些崩溃，并且应该对这些崩溃进行修复。

崩溃报告中带有的回溯必须要先进行符号化（Symbolicated）才可以进行分析。符号化（Symbolication）指的是使用人能够读懂的方法名称和行号来替换回溯里面的内存地址信息。如果你通过XCode的Devices窗口获得一台设备的崩溃日志，那么它会在几秒钟内自动地将日志进行符号化。否则你需要手动将.crash文件导入到XCode的Devices窗口中进行符号化。可以参考符号化（Symbolication）章节来了解详细的内容

低内存报告与其它崩溃报告不同的地方在于它没有回溯信息。当一个低内存崩溃发生时，你必须检查你的内存使用图表（在Debug面板的Memory中查看）并且对低内存警告做出应对处理（如UIViewController中的didReceiveMemoryWarning）。本篇文档会提供给你一些内存管理方面的参考资料，你应该能够在里面学习到一些有用的信息。

获取崩溃和低内存报告
《调试部署iOS应用》一文中讲述了怎样直接从一台iOS设备中查找崩溃和低内存报告。

《应用分发向导－分析崩溃报告》一文中讲述了怎么查看从TestFlight的beta测试用户和从AppStore下载你的App的用户那里所收集到的崩溃日志信息。

分析崩溃报告
本章节主要讨论一份标准的崩溃报告中出现的每个小节。

头部信息（Header）
每份崩溃报告的开头都带有一个头部信息。

Incident Identifier: E6EBC860-0222-4B82-BF7A-2B1C26BE1E85 

CrashReporter Key: 6196484647b3431a9bc2833c19422539549f3dbe 

Hardware Model: iPhone6,1

Process: TheElements [4637]

Path: /private/var/mobile/Containers/Bundle/Application/5A9E4FC2-D03B-4E19-9A91- 104A0D0C1D44/TheElements.app/TheElements

Identifier: com.example.apple-samplecode.TheElements 

Version: 1.12

Code Type: ARM (Native)

Parent Process: launchd [1]


Date/Time: 2015-04-06 09:14:08.775 -0700 

Launch Time: 2015-04-06 09:14:08.597 -0700

OS Version: iOS 8.1.3 (12B466)

Report Version: 105
清单1.从某份崩溃报告中摘录下来的头部信息

大多数字段的意思都很容易理解，有少数字段需要特殊说明一下：

Incident Identifier：报告的唯一标识。不同的报告该值不相同。
CrashReporter Key：每台设备的匿名标识（并非真正的设备标识）。如果不同的报告出自同一设备，则该值相同。
Process：崩溃进程的名称。该值对应应用信息属性列表（Info.plist）中的CFBundleExecutable所指定的值。
Version：崩溃进程的版本号。该值对应应用信息属性列表（Info.plist）中的CFBundleVersion和CFBundleVersionString拼接起来的值。
Code Type：崩溃进程的目标体系结构。该值是ARM-64或ARM中的一个。
OS Version：发生崩溃的操作系统版本号（包括构建版本号）。
异常代码（Exception Codes）
这里不要和Objective-C/C++的异常混淆了（虽然两者都有可能是崩溃的原因）。本章节列出了Mach的异常类型、子异常类型、处理器专用异常代码和其它的一些字段来为崩溃的根本原因提供更多的信息。最后一个字段列出了触发崩溃的线程的索引。并不是所有字段都会在每份崩溃报告中出现。

Exception Type: EXC_CRASH (SIGABRT)

Exception Codes: 0x0000000000000000, 0x0000000000000000

Triggered by Thread: 0
清单2.从某份崩溃报告中摘录的异常代码

下面的章节将对一些公共的异常类型进行说明。

坏的内存访问 [EXC_BAD_ACCESS // SIGSEGV // SIGBUS]

进程试图访问无效的内存地址. 子异常类型字段包含一个kern_return_t的错误描述. 子异常代码(该值跟在子异常类型的后面) 列出被访问的坏内存地址。

如果objc_msgSend或者objc_release出现接近崩溃线程的回溯顶部, 进程可能试图向已经释放的对象发送消息. 你应该通过Instrument工具的Zombies来分析你的应用，以便更好地了解触发该崩溃的条件。

不正常退出[EXC_CRASH // SIGABRT]

进程不正常退出. 导致该异常的大多数情况是因为没有捕获Objective - C/C++所产生的异常。

如果应用扩展（App Extensions）在初始化时花费太多时间将会被结束掉(watchdog结束，watchdog结束指的是watchdog超时后强行终止应用)。如果扩展在启动时由于挂起而被杀掉进程，那么崩溃报告的子异常类型将会是LAUNCH_HANG。因为扩展没有主函数，因此初始化花费的时间都体现在扩展和依赖库的静态构造函数和+load方法中。你应该尽可能地避免在静态构造函数和+load方法中处理过多的工作（也就是文档中说的延迟大部分的工作处理）。

跟踪陷阱 [EXC_BREAKPOINT // SIGTRAP]

跟非正常退出相似。该异常是由于打算给一个附加的调试器在执行特定的断点来中断进程时触发。你可以在自己的代码中使用__builtin_trap()方法来触发此异常。如果没有被调试器所附加，那么进程将会结束并且生成一份崩溃报告。

如果Swift代码在运行时发现一个意外的情况时，也会以该异常类型结束程序。例如：

为一个非可选（non-optional）类型被赋值nil
一个有问题的强制类型转换
通过看崩溃线程的回溯来确定是在什么位置出现异常的情况。

守护资源的侵害 [EXC_GUARD]

进程侵害了一个被守护的资源。系统库可能会标记守护某些文件描述符，在此之后如果对这些文件描述符作正常的操作将触发EXC_GUARD异常（当系统想操作这些文件描述符时，会使用特殊的'guarded'私有API）。该异常类型可以帮助你快速地跟踪例如关闭一个由系统库打开的文件描述符这类的问题。举个例子，如果应用关闭了一个基于SQLite存储的Core Data的SQLite文件描述符，那么Core Data随后也会离奇地崩溃。守护异常越早发现越容易调试。

相关的子异常类型是一个位字段（bitfield），分解如下：

[63:61] ‐ 守护类型: 守护资源的类型. 0x2表示一个文件描述符。
[60:32] ‐ 特点（Flavor）: 违规行为被触发的条件。
如果第一位（1 << 0）被设置，则表示进程试图在被守护的文件描述符上调用close()
如果第二位（1 << 1）被设置，则表示进程试图在一个被守护的文件描述符上调用dup()、dup2() 、带有F_DUPFD或者F_DUPFD_CLOEXEC命令的fcntl()方法。
如果第三位（1 << 2）被设置，则表示进程试图通过套接字（Socket）来发送一个被守护的文件描述符。
如果第五位（1 << 4）被设置，则表示进程试图对一个被守护的文件描述进行写操作。
[31:0] ‐文件描述符：进程试图修改的被守护的文件描述符。
资源限制 [EXC_RESOURCE]

进程触及了消耗资源的限额。这不是一个崩溃，但系统会派发通知告诉进程使用了过多的资源。在子异常类型中会描述确切的资源信息：

子异常类型WAKEUPS表示一个线程每秒中唤醒的次数太多，这迫使CPU唤醒太频繁并且会损耗电池的寿命。

子异常类型MEMORY表示进程已经越过了系统强制的内存限制。这可能是过多占用内存而导致崩溃的前兆。

其它异常类型

一些崩溃报告可能包含一个未命名的异常类型，是一个十六进制数（如：00000020）。如果你收到这样的崩溃报告，直接查看下面更多的异常代码信息：

0xbaaaaaad表示日志是整个系统的一个堆栈快照（stackshot）而不是一个崩溃报告。通过按下Home键和任意音量键可以获得堆栈快照（stackshot）。通常这些日志是被用户意外创建的（不小心同时按下了Home键＋音量键），而不是一个错误。

0xbad22222表示一个VoIP应用由于恢复过于频繁而被iOS结束进程。

0x8badf00d表示一个应用由于watchdog发生超时而被iOS结束进程。这表明该应用程序在启动、结束或者响应系统事件时花费太长时间。一个常见的例子是在主线程上实现同步的网络操作。任何在Thread 0（主线程）上的操作都应该放到后台线程上执行，或者使用不阻塞主线程的方式进行处理。

0xc00010ff表示一个应用由于响应一个热事件（thermal event）而被操作系统杀掉进程。这可能是由于在特定的设备上发生崩溃，或者是操作环境的问题。为了让你的程序获得更多有效的提示，请观看《使用Instruments来提升iOS性能和电量优化的WWDC会议》。

0xdead10cc表示一个应用由于在后台运行时还保留着系统的资源（如通讯录数据库）而被iOS结束进程。

0xdeadfa11表示应用程序被用户强制退出。当用户先按住开机键直到出现“滑动来关机”界面后再按住Home一段时间后就会出现强制退出的情况。这可能由于应用程序无法响应才使用这种方法来进行强制退出，但是不能保证可以退出所有应用程序。

注意：从多任务列表中直接结束一个挂起的应用是不会产生崩溃报告的。一旦应用挂起，则iOS可以在任何时候将其结束，而不产生崩溃报告。

应用具体信息（Application Specific Information）
某些崩溃会写入一些额外的信息到崩溃报告中。不同的结束类型对应该部分的内容也不相同。你可以通过阅读本章内容来更好地了解一下应用程序结束的情形。

Application Specific Information:

MyApp[134] was suspended with locked system files: 

/private/var/mobile/Library/AddressBook/AddressBook.sqlitedb
清单3.从某份崩溃报告中摘录的应用具体信息

回溯（Backtrace）
奔溃报告中最有趣的部分就是每个进程当时已经中止执行的线程回溯。这些回溯的内容就和你使用调试器停止执行应用的时候看到的内容类似。

Thread 0 name: Dispatch queue: com.apple.main-thread 

Thread 0 Crashed:

0 TheElements 0x0000000100063fdc -[AtomicElementViewController myTransitionDidStop:finished:context:] (AtomicElementViewController.m:201)

1 UIKit 0x000000018ca5c2ec -[UIViewAnimationState sendDelegateAnimationDidStop:finished:] + 184

2 UIKit 0x000000018ca5c1f4 -[UIViewAnimationState animationDidStop:finished:] + 100

3 QuartzCore 0x000000018c380f60 CA::Layer::run_animation_callbacks(void*) + 292

4 libdispatch.dylib 0x0000000198fb9368 _dispatch_client_callout + 12

5 libdispatch.dylib 0x0000000198fbd97c_dispatch_main_queue_callback_4CF + 928

6 CoreFoundation 0x000000018822dfa0 __CFRUNLOOP_IS_SERVICING_THE_MAIN_DISPATCH_QUEUE__ + 8

7 CoreFoundation 0x000000018822c048 __CFRunLoopRun + 1488

8 CoreFoundation 0x00000001881590a0 CFRunLoopRunSpecific + 392

9 GraphicsServices 0x00000001912fb5a0 GSEventRunModal + 164

10 UIKit 0x000000018ca8aaa0 UIApplicationMain + 1484

11 TheElements 0x000000010005d800 main (main.m:55)

12 libdyld.dylib 0x0000000198fe2a04 start + 0

Thread 1 name: Dispatch queue: com.apple.libdispatch-manager

Thread 1:

0 libsystem_kernel.dylib 0x00000001990e0c94 kevent64 + 8

1 libdispatch.dylib 0x0000000198fc897c_dispatch_mgr_invoke + 272

2 libdispatch.dylib 0x0000000198fbb3b0_dispatch_mgr_thread + 48

...
清单4. 从某份已完成符号化的崩溃报告中摘录的回溯内容

符号化（Symbolication）

从iOS设备中检索到的崩溃日志只有可执行代码在加载的二进制映像（Binary Images）中的十六进制地址，是没有包含方法或函数名称的，而这些方法和函数的名称被称为符号，如清单5所示，你需要将这些地址与符号进行映射。

将回溯的地址解析为源码的方法和行号被称为符号化 ，这过程需要上传到AppStore的应用的二进制文件和编译二进制文件时生成的.dSYM文件。二进制文件和.dSYM文件是一一对应的，否则崩溃报告可能只会显示部分内容被符号化，如清单6所示。因此，保留每个分发给用户的应用包（不管如何分发）和对应的.dSYM文件就非常有必要了。

Thread 0 name: Dispatch queue: com.apple.main-thread

Thread 0 Crashed:

0 TheElements 0x00000001000effdc0x1000e4000+49116

1 UIKit 0x000000018ca5c2ec 0x18ca14000 + 295660

2 UIKit 0x000000018ca5c1f4 0x18ca14000 + 295412

3 QuartzCore 0x000000018c380f600x18c36c000 + 85856

4 libdispatch.dylib 0x0000000198fb93680x198fb8000 + 4968

5 libdispatch.dylib 0x0000000198fbd97c0x198fb8000 + 22908

6 CoreFoundation 0x000000018822dfa0 0x188150000 + 909216

7 CoreFoundation 0x000000018822c048 0x188150000 + 901192

8 CoreFoundation 0x00000001881590a00x188150000 + 37024

9 GraphicsServices 0x00000001912fb5a00x1912f0000 + 46496

10 UIKit 0x000000018ca8aaa0 0x18ca14000 + 486048

11 TheElements 0x00000001000e98000x1000e4000 + 22528

12 libdyld.dylib 0x0000000198fe2a040x198fe0000 + 10756
清单5.从某份未符号化的崩溃报告中摘录的回溯部分

Thread 0 name: Dispatch queue: com.apple.main-thread

Thread 0 Crashed:

0 TheElements 0x00000001000effdc0x1000e4000 + 49116

1 UIKit 0x000000018ca5c2ec -[UIViewAnimationState sendDelegateAnimationDidStop:finished:] + 184

2 UIKit 0x000000018ca5c1f4 -[UIViewAnimationState animationDidStop:finished:] + 100

3 QuartzCore 0x000000018c380f60 CA::Layer::run_animation_callbacks(void*) + 292

4 libdispatch.dylib 0x0000000198fb9368_dispatch_client_callout + 12

5 libdispatch.dylib 0x0000000198fbd97c_dispatch_main_queue_callback_4CF + 928

6 CoreFoundation 0x000000018822dfa0 __CFRUNLOOP_IS_SERVICING_THE_MAIN_DISPATCH_QUEUE__ + 8

7 CoreFoundation 0x000000018822c048__CFRunLoopRun + 1488

8 CoreFoundation 0x00000001881590a0CFRunLoopRunSpecific + 392

9 GraphicsServices 0x00000001912fb5a0GSEventRunModal + 164

10 UIKit 0x000000018ca8aaa0UIApplicationMain + 1484

11 TheElements 0x00000001000e98000x1000e4000 + 22528

12 libdyld.dylib 0x0000000198fe2a04start + 0
清单6.从某份部分符号化崩溃报告中摘录的回溯部分（系统的栈帧已符号化，但没有符号化应用程序栈帧）

要点：你必须保留应用程序二进制和它对应的.dSYM文件才能够完整地进行符号化。你每次提交这些编译文件到iTunes Connect的时候必须要将它们归档。.dSYM文件和应用程序的二进制文件在每次编译中是对应捆绑的。即使是往后使用的是相同的源文件进行编译，那产生的.dSYM文件和应用程序的二进制文件也是跟之前的没有任何关系的。如果你使用XCode的Build和Archive命令进行编译，那么.dSYM 文件和二进制文件将会自动放到一个合适的路径。不然也可以是一个通过Spotlight可搜索到的位置（如你的Home目录）。

使用XCode的Archive命令可以很容易地使二进制文件和.dSYM文件配对。当你使用Archive命令（通过选择Product菜单中的Archive）时，XCode会一起生成应用的二进制文件和包含符号信息的.dSYM文件并将它们保存到你的Home目录下。你可以通过XCode的Organizer在Archived栏目下找到所有你归档过的应用。当符号化崩溃报告时，XCode会自动从这里查找对应的归档应用；并且可以通过这里直接提交归档应用到iTunes Connect来确保你release的应用程序二进制文件和.dSYM文件相匹配。

XCode会自动符号化所有能够匹配程序二进制文件和.dSYM文件的崩溃报告。因此，你需要将所有要符号化的崩溃报告添加到XCode的Organizer中。其步骤如下：

将iOS设备连接到你的Mac中。
选择XCode的Window菜单中的Devices。
在左侧的DEVICES栏目下选择连接的设备。
在右侧的Device Information栏目下点击“View Device Logs”按钮。
将你的崩溃报告拖拽到弹出面板的左侧。
XCode会自动符号化崩溃报告并显示符号化后的结果。
异常（Exceptions）

异常在Objective-C中用来说明编程中或者运行时意外发生的错误。例如：在集合中的超出范围访问、试图改变一个不可变的对象、没有实现协议中必须实现的方法或者给对象发送一个不存在的消息等。

注意：给一个已经释放的对象发送消息会抛出NSInvalidArgumentException异常而不是立即崩溃；当一个新对象分配的内存刚好在已释放对象的内存地址上时会发生这样的情况。如果你的应用崩溃是由于未捕获的NSInvalidArgumentException异常（在异常的回溯中看到有-[NSObject(NSObject) doesNotRecognizeSelector:]这样的信息），可以考虑使用Instrument的Zombies分析你的应用程序来尽可能排出一些不合理的内存管理情况。

如果一个异常未被捕获，那么它会被一个叫未捕获异常处理器（uncaught exception handler）的方法所拦截。iOS默认的未捕获异常处理器会将异常信息和回溯打印到设备的控制台后结束掉程序。只有最后一个未捕获异常会写入到崩溃报告的Last Exception Backtrace小节下，如清单7所示。崩溃报告中省略了异常消息。如果你收到一份带有Last Exception Backtrace小节的崩溃报告，你应该从原来的设备获得控制台日志来更好地了解导致抛出这次异常的情况。

Last Exception Backtrace:

(0x18632c2d8 0x197af80e4 0x18632bf5c 0x187165480 0x186257520 0x18b18c7a0 0x18b088384
0x18ad6ca28 0x18ad6c994 0x18af0f25c 0x18ae21ef0 0x18ae21cbc 0x18ae21c3c 0x18ad69760
0x18a6b1e1c 0x18a6ac884 0x18a6ac728 0x18a6abebc 0x18a6abc3c 0x18a6a5364 0x1862e42a4
0x1862e1230 0x1862e1610 0x18620d2d4 0x18fa2b6fc 0x18add2fac 0x1000fd2f4 0x198176a08)
条目7.从某份未符号化的异常报告中摘录的Last Exception Backtrace小节

带有Last Exception Backtrace的崩溃日志仅包含了16进制的地址信息，必须对其进行符号化处理，使它变成可被理解的回溯。如条目8所示：

Last Exception Backtrace:

0   CoreFoundation 0x18632c2d8 __exceptionPreprocess + 132

1   libobjc.A.dylib 0x197af80e4 objc_exception_throw + 60

2   CoreFoundation 0x18632bf5c -[NSException raise] + 12

3   Foundation 0x187165480 -[NSObject(NSKeyValueCoding) setValue:forKey:] + 248

4   CoreFoundation 0x186257520 -[NSArray makeObjectsPerformSelector:] + 248

5   UIKit 0x18b18c7a0 -[UINib instantiateWithOwner:options:] + 1604

6   UIKit 0x18b088384 -[UIViewController _loadViewFromNibNamed:bundle:] + 284

7   UIKit 0x18ad6ca28 -[UIViewController loadViewIfRequired] + 88

8   UIKit 0x18ad6c994 -[UIViewController view] + 32

9   UIKit 0x18af0f25c -[UINavigationController _startCustomTransition:] + 712

10  UIKit 0x18ae21ef0 -[UINavigationController _startDeferredTransitionIfNeeded:] + 468

11  UIKit 0x18ae21cbc -[UINavigationController __viewWillLayoutSubviews] + 56

12  UIKit 0x18ae21c3c -[UILayoutContainerView layoutSubviews] + 200

13  UIKit 0x18ad69760 -[UIView(CALayerDelegate) layoutSublayersOfLayer:] + 580

14  QuartzCore 0x18a6b1e1c -[CALayer layoutSublayers] + 152

15  QuartzCore 0x18a6ac884 CA::Layer::layout_if_needed(CA::Transaction*) + 320

16  QuartzCore 0x18a6ac728 CA::Layer::layout_and_display_if_needed(CA::Transaction*) + 32

17  QuartzCore 0x18a6abebc CA::Context::commit_transaction(CA::Transaction*) + 276

18  QuartzCore 0x18a6abc3c CA::Transaction::commit() + 528

19  QuartzCore 0x18a6a5364 CA::Transaction::observer_callback(__CFRunLoopObserver*, unsigned long, void*) + 80

20  CoreFoundation 0x1862e42a4 __CFRUNLOOP_IS_CALLING_OUT_TO_AN_OBSERVER_CALLBACK_FUNCTION__ + 32

21  CoreFoundation 0x1862e1230 __CFRunLoopDoObservers + 360

22  CoreFoundation 0x1862e1610 __CFRunLoopRun + 836

23  CoreFoundation 0x18620d2d4 CFRunLoopRunSpecific + 396

24  GraphicsServices 0x18fa2b6fc GSEventRunModal + 168

25  UIKit 0x18add2fac UIApplicationMain + 1488

26  TheElements 0x1000fd2f4 main (main.m:55)

27  libdyld.dylib 0x198176a08 start + 4
清单8.从某份已符号化的崩溃报告中摘录的Last Exception Backtrace小节.这是一个在应用的故事板中加载一个场景时抛出的异常。因为一个与IBOutlet相关联的场景元素缺失导致。

注意：如果发现你的应用程序所指定的异常处理域中的异常在抛出时没有被捕获，请检查你的应用或者库在编译时是否指定了-no_compact_unwind标识，如果指定了请去掉。

64位的iOS使用了一个“零成本（zero-cost）”的异常实现。在一个“零成本”系统中，每个可能抛出异常的方法都有描述怎么unwind堆栈的附加信息。如果一个异常在不具有unwind数据的栈帧中抛出，那么异常处理将无法继续并且进程被停止执行。这有可能是一个更上层堆栈异常处理，但是如果有一帧没有unwind数据那么将没有方法知道异常从哪一个栈帧抛出。指定-no_compact_unwind标识意味着你的方法没有unwind table的代码，所以你不能从这些方法中抛出异常。

此外，如果你的应用程序或库包含纯C代码，你可能需要指定-funwind-tables标识来让你的代码中的所有方法包含unwind table。

线程状态（Thread State）
该小节列出了崩溃线程的ARM状态。这是一份在崩溃时寄存器及其值的列表。当你看一份崩溃报告的时候了解线程状态不是必须的，但你可以利用这些信息来更好的了解当时崩溃的情况。

Thread 0 crashed with ARM Thread State (64-bit):

x0: 0x0000000000000000   x1: 0x0000000000000000   x2: 0x0000000000000000   x3: 0x00000001995f8020

x4: 0x0000000000000000   x5: 0x0000000000000001   x6: 0x0000000000000000   x7: 0x0000000000000000

x8: 0x0000000000000000   x9: 0x0000000000000015  x10: 0x0000000199601df0  x11: 0x0000000b0000000f

x12: 0x00000001741e8700  x13: 0x000001a5995f5779  x14: 0x0000000000000000  x15: 0x0000000044000000

x16: 0x00000001989724d8  x17: 0x0000000188176370  x18: 0x0000000000000000  x19: 0x00000001701dda60

x20: 0x0000000000000001  x21: 0x0000000136606e20  x22: 0x00000001000f6238  x23: 0x0000000000000000

x24: 0x000000019cc640a8  x25: 0x0000000000000020  x26: 0x0000000000000000  x27: 0x0000000000000000

x28: 0x000000019cc577c0  fp: 0x000000016fd1a8d0   lr: 0x00000001000effcc

sp: 0x000000016fd1a860   pc: 0x00000001000effdc cpsr: 0x60000000
清单9.从某份崩溃报告中摘录的线程状态小节

二进制映像（Binary Images）
该小节列出了崩溃时加载到进程中的二进制映像。

Binary Images:

0x100058000 - 0x10006bfff TheElements arm64 <77b672e2b9f53b0f95adbc4f68cb80d6>
/var/mobile/Containers/Bundle/Application/CB86658C-F349-4C7A-B73B-CE3B4502D5A4/TheElements.app/TheElements

...
清单10.从某份崩溃报告中摘录的二进制映像小节中的程序入口

每行列出一个二进制映像的以下细节：

二进制映像在进程中的地址空间。
二进制映像的可执行程序名称。
二进制映像的体系结构。一个可执行文件可以包含多个不同体系结构的“切片”，但仅有一个“切片”将会加载到进程中。
二进制映像的唯一标识UUID。每个版本的应用程序/框架和与其对应的符号化.dSYM文件影响此标识的变化。
可执行文件在磁盘上的路径。
了解低内存报告
当发现低内存情况时，iOS中的虚拟内存系统会依靠协作的应用程序去释放内存。低内存警告会通知所有运行中的程序和进程来请求释放内存，希望减少内存的使用量。如果内存压力得不到释放，系统可能会终止后台的进程来缓解内存压力。如果有足够的内存被释放，那么你的程序可以继续运行，否则你的程序会由于没有足够的内存来满足需要而被iOS结束掉，并且会在设备上生成和保存一份低内存报告。

低内存报告的格式和其它的崩溃报告不一样，它没有应用的线程回溯；其开始带有一个类似于崩溃报告的头部信息，接下来就是整个系统的内存统计字段的集合。值得关注的是一个叫Page SIze字段的值，其记录了关于每个进程在低内存报告中的使用内存分页数量方面的情况。

低内存报告中最重要的部分就是进程列表（table of processes）。该表列出了在低内存报告生成时所有正在运行的进程，包括系统的守护进程。如果一个进程被“抛弃（jettisoned）”，其原因将会记录在[reason]列中。进程被“抛弃”可能由于下面的原因导致：

[per‐process‐limit]：该进程跨越了系统施加的内存限制。系统为所有应用建立的常驻内存进行了限制。跨越该限制的进程将会被终止。
注意：扩展的进程内存限制很低，某些技术，如地图视图和SpriteKit都需要较高的内存成本，不适合在扩展中使用。

[vm‐pageshortage]/[vm‐thrashing]/[vm]：进程由于内存压力而被杀死。
[vnode‐limit]:打开了太多的文件。
注意：最前面的应用即使耗尽所有虚拟节点，系统也不会将其杀死。这意味着你的应用在后台时，即使不是过量使用虚拟节点的源也有可能会被结束。

[highwater]: 一个系统守护进程跨越了它的内存使用的最大标记值。
[jettisoned]: 其它原因导致进程被抛弃。
如果你没有看到原因中列出你的应用/扩展的进程，那么可能不是因为内存压力引起的崩溃。查看.crash文件（上一节讲述的）了解更多信息。

当你看到一个低内存崩溃时，与其关心那一部分代码在应用终止时正在执行，倒不如检查你对内存的使用方式和对低内存警告的响应处理。《在你的应用中查找内存问题》一文中详细地讲述了如何使用Instruments的Leaks分析来发现内存泄露，以及如何使用Allocations分析的Mark Heap功能来防止出现被遗弃的内存。《内存使用性能指南》论述了一种正确的方法来应对低内存通知，同时又提供了很多有效使用内存的技巧。同时也建议你看看WWDC2010年会议，使用Instruments进行高级内存分析。

重点：Instruments的Leaks和Allocations分析无法跟踪所有的内存使用。你需要与Instruments的VM Tracker一起来运行你的应用（包含在Instruments的Allocations的模版中）来查看所有的内存使用量。VM Tracker默认是不开启的，要想启动VM Tracker，可以通过点击Instruments，选中“Automatic Snapshotting”选项或者手动按下“Snapshot Now”按钮。

相关文档
有关如何使用Instruments的Zombies模版来修复内存过度释放而崩溃的更多信息，请参考《通过Zombies模版来消除僵尸对象》

有关应用归档的更多信息，请参考《通过XCode的Archive功能来进应用分发与测试》

关于解析崩溃日志的更多信息，请参考《iPhone OS WWDC 2010会议上的了解崩溃报告》

文档修改记录
日期    备注
2015‐07‐21    XCode6开展的崩溃报告讨论更新
2012‐12‐13    增加更多的异常代码信息
2012‐03‐28    XCode4更新，加入关于低内存崩溃报告和更多异常代码信息。
2011‐03‐01    iOS4或更高版本的变化更新
2010‐07‐06    修复文档中的Bug
2010‐05‐18    iPhone OS3.2和XCode 3.2.2的变化更新
2009‐06‐01    添加强调不仅需要保存.dSYM文件，还需要保存应用的二进制文件。
2009‐04‐30    iTunes Connect崩溃日志服务更新
2009‐02‐18    包含一个防止应用程序代码被符号化的问题解决方案更新
2009‐01‐29    为开发人员说明如何符号化、了解和分析崩溃报告的新文档

原文链接：https://developer.apple.com/library/ios/technotes/tn2151/_index.html

# 开启僵尸指针 定位EXC_BAD_ACCESS异常
## 点击 Xcode - Product -> Edit Scheme -> Arguments, 然后将点击”加号”, 
## 将 NSZombieEnabled 参数加到 Environment Variables 窗口中, 后面的数值写上 ”YES”.

# 内存泄露这类问题不同的项目有不同的原因，
# 建议多使用instrument的leaks排查，
# 并通过崩溃趋势来大致确认出现问题的业务模块。

```
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

 
```
