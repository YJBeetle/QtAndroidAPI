#include "./InputConfiguration.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	
	InputConfiguration::InputConfiguration(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	InputConfiguration::InputConfiguration(jint &arg0, jint &arg1, jint &arg2)
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
} // namespace android::hardware::camera2::params

