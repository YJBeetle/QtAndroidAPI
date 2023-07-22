#pragma once

#include "./VideoProfile.def.hpp"
#include "./VideoProfile_CameraCapabilities.def.hpp"
#include "./InCallService_VideoCall_Callback.def.hpp"

namespace android::telecom
{
	// Fields
	
	// Constructors
	inline InCallService_VideoCall_Callback::InCallService_VideoCall_Callback()
		: JObject(
			"android.telecom.InCallService$VideoCall$Callback",
			"()V"
		) {}
	
	// Methods
	inline void InCallService_VideoCall_Callback::onCallDataUsageChanged(jlong arg0) const
	{
		callMethod<void>(
			"onCallDataUsageChanged",
			"(J)V",
			arg0
		);
	}
	inline void InCallService_VideoCall_Callback::onCallSessionEvent(jint arg0) const
	{
		callMethod<void>(
			"onCallSessionEvent",
			"(I)V",
			arg0
		);
	}
	inline void InCallService_VideoCall_Callback::onCameraCapabilitiesChanged(android::telecom::VideoProfile_CameraCapabilities arg0) const
	{
		callMethod<void>(
			"onCameraCapabilitiesChanged",
			"(Landroid/telecom/VideoProfile$CameraCapabilities;)V",
			arg0.object()
		);
	}
	inline void InCallService_VideoCall_Callback::onPeerDimensionsChanged(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"onPeerDimensionsChanged",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void InCallService_VideoCall_Callback::onSessionModifyRequestReceived(android::telecom::VideoProfile arg0) const
	{
		callMethod<void>(
			"onSessionModifyRequestReceived",
			"(Landroid/telecom/VideoProfile;)V",
			arg0.object()
		);
	}
	inline void InCallService_VideoCall_Callback::onSessionModifyResponseReceived(jint arg0, android::telecom::VideoProfile arg1, android::telecom::VideoProfile arg2) const
	{
		callMethod<void>(
			"onSessionModifyResponseReceived",
			"(ILandroid/telecom/VideoProfile;Landroid/telecom/VideoProfile;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	inline void InCallService_VideoCall_Callback::onVideoQualityChanged(jint arg0) const
	{
		callMethod<void>(
			"onVideoQualityChanged",
			"(I)V",
			arg0
		);
	}
} // namespace android::telecom

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telecom;
#endif
