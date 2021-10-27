#pragma once

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
		jint getFormat();
		jint getHeight();
		jint getWidth();
		jint hashCode();
		jstring toString();
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
			arg2
		);
	}
	
	// Methods
	jboolean InputConfiguration::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint InputConfiguration::getFormat()
	{
		return __thiz.callMethod<jint>(
			"getFormat",
			"()I"
		);
	}
	jint InputConfiguration::getHeight()
	{
		return __thiz.callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jint InputConfiguration::getWidth()
	{
		return __thiz.callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jint InputConfiguration::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring InputConfiguration::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

