# AudioNoHook
源码编译JNI


java.lang.UnsatisfiedLinkError: Native method not found 

1、生成的so库不是空的；

2、loadLibrary()函数确实执行了；

3、本身就是c文件，不存在extern "C"的问题；

4、函数名称的问题？

5、只是在调用native method时找不到函数，当然不是参数为空的问题。

按照http://blog.csdn.net/fireness/article/details/50717280的做法


只能是Android.mk的问题了。。。。
