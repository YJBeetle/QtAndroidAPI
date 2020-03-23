#pragma once

#ifndef ANDROID_HARDWARE_CAMERA2_PARAMS_TONEMAPCURVE
#define ANDROID_HARDWARE_CAMERA2_PARAMS_TONEMAPCURVE

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class PointF;
}

namespace __jni_impl::android::hardware::camera2::params
{
	class TonemapCurve : public __JniBaseClass
	{
	public:
		// Fields
		static jint CHANNEL_BLUE();
		static jint CHANNEL_GREEN();
		static jint CHANNEL_RED();
		static jfloat LEVEL_BLACK();
		static jfloat LEVEL_WHITE();
		static jint POINT_SIZE();
		
		// Constructors
		void __constructor(jfloatArray arg0, jfloatArray arg1, jfloatArray arg2);
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		jint getPointCount(jint arg0);
		QAndroidJniObject getPoint(jint arg0, jint arg1);
		void copyColorCurve(jint arg0, jfloatArray arg1, jint arg2);
	};
} // namespace __jni_impl::android::hardware::camera2::params

#include "../../../graphics/PointF.hpp"

namespace __jni_impl::android::hardware::camera2::params
{
	// Fields
	jint TonemapCurve::CHANNEL_BLUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.params.TonemapCurve",
			"CHANNEL_BLUE");
	}
	jint TonemapCurve::CHANNEL_GREEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.params.TonemapCurve",
			"CHANNEL_GREEN");
	}
	jint TonemapCurve::CHANNEL_RED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.params.TonemapCurve",
			"CHANNEL_RED");
	}
	jfloat TonemapCurve::LEVEL_BLACK()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"android.hardware.camera2.params.TonemapCurve",
			"LEVEL_BLACK");
	}
	jfloat TonemapCurve::LEVEL_WHITE()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"android.hardware.camera2.params.TonemapCurve",
			"LEVEL_WHITE");
	}
	jint TonemapCurve::POINT_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.params.TonemapCurve",
			"POINT_SIZE");
	}
	
	// Constructors
	void TonemapCurve::__constructor(jfloatArray arg0, jfloatArray arg1, jfloatArray arg2)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.params.TonemapCurve",
			"([F[F[F)V",
			arg0,
			arg1,
			arg2);
	}
	
	// Methods
	jboolean TonemapCurve::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject TonemapCurve::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint TonemapCurve::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jint TonemapCurve::getPointCount(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getPointCount",
			"(I)I",
			arg0);
	}
	QAndroidJniObject TonemapCurve::getPoint(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getPoint",
			"(II)Landroid/graphics/PointF;",
			arg0,
			arg1);
	}
	void TonemapCurve::copyColorCurve(jint arg0, jfloatArray arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"copyColorCurve",
			"(I[FI)V",
			arg0,
			arg1,
			arg2);
	}
} // namespace __jni_impl::android::hardware::camera2::params

namespace android::hardware::camera2::params
{
	class TonemapCurve : public __jni_impl::android::hardware::camera2::params::TonemapCurve
	{
	public:
		TonemapCurve(QAndroidJniObject obj) { __thiz = obj; }
		TonemapCurve(jfloatArray arg0, jfloatArray arg1, jfloatArray arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::hardware::camera2::params

#endif // ANDROID_HARDWARE_CAMERA2_PARAMS_TONEMAPCURVE

