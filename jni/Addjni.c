#include <stdio.h>
#include <jni.h>
#include "Addjni.h"

//这里就是我们调用C/C++中的功能模块，实际开发中可以调用其他的各种C类去实现功能
// int addNumber(int num1, int num2){
//     return num1 + num2;
// }

//MainActivity中调用的add函数，作用就是连接java层和C/C++层的API，格式是java+包名+类名+函数名
JNIEXPORT jint JNICALL
Java_com_capsane_audionohook_MainActivity__add(JNIEnv* env, jobject thiz, jint num1, jint num2){
    return num1+num2;
}
