#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./MultiResolutionStreamInfo.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	
	// Constructors
	MultiResolutionStreamInfo::MultiResolutionStreamInfo(jint arg0, jint arg1, JString arg2)
		: JObject(
			"android.hardware.camera2.params.MultiResolutionStreamInfo",
			"(IILjava/lang/String;)V",
			arg0,
			arg1,
			arg2.object<jstring>()
		) {}
	
	// Methods
	jboolean MultiResolutionStreamInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint MultiResolutionStreamInfo::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	JString MultiResolutionStreamInfo::getPhysicalCameraId() const
	{
		return callObjectMethod(
			"getPhysicalCameraId",
			"()Ljava/lang/String;"
		);
	}
	jint MultiResolutionStreamInfo::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jint MultiResolutionStreamInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::hardware::camera2::params

