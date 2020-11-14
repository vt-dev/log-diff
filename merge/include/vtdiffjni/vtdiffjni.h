/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_visualthreat_util_VTDiff */

#ifndef _Included_com_visualthreat_util_VTDiff
#define _Included_com_visualthreat_util_VTDiff
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_visualthreat_util_VTDiff
 * Method:    initLog
 * Signature: ([Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_visualthreat_util_VTDiff_initLog
  (JNIEnv *, jobject, jobjectArray);

/*
 * Class:     com_visualthreat_util_VTDiff
 * Method:    initDataGramSize
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_visualthreat_util_VTDiff_initDataGramSize
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_visualthreat_util_VTDiff
 * Method:    initLzma
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_visualthreat_util_VTDiff_initLzma
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_visualthreat_util_VTDiff
 * Method:    initBz2
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_visualthreat_util_VTDiff_initBz2
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_visualthreat_util_VTDiff
 * Method:    flushLog
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_visualthreat_util_VTDiff_flushLog
  (JNIEnv *, jobject);

/*
 * Class:     com_visualthreat_util_VTDiff
 * Method:    diff01
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_visualthreat_util_VTDiff_diff01
  (JNIEnv *, jobject, jstring, jstring, jstring, jstring);

/*
 * Class:     com_visualthreat_util_VTDiff
 * Method:    merge01
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_visualthreat_util_VTDiff_merge01
  (JNIEnv *, jobject, jstring, jstring, jstring, jstring);

/*
 * Class:     com_visualthreat_util_VTDiff
 * Method:    diff02
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_visualthreat_util_VTDiff_diff02
  (JNIEnv *, jobject, jstring, jstring, jstring, jstring, jstring, jstring, jstring, jstring, jstring, jstring, jstring);

/*
 * Class:     com_visualthreat_util_VTDiff
 * Method:    merge02
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_visualthreat_util_VTDiff_merge02
  (JNIEnv *, jobject, jstring, jstring, jstring, jstring, jstring);

#ifdef __cplusplus
}
#endif
#endif
