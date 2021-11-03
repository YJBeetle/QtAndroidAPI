#include "./MultiResolutionStreamInfo.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	
	// QJniObject forward
	MultiResolutionStreamInfo::MultiResolutionStreamInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	MultiResolutionStreamInfo::MultiResolutionStreamInfo(jint arg0, jint arg1, jstring arg2)
		: JObject(
			"android.hardware.camera2.params.MultiResolutionStreamInfo",
			"(IILjava/lang/String;)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	jboolean MultiResolutionStreamInfo::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint MultiResolutionStreamInfo::getHeight()
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jstring MultiResolutionStreamInfo::getPhysicalCameraId()
	{
		return callObjectMethod(
			"getPhysicalCameraId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint MultiResolutionStreamInfo::getWidth()
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jint MultiResolutionStreamInfo::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::hardware::camera2::params

