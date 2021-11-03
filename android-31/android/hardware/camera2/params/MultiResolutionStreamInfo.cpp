#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./MultiResolutionStreamInfo.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	
	// QJniObject forward
	MultiResolutionStreamInfo::MultiResolutionStreamInfo(QJniObject obj) : JObject(obj) {}
	
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
	jboolean MultiResolutionStreamInfo::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint MultiResolutionStreamInfo::getHeight()
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	JString MultiResolutionStreamInfo::getPhysicalCameraId()
	{
		return callObjectMethod(
			"getPhysicalCameraId",
			"()Ljava/lang/String;"
		);
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

