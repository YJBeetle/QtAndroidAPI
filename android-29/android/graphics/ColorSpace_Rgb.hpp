#pragma once

#ifndef ANDROID_GRAPHICS_COLORSPACE_RGB
#define ANDROID_GRAPHICS_COLORSPACE_RGB

#include "ColorSpace.hpp"

namespace __jni_impl::android::graphics
{
	class ColorSpace_Rgb_TransferParameters;
}

namespace __jni_impl::android::graphics
{
	class ColorSpace_Rgb : public __jni_impl::android::graphics::ColorSpace
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jfloatArray arg1, jfloatArray arg2, jdouble arg3);
		void __constructor(jstring arg0, jfloatArray arg1, jdouble arg2);
		void __constructor(jstring arg0, jfloatArray arg1, jfloatArray arg2, __jni_impl::android::graphics::ColorSpace_Rgb_TransferParameters arg3);
		void __constructor(jstring arg0, jfloatArray arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::__JniBaseClass arg3);
		void __constructor(jstring arg0, jfloatArray arg1, jfloatArray arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::__JniBaseClass arg4, jfloat arg5, jfloat arg6);
		void __constructor(jstring arg0, jfloatArray arg1, __jni_impl::android::graphics::ColorSpace_Rgb_TransferParameters arg2);
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		QAndroidJniObject getWhitePoint();
		QAndroidJniObject getWhitePoint(jfloatArray arg0);
		QAndroidJniObject getPrimaries(jfloatArray arg0);
		QAndroidJniObject getPrimaries();
		QAndroidJniObject getInverseTransform();
		QAndroidJniObject getInverseTransform(jfloatArray arg0);
		QAndroidJniObject getOetf();
		QAndroidJniObject getEotf();
		QAndroidJniObject getTransferParameters();
		QAndroidJniObject toLinear(jfloat arg0, jfloat arg1, jfloat arg2);
		QAndroidJniObject toLinear(jfloatArray arg0);
		QAndroidJniObject fromLinear(jfloatArray arg0);
		QAndroidJniObject fromLinear(jfloat arg0, jfloat arg1, jfloat arg2);
		jboolean isWideGamut();
		jboolean isSrgb();
		jfloat getMinValue(jint arg0);
		jfloat getMaxValue(jint arg0);
		QAndroidJniObject toXyz(jfloatArray arg0);
		QAndroidJniObject fromXyz(jfloatArray arg0);
		QAndroidJniObject getTransform(jfloatArray arg0);
		QAndroidJniObject getTransform();
	};
} // namespace __jni_impl::android::graphics

#include "ColorSpace_Rgb_TransferParameters.hpp"

namespace __jni_impl::android::graphics
{
	// Fields
	
