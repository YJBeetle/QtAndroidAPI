#pragma once

#ifndef ANDROID_OPENGL_MATRIX
#define ANDROID_OPENGL_MATRIX

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::opengl
{
	class Matrix : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static void frustumM(jfloatArray arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, jfloat arg6, jfloat arg7);
		static jboolean invertM(jfloatArray arg0, jint arg1, jfloatArray arg2, jint arg3);
		static jfloat length(jfloat arg0, jfloat arg1, jfloat arg2);
		static void multiplyMM(jfloatArray arg0, jint arg1, jfloatArray arg2, jint arg3, jfloatArray arg4, jint arg5);
		static void multiplyMV(jfloatArray arg0, jint arg1, jfloatArray arg2, jint arg3, jfloatArray arg4, jint arg5);
		static void orthoM(jfloatArray arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, jfloat arg6, jfloat arg7);
		static void perspectiveM(jfloatArray arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5);
		static void rotateM(jfloatArray arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5);
		static void rotateM(jfloatArray arg0, jint arg1, jfloatArray arg2, jint arg3, jfloat arg4, jfloat arg5, jfloat arg6, jfloat arg7);
		static void scaleM(jfloatArray arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4);
		static void scaleM(jfloatArray arg0, jint arg1, jfloatArray arg2, jint arg3, jfloat arg4, jfloat arg5, jfloat arg6);
		static void setIdentityM(jfloatArray arg0, jint arg1);
		static void setLookAtM(jfloatArray arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, jfloat arg6, jfloat arg7, jfloat arg8, jfloat arg9, jfloat arg10);
		static void setRotateEulerM(jfloatArray arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4);
		static void setRotateM(jfloatArray arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5);
		static void translateM(jfloatArray arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4);
		static void translateM(jfloatArray arg0, jint arg1, jfloatArray arg2, jint arg3, jfloat arg4, jfloat arg5, jfloat arg6);
		static void transposeM(jfloatArray arg0, jint arg1, jfloatArray arg2, jint arg3);
	};
} // namespace __jni_impl::android::opengl


namespace __jni_impl::android::opengl
{
	// Fields
	
	// Constructors
	void Matrix::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.opengl.Matrix",
			"()V"
		);
	}
	
	// Methods
	void Matrix::frustumM(jfloatArray arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, jfloat arg6, jfloat arg7)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.Matrix",
			"frustumM",
			"([FIFFFFFF)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7
		);
	}
	jboolean Matrix::invertM(jfloatArray arg0, jint arg1, jfloatArray arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.opengl.Matrix",
			"invertM",
			"([FI[FI)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jfloat Matrix::length(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		return QAndroidJniObject::callStaticMethod<jfloat>(
			"android.opengl.Matrix",
			"length",
			"(FFF)F",
			arg0,
			arg1,
			arg2
		);
	}
	void Matrix::multiplyMM(jfloatArray arg0, jint arg1, jfloatArray arg2, jint arg3, jfloatArray arg4, jint arg5)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.Matrix",
			"multiplyMM",
			"([FI[FI[FI)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void Matrix::multiplyMV(jfloatArray arg0, jint arg1, jfloatArray arg2, jint arg3, jfloatArray arg4, jint arg5)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.Matrix",
			"multiplyMV",
			"([FI[FI[FI)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void Matrix::orthoM(jfloatArray arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, jfloat arg6, jfloat arg7)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.Matrix",
			"orthoM",
			"([FIFFFFFF)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7
		);
	}
	void Matrix::perspectiveM(jfloatArray arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.Matrix",
			"perspectiveM",
			"([FIFFFF)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void Matrix::rotateM(jfloatArray arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.Matrix",
			"rotateM",
			"([FIFFFF)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void Matrix::rotateM(jfloatArray arg0, jint arg1, jfloatArray arg2, jint arg3, jfloat arg4, jfloat arg5, jfloat arg6, jfloat arg7)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.Matrix",
			"rotateM",
			"([FI[FIFFFF)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7
		);
	}
	void Matrix::scaleM(jfloatArray arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.Matrix",
			"scaleM",
			"([FIFFF)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void Matrix::scaleM(jfloatArray arg0, jint arg1, jfloatArray arg2, jint arg3, jfloat arg4, jfloat arg5, jfloat arg6)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.Matrix",
			"scaleM",
			"([FI[FIFFF)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	void Matrix::setIdentityM(jfloatArray arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.Matrix",
			"setIdentityM",
			"([FI)V",
			arg0,
			arg1
		);
	}
	void Matrix::setLookAtM(jfloatArray arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, jfloat arg6, jfloat arg7, jfloat arg8, jfloat arg9, jfloat arg10)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.Matrix",
			"setLookAtM",
			"([FIFFFFFFFFF)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8,
			arg9,
			arg10
		);
	}
	void Matrix::setRotateEulerM(jfloatArray arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.Matrix",
			"setRotateEulerM",
			"([FIFFF)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void Matrix::setRotateM(jfloatArray arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.Matrix",
			"setRotateM",
			"([FIFFFF)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void Matrix::translateM(jfloatArray arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.Matrix",
			"translateM",
			"([FIFFF)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void Matrix::translateM(jfloatArray arg0, jint arg1, jfloatArray arg2, jint arg3, jfloat arg4, jfloat arg5, jfloat arg6)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.Matrix",
			"translateM",
			"([FI[FIFFF)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	void Matrix::transposeM(jfloatArray arg0, jint arg1, jfloatArray arg2, jint arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.opengl.Matrix",
			"transposeM",
			"([FI[FI)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
} // namespace __jni_impl::android::opengl

namespace android::opengl
{
	class Matrix : public __jni_impl::android::opengl::Matrix
	{
	public:
		Matrix(QAndroidJniObject obj) { __thiz = obj; }
		Matrix()
		{
			__constructor();
		}
	};
} // namespace android::opengl

#endif // ANDROID_OPENGL_MATRIX

