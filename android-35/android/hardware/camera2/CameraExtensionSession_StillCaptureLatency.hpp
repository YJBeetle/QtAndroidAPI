#pragma once

#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./CameraExtensionSession_StillCaptureLatency.def.hpp"

namespace android::hardware::camera2
{
	// Fields
	
	// Constructors
	inline CameraExtensionSession_StillCaptureLatency::CameraExtensionSession_StillCaptureLatency(jlong arg0, jlong arg1)
		: JObject(
			"android.hardware.camera2.CameraExtensionSession$StillCaptureLatency",
			"(JJ)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline jboolean CameraExtensionSession_StillCaptureLatency::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jlong CameraExtensionSession_StillCaptureLatency::getCaptureLatency() const
	{
		return callMethod<jlong>(
			"getCaptureLatency",
			"()J"
		);
	}
	inline jlong CameraExtensionSession_StillCaptureLatency::getProcessingLatency() const
	{
		return callMethod<jlong>(
			"getProcessingLatency",
			"()J"
		);
	}
	inline jint CameraExtensionSession_StillCaptureLatency::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString CameraExtensionSession_StillCaptureLatency::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::hardware::camera2

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware::camera2;
#endif
