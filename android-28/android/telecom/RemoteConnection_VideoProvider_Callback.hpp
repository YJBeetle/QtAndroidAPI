#pragma once

#include "./RemoteConnection_VideoProvider.def.hpp"
#include "./VideoProfile.def.hpp"
#include "./VideoProfile_CameraCapabilities.def.hpp"
#include "./RemoteConnection_VideoProvider_Callback.def.hpp"

namespace android::telecom
{
	// Fields
	
	// Constructors
	inline RemoteConnection_VideoProvider_Callback::RemoteConnection_VideoProvider_Callback()
		: JObject(
			"android.telecom.RemoteConnection$VideoProvider$Callback",
			"()V"
		) {}
	
	// Methods
	inline void RemoteConnection_VideoProvider_Callback::onCallDataUsageChanged(android::telecom::RemoteConnection_VideoProvider arg0, jlong arg1) const
	{
		callMethod<void>(
			"onCallDataUsageChanged",
			"(Landroid/telecom/RemoteConnection$VideoProvider;J)V",
			arg0.object(),
			arg1
		);
	}
	inline void RemoteConnection_VideoProvider_Callback::onCallSessionEvent(android::telecom::RemoteConnection_VideoProvider arg0, jint arg1) const
	{
		callMethod<void>(
			"onCallSessionEvent",
			"(Landroid/telecom/RemoteConnection$VideoProvider;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void RemoteConnection_VideoProvider_Callback::onCameraCapabilitiesChanged(android::telecom::RemoteConnection_VideoProvider arg0, android::telecom::VideoProfile_CameraCapabilities arg1) const
	{
		callMethod<void>(
			"onCameraCapabilitiesChanged",
			"(Landroid/telecom/RemoteConnection$VideoProvider;Landroid/telecom/VideoProfile$CameraCapabilities;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void RemoteConnection_VideoProvider_Callback::onPeerDimensionsChanged(android::telecom::RemoteConnection_VideoProvider arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"onPeerDimensionsChanged",
			"(Landroid/telecom/RemoteConnection$VideoProvider;II)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline void RemoteConnection_VideoProvider_Callback::onSessionModifyRequestReceived(android::telecom::RemoteConnection_VideoProvider arg0, android::telecom::VideoProfile arg1) const
	{
		callMethod<void>(
			"onSessionModifyRequestReceived",
			"(Landroid/telecom/RemoteConnection$VideoProvider;Landroid/telecom/VideoProfile;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void RemoteConnection_VideoProvider_Callback::onSessionModifyResponseReceived(android::telecom::RemoteConnection_VideoProvider arg0, jint arg1, android::telecom::VideoProfile arg2, android::telecom::VideoProfile arg3) const
	{
		callMethod<void>(
			"onSessionModifyResponseReceived",
			"(Landroid/telecom/RemoteConnection$VideoProvider;ILandroid/telecom/VideoProfile;Landroid/telecom/VideoProfile;)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3.object()
		);
	}
	inline void RemoteConnection_VideoProvider_Callback::onVideoQualityChanged(android::telecom::RemoteConnection_VideoProvider arg0, jint arg1) const
	{
		callMethod<void>(
			"onVideoQualityChanged",
			"(Landroid/telecom/RemoteConnection$VideoProvider;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telecom

// Base class headers

