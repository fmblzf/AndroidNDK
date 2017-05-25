//
// Created by fmblzf on 2017/5/24.
//
#include <jni.h>
#include "com_fmblzf_androidndk_ndk_AndroidNDK.h"

/*
 * Class:     com_fmblzf_androidndk_ndk_AndroidNDK
 * Method:    startService
 * Signature: (Ljava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_com_fmblzf_androidndk_ndk_AndroidNDK_startService
(JNIEnv *env, jobject obj, jstring string, jint sdk){

}

/*
 * Class:     com_fmblzf_androidndk_ndk_AndroidNDK
 * Method:    startActivity
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_fmblzf_androidndk_ndk_AndroidNDK_startActivity
(JNIEnv *env, jobject obj, jstring companentName){

}

/*
 * Class:     com_fmblzf_androidndk_ndk_AndroidNDK
 * Method:    sendBroadCast
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_fmblzf_androidndk_ndk_AndroidNDK_sendBroadCast
(JNIEnv *env, jobject obj, jstring actionName){
}

/*
 * Class:     com_fmblzf_androidndk_ndk_AndroidNDK
 * Method:    test
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_fmblzf_androidndk_ndk_AndroidNDK_test
        (JNIEnv *env, jobject obj, jstring str){
    return (*env)->NewStringUTF(env,"调用成功！");
}

