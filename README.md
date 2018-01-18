# AudioNoHook
源码编译JNI

主要参照：android源码下的jni开发 http://blog.csdn.net/fireness/article/details/50717280
再次感谢。

其次，如果按照默认的命名规则的话，完全可以不用重新实现jni_OnLoad()函数。

接下来就需要：

1、引用自己的libmedia.so库

2、设置好aosp中的头文件


