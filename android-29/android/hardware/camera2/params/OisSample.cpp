#include "./OisSample.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	
	OisSample::OisSample(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	OisSample::OisSample(jlong &arg0, jfloat &arg1, jfloat &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.params.OisSample",
			"(JFF)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
	jboolean OisSample::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jlong OisSample::getTimestamp()
	{
		return __thiz.callMethod<jlong>(
			"getTimestamp",
			"()J"
		);
	}
	jfloat OisSample::getXshift()
	{
		return __thiz.callMethod<jfloat>(
			"getXshift",
			"()F"
		);
	}
	jfloat OisSample::getYshift()
	{
		return __thiz.callMethod<jfloat>(
			"getYshift",
			"()F"
		);
	}
	jint OisSample::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring OisSample::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::hardware::camera2::params

