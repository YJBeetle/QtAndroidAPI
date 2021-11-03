#include "./OisSample.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	
	// QJniObject forward
	OisSample::OisSample(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	OisSample::OisSample(jlong arg0, jfloat arg1, jfloat arg2)
		: JObject(
			"android.hardware.camera2.params.OisSample",
			"(JFF)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	jboolean OisSample::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jlong OisSample::getTimestamp()
	{
		return callMethod<jlong>(
			"getTimestamp",
			"()J"
		);
	}
	jfloat OisSample::getXshift()
	{
		return callMethod<jfloat>(
			"getXshift",
			"()F"
		);
	}
	jfloat OisSample::getYshift()
	{
		return callMethod<jfloat>(
			"getYshift",
			"()F"
		);
	}
	jint OisSample::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring OisSample::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::hardware::camera2::params

