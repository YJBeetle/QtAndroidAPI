#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::telecom
{
	class RemoteConnection_VideoProvider;
}
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
	class RemoteConnection_VideoProvider_Callback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onCallDataUsageChanged(__jni_impl::android::telecom::RemoteConnection_VideoProvider arg0, jlong arg1);
		void onCallSessionEvent(__jni_impl::android::telecom::RemoteConnection_VideoProvider arg0, jint arg1);
		void onCameraCapabilitiesChanged(__jni_impl::android::telecom::RemoteConnection_VideoProvider arg0, __jni_impl::android::telecom::VideoProfile_CameraCapabilities arg1);
		void onPeerDimensionsChanged(__jni_impl::android::telecom::RemoteConnection_VideoProvider arg0, jint arg1, jint arg2);
		void onSessionModifyRequestReceived(__jni_impl::android::telecom::RemoteConnection_VideoProvider arg0, __jni_impl::android::telecom::VideoProfile arg1);
		void onSessionModifyResponseReceived(__jni_impl::android::telecom::RemoteConnection_VideoProvider arg0, jint arg1, __jni_impl::android::telecom::VideoProfile arg2, __jni_impl::android::telecom::VideoProfile arg3);
		void onVideoQualityChanged(__jni_impl::android::telecom::RemoteConnection_VideoProvider arg0, jint arg1);
	};
} // namespace __jni_impl::android::telecom

#include "./RemoteConnection_VideoProvider.hpp"
#include "./VideoProfile.hpp"
#include "./VideoProfile_CameraCapabilities.hpp"

namespace __jni_impl::android::telecom
{
	// Fields
	
	// Constructors
	void RemoteConnection_VideoProvider_Callback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telecom.RemoteConnection$VideoProvider$Callback",
			"()V"
		);
	}
	
	// Methods
	void RemoteConnection_VideoProvider_Callback::onCallDataUsageChanged(__jni_impl::android::telecom::RemoteConnection_VideoProvider arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"onCallDataUsageChanged",
			"(Landroid/telecom/RemoteConnection$VideoProvider;J)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void RemoteConnection_VideoProvider_Callback::onCallSessionEvent(__jni_impl::android::telecom::RemoteConnection_VideoProvider arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onCallSessionEvent",
			"(Landroid/telecom/RemoteConnection$VideoProvider;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void RemoteConnection_VideoProvider_Callback::onCameraCapabilitiesChanged(__jni_impl::android::telecom::RemoteConnection_VideoProvider arg0, __jni_impl::android::telecom::VideoProfile_CameraCapabilities arg1)
	{
		__thiz.callMethod<void>(
			"onCameraCapabilitiesChanged",
			"(Landroid/telecom/RemoteConnection$VideoProvider;Landroid/telecom/VideoProfile$CameraCapabilities;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void RemoteConnection_VideoProvider_Callback::onPeerDimensionsChanged(__jni_impl::android::telecom::RemoteConnection_VideoProvider arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"onPeerDimensionsChanged",
			"(Landroid/telecom/RemoteConnection$VideoProvider;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void RemoteConnection_VideoProvider_Callback::onSessionModifyRequestReceived(__jni_impl::android::telecom::RemoteConnection_VideoProvider arg0, __jni_impl::android::telecom::VideoProfile arg1)
	{
		__thiz.callMethod<void>(
			"onSessionModifyRequestReceived",
			"(Landroid/telecom/RemoteConnection$VideoProvider;Landroid/telecom/VideoProfile;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void RemoteConnection_VideoProvider_Callback::onSessionModifyResponseReceived(__jni_impl::android::telecom::RemoteConnection_VideoProvider arg0, jint arg1, __jni_impl::android::telecom::VideoProfile arg2, __jni_impl::android::telecom::VideoProfile arg3)
	{
		__thiz.callMethod<void>(
			"onSessionModifyResponseReceived",
			"(Landroid/telecom/RemoteConnection$VideoProvider;ILandroid/telecom/VideoProfile;Landroid/telecom/VideoProfile;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	void RemoteConnection_VideoProvider_Callback::onVideoQualityChanged(__jni_impl::android::telecom::RemoteConnection_VideoProvider arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onVideoQualityChanged",
			"(Landroid/telecom/RemoteConnection$VideoProvider;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::telecom

namespace android::telecom
{
	class RemoteConnection_VideoProvider_Callback : public __jni_impl::android::telecom::RemoteConnection_VideoProvider_Callback
	{
	public:
		RemoteConnection_VideoProvider_Callback(QAndroidJniObject obj) { __thiz = obj; }
		RemoteConnection_VideoProvider_Callback()
		{
			__constructor();
		}
	};
} // namespace android::telecom