	// Constructors
	void ColorSpace_Rgb::__constructor(jstring arg0, jfloatArray arg1, jfloatArray arg2, jdouble arg3)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.ColorSpace$Rgb",
			"(Ljava/lang/String;[F[FD)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void ColorSpace_Rgb::__constructor(jstring arg0, jfloatArray arg1, jdouble arg2)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.ColorSpace$Rgb",
			"(Ljava/lang/String;[FD)V",
			arg0,
			arg1,
			arg2);
	}
	void ColorSpace_Rgb::__constructor(jstring arg0, jfloatArray arg1, jfloatArray arg2, __jni_impl::android::graphics::ColorSpace_Rgb_TransferParameters arg3)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.ColorSpace$Rgb",
			"(Ljava/lang/String;[F[FLandroid/graphics/ColorSpace$Rgb$TransferParameters;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object());
	}
	void ColorSpace_Rgb::__constructor(jstring arg0, jfloatArray arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::__JniBaseClass arg3)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.ColorSpace$Rgb",
			"(Ljava/lang/String;[FLjava/util/function/DoubleUnaryOperator;Ljava/util/function/DoubleUnaryOperator;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object());
	}
	void ColorSpace_Rgb::__constructor(jstring arg0, jfloatArray arg1, jfloatArray arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::__JniBaseClass arg4, jfloat arg5, jfloat arg6)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.ColorSpace$Rgb",
			"(Ljava/lang/String;[F[FLjava/util/function/DoubleUnaryOperator;Ljava/util/function/DoubleUnaryOperator;FF)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5,
			arg6);
	}
	void ColorSpace_Rgb::__constructor(jstring arg0, jfloatArray arg1, __jni_impl::android::graphics::ColorSpace_Rgb_TransferParameters arg2)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.ColorSpace$Rgb",
			"(Ljava/lang/String;[FLandroid/graphics/ColorSpace$Rgb$TransferParameters;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	
	// Methods
	jboolean ColorSpace_Rgb::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jint ColorSpace_Rgb::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject ColorSpace_Rgb::getWhitePoint()
	{
		return __thiz.callObjectMethod(
			"getWhitePoint",
			"()[F");
	}
	QAndroidJniObject ColorSpace_Rgb::getWhitePoint(jfloatArray arg0)
	{
		return __thiz.callObjectMethod(
			"getWhitePoint",
			"([F)[F",
			arg0);
	}
	QAndroidJniObject ColorSpace_Rgb::getPrimaries(jfloatArray arg0)
	{
		return __thiz.callObjectMethod(
			"getPrimaries",
			"([F)[F",
			arg0);
	}
	QAndroidJniObject ColorSpace_Rgb::getPrimaries()
	{
		return __thiz.callObjectMethod(
			"getPrimaries",
			"()[F");
	}
	QAndroidJniObject ColorSpace_Rgb::getInverseTransform()
	{
		return __thiz.callObjectMethod(
			"getInverseTransform",
			"()[F");
	}
	QAndroidJniObject ColorSpace_Rgb::getInverseTransform(jfloatArray arg0)
	{
		return __thiz.callObjectMethod(
			"getInverseTransform",
			"([F)[F",
			arg0);
	}
	QAndroidJniObject ColorSpace_Rgb::getOetf()
	{
		return __thiz.callObjectMethod(
			"getOetf",
			"()Ljava/util/function/DoubleUnaryOperator;");
	}
	QAndroidJniObject ColorSpace_Rgb::getEotf()
	{
		return __thiz.callObjectMethod(
			"getEotf",
			"()Ljava/util/function/DoubleUnaryOperator;");
	}
	QAndroidJniObject ColorSpace_Rgb::getTransferParameters()
	{
		return __thiz.callObjectMethod(
			"getTransferParameters",
			"()Landroid/graphics/ColorSpace$Rgb$TransferParameters;");
	}
	QAndroidJniObject ColorSpace_Rgb::toLinear(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		return __thiz.callObjectMethod(
			"toLinear",
			"(FFF)[F",
			arg0,
			arg1,
			arg2);
	}
	QAndroidJniObject ColorSpace_Rgb::toLinear(jfloatArray arg0)
	{
		return __thiz.callObjectMethod(
			"toLinear",
			"([F)[F",
			arg0);
	}
	QAndroidJniObject ColorSpace_Rgb::fromLinear(jfloatArray arg0)
	{
		return __thiz.callObjectMethod(
			"fromLinear",
			"([F)[F",
			arg0);
	}
	QAndroidJniObject ColorSpace_Rgb::fromLinear(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		return __thiz.callObjectMethod(
			"fromLinear",
			"(FFF)[F",
			arg0,
			arg1,
			arg2);
	}
	jboolean ColorSpace_Rgb::isWideGamut()
	{
		return __thiz.callMethod<jboolean>(
			"isWideGamut",
			"()Z");
	}
	jboolean ColorSpace_Rgb::isSrgb()
	{
		return __thiz.callMethod<jboolean>(
			"isSrgb",
			"()Z");
	}
	jfloat ColorSpace_Rgb::getMinValue(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getMinValue",
			"(I)F",
			arg0);
	}
	jfloat ColorSpace_Rgb::getMaxValue(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getMaxValue",
			"(I)F",
			arg0);
	}
	QAndroidJniObject ColorSpace_Rgb::toXyz(jfloatArray arg0)
	{
		return __thiz.callObjectMethod(
			"toXyz",
			"([F)[F",
			arg0);
	}
	QAndroidJniObject ColorSpace_Rgb::fromXyz(jfloatArray arg0)
	{
		return __thiz.callObjectMethod(
			"fromXyz",
			"([F)[F",
			arg0);
	}
	QAndroidJniObject ColorSpace_Rgb::getTransform(jfloatArray arg0)
	{
		return __thiz.callObjectMethod(
			"getTransform",
			"([F)[F",
			arg0);
	}
	QAndroidJniObject ColorSpace_Rgb::getTransform()
	{
		return __thiz.callObjectMethod(
			"getTransform",
			"()[F");
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class ColorSpace_Rgb : public __jni_impl::android::graphics::ColorSpace_Rgb
	{
	public:
		ColorSpace_Rgb(QAndroidJniObject obj) { __thiz = obj; }
		ColorSpace_Rgb(jstring arg0, jfloatArray arg1, jfloatArray arg2, jdouble arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		ColorSpace_Rgb(jstring arg0, jfloatArray arg1, jdouble arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		ColorSpace_Rgb(jstring arg0, jfloatArray arg1, jfloatArray arg2, __jni_impl::android::graphics::ColorSpace_Rgb_TransferParameters arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		ColorSpace_Rgb(jstring arg0, jfloatArray arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::__JniBaseClass arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		ColorSpace_Rgb(jstring arg0, jfloatArray arg1, jfloatArray arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::__JniBaseClass arg4, jfloat arg5, jfloat arg6)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5,
				arg6);
		}
		ColorSpace_Rgb(jstring arg0, jfloatArray arg1, __jni_impl::android::graphics::ColorSpace_Rgb_TransferParameters arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_COLORSPACE_RGB

