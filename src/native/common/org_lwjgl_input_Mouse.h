/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_lwjgl_input_Mouse */

#ifndef _Included_org_lwjgl_input_Mouse
#define _Included_org_lwjgl_input_Mouse
#ifdef __cplusplus
extern "C" {
#endif
/* Inaccessible static: _00024assertionsDisabled */
#undef org_lwjgl_input_Mouse_CURSOR_ONE_BIT_TRANSPARENCY
#define org_lwjgl_input_Mouse_CURSOR_ONE_BIT_TRANSPARENCY 1L
#undef org_lwjgl_input_Mouse_CURSOR_8_BIT_ALPHA
#define org_lwjgl_input_Mouse_CURSOR_8_BIT_ALPHA 2L
#undef org_lwjgl_input_Mouse_CURSOR_ANIMATION
#define org_lwjgl_input_Mouse_CURSOR_ANIMATION 4L
/* Inaccessible static: created */
/* Inaccessible static: buttons */
/* Inaccessible static: dx */
/* Inaccessible static: dy */
/* Inaccessible static: dwheel */
/* Inaccessible static: buttonCount */
/* Inaccessible static: hasWheel */
/* Inaccessible static: currentCursor */
/* Inaccessible static: buttonName */
/* Inaccessible static: buttonMap */
/* Inaccessible static: initialized */
/* Inaccessible static: class_00024org_00024lwjgl_00024input_00024Mouse */
/*
 * Class:     org_lwjgl_input_Mouse
 * Method:    nGetNativeCursorCaps
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_lwjgl_input_Mouse_nGetNativeCursorCaps
  (JNIEnv *, jclass);

/*
 * Class:     org_lwjgl_input_Mouse
 * Method:    nSetNativeCursor
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_input_Mouse_nSetNativeCursor
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_lwjgl_input_Mouse
 * Method:    nGetMinCursorSize
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_lwjgl_input_Mouse_nGetMinCursorSize
  (JNIEnv *, jclass);

/*
 * Class:     org_lwjgl_input_Mouse
 * Method:    nGetMaxCursorSize
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_lwjgl_input_Mouse_nGetMaxCursorSize
  (JNIEnv *, jclass);

/*
 * Class:     org_lwjgl_input_Mouse
 * Method:    initIDs
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_input_Mouse_initIDs
  (JNIEnv *, jclass);

/*
 * Class:     org_lwjgl_input_Mouse
 * Method:    nHasWheel
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_lwjgl_input_Mouse_nHasWheel
  (JNIEnv *, jclass);

/*
 * Class:     org_lwjgl_input_Mouse
 * Method:    nGetButtonCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_lwjgl_input_Mouse_nGetButtonCount
  (JNIEnv *, jclass);

/*
 * Class:     org_lwjgl_input_Mouse
 * Method:    nCreate
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_input_Mouse_nCreate
  (JNIEnv *, jclass);

/*
 * Class:     org_lwjgl_input_Mouse
 * Method:    nDestroy
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_input_Mouse_nDestroy
  (JNIEnv *, jclass);

/*
 * Class:     org_lwjgl_input_Mouse
 * Method:    nPoll
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_input_Mouse_nPoll
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
