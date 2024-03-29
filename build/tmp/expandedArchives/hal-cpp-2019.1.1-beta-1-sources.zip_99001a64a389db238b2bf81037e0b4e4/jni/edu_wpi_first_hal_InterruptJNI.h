/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class edu_wpi_first_hal_InterruptJNI */

#ifndef _Included_edu_wpi_first_hal_InterruptJNI
#define _Included_edu_wpi_first_hal_InterruptJNI
#ifdef __cplusplus
extern "C" {
#endif
#undef edu_wpi_first_hal_InterruptJNI_HalInvalidHandle
#define edu_wpi_first_hal_InterruptJNI_HalInvalidHandle 0L
/*
 * Class:     edu_wpi_first_hal_InterruptJNI
 * Method:    initializeInterrupts
 * Signature: (Z)I
 */
JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_InterruptJNI_initializeInterrupts
  (JNIEnv *, jclass, jboolean);

/*
 * Class:     edu_wpi_first_hal_InterruptJNI
 * Method:    cleanInterrupts
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_hal_InterruptJNI_cleanInterrupts
  (JNIEnv *, jclass, jint);

/*
 * Class:     edu_wpi_first_hal_InterruptJNI
 * Method:    waitForInterrupt
 * Signature: (IDZ)I
 */
JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_InterruptJNI_waitForInterrupt
  (JNIEnv *, jclass, jint, jdouble, jboolean);

/*
 * Class:     edu_wpi_first_hal_InterruptJNI
 * Method:    enableInterrupts
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_hal_InterruptJNI_enableInterrupts
  (JNIEnv *, jclass, jint);

/*
 * Class:     edu_wpi_first_hal_InterruptJNI
 * Method:    disableInterrupts
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_hal_InterruptJNI_disableInterrupts
  (JNIEnv *, jclass, jint);

/*
 * Class:     edu_wpi_first_hal_InterruptJNI
 * Method:    readInterruptRisingTimestamp
 * Signature: (I)D
 */
JNIEXPORT jdouble JNICALL Java_edu_wpi_first_hal_InterruptJNI_readInterruptRisingTimestamp
  (JNIEnv *, jclass, jint);

/*
 * Class:     edu_wpi_first_hal_InterruptJNI
 * Method:    readInterruptFallingTimestamp
 * Signature: (I)D
 */
JNIEXPORT jdouble JNICALL Java_edu_wpi_first_hal_InterruptJNI_readInterruptFallingTimestamp
  (JNIEnv *, jclass, jint);

/*
 * Class:     edu_wpi_first_hal_InterruptJNI
 * Method:    requestInterrupts
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_hal_InterruptJNI_requestInterrupts
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     edu_wpi_first_hal_InterruptJNI
 * Method:    attachInterruptHandler
 * Signature: (ILedu/wpi/first/hal/InterruptJNI/InterruptJNIHandlerFunction;Ljava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_hal_InterruptJNI_attachInterruptHandler
  (JNIEnv *, jclass, jint, jobject, jobject);

/*
 * Class:     edu_wpi_first_hal_InterruptJNI
 * Method:    setInterruptUpSourceEdge
 * Signature: (IZZ)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_hal_InterruptJNI_setInterruptUpSourceEdge
  (JNIEnv *, jclass, jint, jboolean, jboolean);

#ifdef __cplusplus
}
#endif
#endif
