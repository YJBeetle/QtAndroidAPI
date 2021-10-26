#pragma once

#ifndef ANDROID_GRAPHICS_COLORMATRIX
#define ANDROID_GRAPHICS_COLORMATRIX

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::graphics
{
	class ColorMatrix : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::graphics::ColorMatrix arg0);
		void __constructor(jfloatArray arg0);
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		void set(jfloatArray arg0);
		void set(__jni_impl::android::graphics::ColorMatrix arg0);
		void reset();
		jfloatArray getArray();
		void setScale(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		void setRotate(jint arg0, jfloat arg1);
		void setConcat(__jni_impl::android::graphics::ColorMatrix arg0, __jni_impl::android::graphics::ColorMatrix arg1);
		void preConcat(__jni_impl::android::graphics::ColorMatrix arg0);
		void postConcat(__jni_impl::android::graphics::ColorMatrix arg0);
		void setRGB2YUV();
		void setYUV2RGB();
		void setSaturation(jfloat arg0);
	};
} // namespace __jni_impl::android::graphics


namespace __jni_impl::android::graphics
{
	// Fields
	
	// Constructors
	void ColorMatrix::__constructor(__jni_impl::android::graphics::ColorMatrix arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.ColorMatrix",
			"(Landroid/graphics/ColorMatrix;)V",
			arg0.__jniObject().object()
		);
	}
	void ColorMatrix::__constructor(jfloatArray arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.ColorMatrix",
			"([F)V",
			arg0
		);
	}
	void ColorMatrix::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.ColorMatrix",
			"()V"
		);
	}
	
	// Methods
	jboolean ColorMatrix::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	void ColorMatrix::set(jfloatArray arg0)
	{
		__thiz.callMethod<void>(
			"set",
			"([F)V",
			arg0
		);
	}
	void ColorMatrix::set(__jni_impl::android::graphics::ColorMatrix arg0)
	{
		__thiz.callMethod<void>(
			"set",
			"(Landroid/graphics/ColorMatrix;)V",
			arg0.__jniObject().object()
		);
	}
	void ColorMatrix::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	jfloatArray ColorMatrix::getArray()
	{
		return __thiz.callObjectMethod(
			"getArray",
			"()[F"
		).object<jfloatArray>();
	}
	void ColorMatrix::setScale(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		__thiz.callMethod<void>(
			"setScale",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void ColorMatrix::setRotate(jint arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"setRotate",
			"(IF)V",
			arg0,
			arg1
		);
	}
	void ColorMatrix::setConcat(__jni_impl::android::graphics::ColorMatrix arg0, __jni_impl::android::graphics::ColorMatrix arg1)
	{
		__thiz.callMethod<void>(
			"setConcat",
			"(Landroid/graphics/ColorMatrix;Landroid/graphics/ColorMatrix;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ColorMatrix::preConcat(__jni_impl::android::graphics::ColorMatrix arg0)
	{
		__thiz.callMethod<void>(
			"preConcat",
			"(Landroid/graphics/ColorMatrix;)V",
			arg0.__jniObject().object()
		);
	}
	void ColorMatrix::postConcat(__jni_impl::android::graphics::ColorMatrix arg0)
	{
		__thiz.callMethod<void>(
			"postConcat",
			"(Landroid/graphics/ColorMatrix;)V",
			arg0.__jniObject().object()
		);
	}
	void ColorMatrix::setRGB2YUV()
	{
		__thiz.callMethod<void>(
			"setRGB2YUV",
			"()V"
		);
	}
	void ColorMatrix::setYUV2RGB()
	{
		__thiz.callMethod<void>(
			"setYUV2RGB",
			"()V"
		);
	}
	void ColorMatrix::setSaturation(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setSaturation",
			"(F)V",
			arg0
		);
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class ColorMatrix : public __jni_impl::android::graphics::ColorMatrix
	{
	public:
		ColorMatrix(QAndroidJniObject obj) { __thiz = obj; }
		ColorMatrix(__jni_impl::android::graphics::ColorMatrix arg0)
		{
			__constructor(
				arg0);
		}
		ColorMatrix(jfloatArray arg0)
		{
			__constructor(
				arg0);
		}
		ColorMatrix()
		{
			__constructor();
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_COLORMATRIX

