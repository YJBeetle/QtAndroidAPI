#pragma once

#ifndef ANDROID_HARDWARE_CAMERA2_PARAMS_INPUTCONFIGURATION
#define ANDROID_HARDWARE_CAMERA2_PARAMS_INPUTCONFIGURATION

#include "../../../../__JniBaseClass.hpp"


namespace __jni_impl::android::hardware::camera2::params
{
	class InputConfiguration : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0, jint arg1, jint arg2);
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		jint getFormat();
		jint getWidth();
		jint getHeight();
	};
} // namespace __jni_impl::android::hardware::camera2::params


namespace __jni_impl::android::hardware::camera2::params
{
	// Fields
	
	// Constructors
	void InputConfiguration::__constructor(jint arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.params.InputConfiguration",
			"(III)V",
			arg0,
			arg1,
			arg2);
	}
	
	// Methods
	jboolean InputConfiguration::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject InputConfiguration::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint InputConfiguration::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jint InputConfiguration::getFormat()
	{
		return __thiz.callMethod<jint>(
			"getFormat",
			"()I");
	}
	jint InputConfiguration::getWidth()
	{
		return __thiz.callMethod<jint>(
			"getWidth",
			"()I");
	}
	jint InputConfiguration::getHeight()
	{
		return __thiz.callMethod<jint>(
			"getHeight",
			"()I");
	}
} // namespace __jni_impl::android::hardware::camera2::params

namespace android::hardware::camera2::params
{
	class InputConfiguration : public __jni_impl::android::hardware::camera2::params::InputConfiguration
	{
	public:
		InputConfiguration(QAndroidJniObject obj) { __thiz = obj; }
		InputConfiguration(jint arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::hardware::camera2::params

#endif // ANDROID_HARDWARE_CAMERA2_PARAMS_INPUTCONFIGURATION

