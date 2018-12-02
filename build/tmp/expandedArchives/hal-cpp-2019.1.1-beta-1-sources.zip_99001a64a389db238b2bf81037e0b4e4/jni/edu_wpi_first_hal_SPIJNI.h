/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class edu_wpi_first_hal_SPIJNI */

#ifndef _Included_edu_wpi_first_hal_SPIJNI
#define _Included_edu_wpi_first_hal_SPIJNI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     edu_wpi_first_hal_SPIJNI
 * Method:    spiInitialize
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_hal_SPIJNI_spiInitialize
  (JNIEnv *, jclass, jint);

/*
 * Class:     edu_wpi_first_hal_SPIJNI
 * Method:    spiTransaction
 * Signature: (ILjava/nio/ByteBuffer;Ljava/nio/ByteBuffer;B)I
 */
JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_SPIJNI_spiTransaction
  (JNIEnv *, jclass, jint, jobject, jobject, jbyte);

/*
 * Class:     edu_wpi_first_hal_SPIJNI
 * Method:    spiTransactionB
 * Signature: (I[B[BB)I
 */
JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_SPIJNI_spiTransactionB
  (JNIEnv *, jclass, jint, jbyteArray, jbyteArray, jbyte);

/*
 * Class:     edu_wpi_first_hal_SPIJNI
 * Method:    spiWrite
 * Signature: (ILjava/nio/ByteBuffer;B)I
 */
JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_SPIJNI_spiWrite
  (JNIEnv *, jclass, jint, jobject, jbyte);

/*
 * Class:     edu_wpi_first_hal_SPIJNI
 * Method:    spiWriteB
 * Signature: (I[BB)I
 */
JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_SPIJNI_spiWriteB
  (JNIEnv *, jclass, jint, jbyteArray, jbyte);

/*
 * Class:     edu_wpi_first_hal_SPIJNI
 * Method:    spiRead
 * Signature: (IZLjava/nio/ByteBuffer;B)I
 */
JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_SPIJNI_spiRead
  (JNIEnv *, jclass, jint, jboolean, jobject, jbyte);

/*
 * Class:     edu_wpi_first_hal_SPIJNI
 * Method:    spiReadB
 * Signature: (IZ[BB)I
 */
JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_SPIJNI_spiReadB
  (JNIEnv *, jclass, jint, jboolean, jbyteArray, jbyte);

/*
 * Class:     edu_wpi_first_hal_SPIJNI
 * Method:    spiClose
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_hal_SPIJNI_spiClose
  (JNIEnv *, jclass, jint);

/*
 * Class:     edu_wpi_first_hal_SPIJNI
 * Method:    spiSetSpeed
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_hal_SPIJNI_spiSetSpeed
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     edu_wpi_first_hal_SPIJNI
 * Method:    spiSetOpts
 * Signature: (IIII)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_hal_SPIJNI_spiSetOpts
  (JNIEnv *, jclass, jint, jint, jint, jint);

/*
 * Class:     edu_wpi_first_hal_SPIJNI
 * Method:    spiSetChipSelectActiveHigh
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_hal_SPIJNI_spiSetChipSelectActiveHigh
  (JNIEnv *, jclass, jint);

/*
 * Class:     edu_wpi_first_hal_SPIJNI
 * Method:    spiSetChipSelectActiveLow
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_hal_SPIJNI_spiSetChipSelectActiveLow
  (JNIEnv *, jclass, jint);

/*
 * Class:     edu_wpi_first_hal_SPIJNI
 * Method:    spiInitAuto
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_hal_SPIJNI_spiInitAuto
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     edu_wpi_first_hal_SPIJNI
 * Method:    spiFreeAuto
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_hal_SPIJNI_spiFreeAuto
  (JNIEnv *, jclass, jint);

/*
 * Class:     edu_wpi_first_hal_SPIJNI
 * Method:    spiStartAutoRate
 * Signature: (ID)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_hal_SPIJNI_spiStartAutoRate
  (JNIEnv *, jclass, jint, jdouble);

/*
 * Class:     edu_wpi_first_hal_SPIJNI
 * Method:    spiStartAutoTrigger
 * Signature: (IIIZZ)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_hal_SPIJNI_spiStartAutoTrigger
  (JNIEnv *, jclass, jint, jint, jint, jboolean, jboolean);

/*
 * Class:     edu_wpi_first_hal_SPIJNI
 * Method:    spiStopAuto
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_hal_SPIJNI_spiStopAuto
  (JNIEnv *, jclass, jint);

/*
 * Class:     edu_wpi_first_hal_SPIJNI
 * Method:    spiSetAutoTransmitData
 * Signature: (I[BI)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_hal_SPIJNI_spiSetAutoTransmitData
  (JNIEnv *, jclass, jint, jbyteArray, jint);

/*
 * Class:     edu_wpi_first_hal_SPIJNI
 * Method:    spiForceAutoRead
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_edu_wpi_first_hal_SPIJNI_spiForceAutoRead
  (JNIEnv *, jclass, jint);

/*
 * Class:     edu_wpi_first_hal_SPIJNI
 * Method:    spiReadAutoReceivedData
 * Signature: (ILjava/nio/ByteBuffer;ID)I
 */
JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_SPIJNI_spiReadAutoReceivedData__ILjava_nio_ByteBuffer_2ID
  (JNIEnv *, jclass, jint, jobject, jint, jdouble);

/*
 * Class:     edu_wpi_first_hal_SPIJNI
 * Method:    spiReadAutoReceivedData
 * Signature: (I[BID)I
 */
JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_SPIJNI_spiReadAutoReceivedData__I_3BID
  (JNIEnv *, jclass, jint, jbyteArray, jint, jdouble);

/*
 * Class:     edu_wpi_first_hal_SPIJNI
 * Method:    spiGetAutoDroppedCount
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_edu_wpi_first_hal_SPIJNI_spiGetAutoDroppedCount
  (JNIEnv *, jclass, jint);

#ifdef __cplusplus
}
#endif
#endif
