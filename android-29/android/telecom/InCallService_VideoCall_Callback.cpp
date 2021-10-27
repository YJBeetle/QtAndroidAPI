#include "./VideoProfile.hpp"
#include "./VideoProfile_CameraCapabilities.hpp"
#include "./InCallService_VideoCall_Callback.hpp"

namespace android::telecom
{
	// Fields
	
	InCallService_VideoCall_Callback::InCallService_VideoCall_Callback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	InCallService_VideoCall_Callback::InCallService_VideoCall_Callback()
	{
		__thiz = QAndroidJniObject(
			"android.telecom.InCallService$VideoCall$Callback",
			"()V"
		);
	}
	
	// Methods
	void InCallService_VideoCall_Callback::onCallDataUsageChanged(jlong arg0)
	{
		__thiz.callMethod<void>(
			"onCallDataUsageChanged",
			"(J)V",
			arg0
		);
	}
	void InCallService_VideoCall_Callback::onCallSessionEvent(jint arg0)
	{
		__thiz.callMethod<void>(
			"onCallSessionEvent",
			"(I)V",
			arg0
		);
	}
	void InCallService_VideoCall_Callback::onCameraCapabilitiesChanged(android::telecom::VideoProfile_CameraCapabilities arg0)
	{
		__thiz.callMethod<void>(
			"onCameraCapabilitiesChanged",
			"(Landroid/telecom/VideoProfile$CameraCapabilities;)V",
			arg0.__jniObject().object()
		);
	}
	void InCallService_VideoCall_Callback::onPeerDimensionsChanged(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onPeerDimensionsChanged",
			"(II)V",
			arg0,
			arg1
		);
	}
	void InCallService_VideoCall_Callback::onSessionModifyRequestReceived(android::telecom::VideoProfile arg0)
	{
		__thiz.callMethod<void>(
			"onSessionModifyRequestReceived",
			"(Landroid/telecom/VideoProfile;)V",
			arg0.__jniObject().object()
		);
	}
	void InCallService_VideoCall_Callback::onSessionModifyResponseReceived(jint arg0, android::telecom::VideoProfile arg1, android::telecom::VideoProfile arg2)
	{
		__thiz.callMethod<void>(
			"onSessionModifyResponseReceived",
			"(ILandroid/telecom/VideoProfile;Landroid/telecom/VideoProfile;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void InCallService_VideoCall_Callback::onVideoQualityChanged(jint arg0)
	{
		__thiz.callMethod<void>(
			"onVideoQualityChanged",
			"(I)V",
			arg0
		);
	}
} // namespace android::telecom

