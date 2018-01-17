# AudioNoHook
源码编译JNI


java.lang.UnsatisfiedLinkError: Native method not found 
生产的so库不是空的；loadLibrary()函数确实执行了；只是在调用native method时找不到函数，当然不是参数为空的问题。
