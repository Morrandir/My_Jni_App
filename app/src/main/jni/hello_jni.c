#include <jni.h>

JNIEXPORT jstring JNICALL
Java_morrandir_myjniapp_MainActivity_aisatsu(JNIEnv *env, jobject instance) {
    jstring hello = "hello, jni.\n";
    return (*env)->NewStringUTF(env, hello);
}