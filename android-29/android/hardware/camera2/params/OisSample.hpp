#pragma once

#ifndef ANDROID_HARDWARE_CAMERA2_PARAMS_OISSAMPLE
#define ANDROID_HARDWARE_CAMERA2_PARAMS_OISSAMPLE

#include "../../../../__JniBaseClass.hpp"


namespace __jni_impl::android::hardware::camera2::params
{
	class OisSample : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jlong arg0, jfloat arg1, jfloat arg2);
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		jfloat getXshift();
		jfloat getYshift();
		jlong getTimestamp();
	};
} // namespace __jni_impl::android::hardware::camera2::params


namespace __jni_impl::android::hardware::camera2::params
{
	// Fields
	
	// Constructors
	void OisSample::__constructor(jlong arg0, jfloat arg1, jfloat arg2)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.params.OisSample",
			"(JFF)V",
			arg0,
			arg1,
			arg2);
	}
	
	// Methods
	jboolean OisSample::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject OisSample::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint OisSample::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jfloat OisSample::getXshift()
	{
		return __thiz.callMethod<jfloat>(
			"getXshift",
			"()F");
	}
	jfloat OisSample::getYshift()
	{
		return __thiz.callMethod<jfloat>(
			"getYshift",
			"()F");
	}
	jlong OisSample::getTimestamp()
	{
		return __thiz.callMethod<jlong>(
			"getTimestamp",
			"()J");
	}
} // namespace __jni_impl::android::hardware::camera2::params

namespace android::hardware::camera2::params
{
	class OisSample : public __jni_impl::android::hardware::camera2::params::OisSample
	{
	public:
		OisSample(QAndroidJniObject obj) { __thiz = obj; }
		OisSample(jlong arg0, jfloat arg1, jfloat arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::hardware::camera2::params

#endif // ANDROID_HARDWARE_CAMERA2_PARAMS_OISSAMPLE

