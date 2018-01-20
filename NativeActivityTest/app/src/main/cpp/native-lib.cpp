#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring

JNICALL
Java_hhoshino_nekonet_co_jp_testapplication_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
