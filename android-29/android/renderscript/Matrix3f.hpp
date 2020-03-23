#pragma once

#ifndef ANDROID_RENDERSCRIPT_MATRIX3F
#define ANDROID_RENDERSCRIPT_MATRIX3F

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::renderscript
{
	class Matrix3f : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jfloatArray arg0);
		
		// Methods
		jfloat get(jint arg0, jint arg1);
		void set(jint arg0, jint arg1, jfloat arg2);
		void load(__jni_impl::android::renderscript::Matrix3f arg0);
		void multiply(__jni_impl::android::renderscript::Matrix3f arg0);
		void scale(jfloat arg0, jfloat arg1);
		void scale(jfloat arg0, jfloat arg1, jfloat arg2);
		QAndroidJniObject getArray();
		void rotate(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		void rotate(jfloat arg0);
		void loadTranslate(jfloat arg0, jfloat arg1);
		void loadMultiply(__jni_impl::android::renderscript::Matrix3f arg0, __jni_impl::android::renderscript::Matrix3f arg1);
		void translate(jfloat arg0, jfloat arg1);
		void transpose();
		void loadIdentity();
		void loadRotate(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		void loadRotate(jfloat arg0);
		void loadScale(jfloat arg0, jfloat arg1);
		void loadScale(jfloat arg0, jfloat arg1, jfloat arg2);
	};
} // namespace __jni_impl::android::renderscript


namespace __jni_impl::android::renderscript
{
	// Fields
	
	// Constructors
	void Matrix3f::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Matrix3f",
			"()V");
	}
	void Matrix3f::__constructor(jfloatArray arg0)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Matrix3f",
			"([F)V",
			arg0);
	}
	
	// Methods
	jfloat Matrix3f::get(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jfloat>(
			"get",
			"(II)F",
			arg0,
			arg1);
	}
	void Matrix3f::set(jint arg0, jint arg1, jfloat arg2)
	{
		__thiz.callMethod<void>(
			"set",
			"(IIF)V",
			arg0,
			arg1,
			arg2);
	}
	void Matrix3f::load(__jni_impl::android::renderscript::Matrix3f arg0)
	{
		__thiz.callMethod<void>(
			"load",
			"(Landroid/renderscript/Matrix3f;)V",
			arg0.__jniObject().object());
	}
	void Matrix3f::multiply(__jni_impl::android::renderscript::Matrix3f arg0)
	{
		__thiz.callMethod<void>(
			"multiply",
			"(Landroid/renderscript/Matrix3f;)V",
			arg0.__jniObject().object());
	}
	void Matrix3f::scale(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"scale",
			"(FF)V",
			arg0,
			arg1);
	}
	void Matrix3f::scale(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		__thiz.callMethod<void>(
			"scale",
			"(FFF)V",
			arg0,
			arg1,
			arg2);
	}
	QAndroidJniObject Matrix3f::getArray()
	{
		return __thiz.callObjectMethod(
			"getArray",
			"()[F");
	}
	void Matrix3f::rotate(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		__thiz.callMethod<void>(
			"rotate",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void Matrix3f::rotate(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"rotate",
			"(F)V",
			arg0);
	}
	void Matrix3f::loadTranslate(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"loadTranslate",
			"(FF)V",
			arg0,
			arg1);
	}
	void Matrix3f::loadMultiply(__jni_impl::android::renderscript::Matrix3f arg0, __jni_impl::android::renderscript::Matrix3f arg1)
	{
		__thiz.callMethod<void>(
			"loadMultiply",
			"(Landroid/renderscript/Matrix3f;Landroid/renderscript/Matrix3f;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void Matrix3f::translate(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"translate",
			"(FF)V",
			arg0,
			arg1);
	}
	void Matrix3f::transpose()
	{
		__thiz.callMethod<void>(
			"transpose",
			"()V");
	}
	void Matrix3f::loadIdentity()
	{
		__thiz.callMethod<void>(
			"loadIdentity",
			"()V");
	}
	void Matrix3f::loadRotate(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		__thiz.callMethod<void>(
			"loadRotate",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void Matrix3f::loadRotate(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"loadRotate",
			"(F)V",
			arg0);
	}
	void Matrix3f::loadScale(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"loadScale",
			"(FF)V",
			arg0,
			arg1);
	}
	void Matrix3f::loadScale(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		__thiz.callMethod<void>(
			"loadScale",
			"(FFF)V",
			arg0,
			arg1,
			arg2);
	}
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class Matrix3f : public __jni_impl::android::renderscript::Matrix3f
	{
	public:
		Matrix3f(QAndroidJniObject obj) { __thiz = obj; }
		Matrix3f()
		{
			__constructor();
		}
		Matrix3f(jfloatArray arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::renderscript

#endif // ANDROID_RENDERSCRIPT_MATRIX3F

