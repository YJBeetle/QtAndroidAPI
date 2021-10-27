#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::telecom
{
	class VideoProfile;
}
namespace __jni_impl::android::telecom
{
	class VideoProfile_CameraCapabilities;
}

namespace __jni_impl::android::telecom
{
	class InCallService_VideoCall_Callback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onCallDataUsageChanged(jlong arg0);
		void onCallSessionEvent(jint arg0);
		void onCameraCapabilitiesChanged(__jni_impl::android::telecom::VideoProfile_CameraCapabilities arg0);
		void onPeerDimensionsChanged(jint arg0, jint arg1);
		void onSessionModifyRequestReceived(__jni_impl::android::telecom::VideoProfile arg0);
		void onSessionModifyResponseReceived(jint arg0, __jni_impl::android::telecom::VideoProfile arg1, __jni_impl::android::telecom::VideoProfile arg2);
		void onVideoQualityChanged(jint arg0);
	};
} // namespace __jni_impl::android::telecom

#include "./VideoProfile.hpp"
#include "./VideoProfile_CameraCapabilities.hpp"

namespace __jni_impl::android::telecom
{
	// Fields
	
	// Constructors
	void InCallService_VideoCall_Callback::__constructor()
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
	void InCallService_VideoCall_Callback::onCameraCapabilitiesChanged(__jni_impl::android::telecom::VideoProfile_CameraCapabilities arg0)
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
	void InCallService_VideoCall_Callback::onSessionModifyRequestReceived(__jni_impl::android::telecom::VideoProfile arg0)
	{
		__thiz.callMethod<void>(
			"onSessionModifyRequestReceived",
			"(Landroid/telecom/VideoProfile;)V",
			arg0.__jniObject().object()
		);
	}
	void InCallService_VideoCall_Callback::onSessionModifyResponseReceived(jint arg0, __jni_impl::android::telecom::VideoProfile arg1, __jni_impl::android::telecom::VideoProfile arg2)
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
} // namespace __jni_impl::android::telecom

namespace android::telecom
{
	class InCallService_VideoCall_Callback : public __jni_impl::android::telecom::InCallService_VideoCall_Callback
	{
	public:
		InCallService_VideoCall_Callback(QAndroidJniObject obj) { __thiz = obj; }
		InCallService_VideoCall_Callback()
		{
			__constructor();
		}
	};
} // namespace android::telecom

