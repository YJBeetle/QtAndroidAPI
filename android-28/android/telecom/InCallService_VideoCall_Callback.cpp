#include "./VideoProfile.hpp"
#include "./VideoProfile_CameraCapabilities.hpp"
#include "./InCallService_VideoCall_Callback.hpp"

namespace android::telecom
{
	// Fields
	
	// QJniObject forward
	InCallService_VideoCall_Callback::InCallService_VideoCall_Callback(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	InCallService_VideoCall_Callback::InCallService_VideoCall_Callback()
		: __JniBaseClass(
			"android.telecom.InCallService$VideoCall$Callback",
			"()V"
		) {}
	
	// Methods
	void InCallService_VideoCall_Callback::onCallDataUsageChanged(jlong arg0)
	{
		callMethod<void>(
			"onCallDataUsageChanged",
			"(J)V",
			arg0
		);
	}
	void InCallService_VideoCall_Callback::onCallSessionEvent(jint arg0)
	{
		callMethod<void>(
			"onCallSessionEvent",
			"(I)V",
			arg0
		);
	}
	void InCallService_VideoCall_Callback::onCameraCapabilitiesChanged(android::telecom::VideoProfile_CameraCapabilities arg0)
	{
		callMethod<void>(
			"onCameraCapabilitiesChanged",
			"(Landroid/telecom/VideoProfile$CameraCapabilities;)V",
			arg0.object()
		);
	}
	void InCallService_VideoCall_Callback::onPeerDimensionsChanged(jint arg0, jint arg1)
	{
		callMethod<void>(
			"onPeerDimensionsChanged",
			"(II)V",
			arg0,
			arg1
		);
	}
	void InCallService_VideoCall_Callback::onSessionModifyRequestReceived(android::telecom::VideoProfile arg0)
	{
		callMethod<void>(
			"onSessionModifyRequestReceived",
			"(Landroid/telecom/VideoProfile;)V",
			arg0.object()
		);
	}
	void InCallService_VideoCall_Callback::onSessionModifyResponseReceived(jint arg0, android::telecom::VideoProfile arg1, android::telecom::VideoProfile arg2)
	{
		callMethod<void>(
			"onSessionModifyResponseReceived",
			"(ILandroid/telecom/VideoProfile;Landroid/telecom/VideoProfile;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	void InCallService_VideoCall_Callback::onVideoQualityChanged(jint arg0)
	{
		callMethod<void>(
			"onVideoQualityChanged",
			"(I)V",
			arg0
		);
	}
} // namespace android::telecom

