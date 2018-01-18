#include <stdio.h>
#include <jni.h>
#include <assert.h>

// TODO: Add your methods 
// static JNINativeMethod method_table[] = {
//     // TODO: declare all methods
//     {"add", "(II)I;", (void*)native_add},
// };
 
 
// jint JNI_OnLoad(JavaVM* vm, void* reserved) {
//     JNIEnv* env;
//     if (vm->GetEnv(reinterpret_cast<void**>(&env), JNI_VERSION_1_6) != JNI_OK) {
//         return JNI_ERR;
//     } else {
//         jclass clazz = env->FindClass("com/capsane/Native"); // TODO: change to the correct package
//         if (clazz) {
//             jint ret = env->RegisterNatives(clazz, method_table, sizeof(method_table) / sizeof(method_table[0]));
//             env->DeleteLocalRef(clazz);
//             return ret == 0 ? JNI_VERSION_1_6 : JNI_ERR;
//         } else {
//             return JNI_ERR;
//         }
//     }
// }


jint Java_com_capsane_MainActivity_add(JNIEnv* env, jobject thiz, jint num1, jint num2){
    return num1+num2;
}

// JNIEXPORT jint JNICALL native_add(JNIEnv* env, jobject thiz, jint num1, jint num2){
//     return num1+num2;
// }
////////////////////////////////////////////////////////////////////////////////////////////////



// #define JNIREG_CLASS "com/capsane/Native"//指定要注册的类

// /**
// * Table of methods associated with a single class.
// */
// static JNINativeMethod gMethods[] = {
//     {"add", "(II)I;", (void*)native_add},
// };

/*
* Register several native methods for one class.
*/
// static int registerNativeMethods(JNIEnv* env, const char* className,
//         JNINativeMethod* gMethods, int numMethods)
// {
// 	jclass clazz;
// 	clazz = (*env)->FindClass(env, className);
// 	if (clazz == NULL) {
// 		return JNI_FALSE;
// 	}
// 	if ((*env)->RegisterNatives(env, clazz, gMethods, numMethods) < 0) {
// 		return JNI_FALSE;
// 	}

// 	return JNI_TRUE;
// }


/*
* Register native methods for all classes we know about.
*/
// static int registerNatives(JNIEnv* env)
// {
// 	if (!registerNativeMethods(env, JNIREG_CLASS, gMethods, 
//                                  sizeof(gMethods) / sizeof(gMethods[0])))
// 		return JNI_FALSE;

// 	return JNI_TRUE;
// }

/*
* Set some test stuff up.
*
* Returns the JNI version on success, -1 on failure.
*/
// JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM* vm, void* reserved)
// {
// 	JNIEnv* env = NULL;
// 	jint result = -1;

// 	if ((*vm)->GetEnv(vm, (void**) &env, JNI_VERSION_1_6) != JNI_OK) {
// 		return -1;
// 	}
// 	assert(env != NULL);

// 	if (!registerNatives(env)) {//注册
// 		return -1;
// 	}
// 	/* success -- return valid version number */
// 	result = JNI_VERSION_1_4;

// 	return result;
// }

// jint JNI_OnLoad(JavaVM* vm, void* reserved) {
//     JNIEnv* env;
//     if (vm->GetEnv(reinterpret_cast<void**>(&env), JNI_VERSION_1_6) != JNI_OK) {
//         return JNI_ERR;
//     } else {
//         jclass clazz = env->FindClass("/src/com/capsane/Native"); // TODO: change to the correct package
//         if (clazz) {
//             jint ret = env->RegisterNatives(clazz, method_table, sizeof(method_table) / sizeof(method_table[0]));
//             env->DeleteLocalRef(clazz);
//             return ret == 0 ? JNI_VERSION_1_6 : JNI_ERR;
//         } else {
//             return JNI_ERR;
//         }
//     }
// }