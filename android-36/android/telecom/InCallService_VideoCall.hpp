#pragma once

#include "../net/Uri.def.hpp"
#include "../os/Handler.def.hpp"
#include "./InCallService_VideoCall_Callback.def.hpp"
#include "./VideoProfile.def.hpp"
#include "../view/Surface.def.hpp"
#include "../../JString.hpp"
#include "./InCallService_VideoCall.def.hpp"

namespace android::telecom
{
	// Fields
	
	// Constructors
	inline InCallService_VideoCall::InCallService_VideoCall()
		: JObject(
			"android.telecom.InCallService$VideoCall",
			"()V"
		) {}
	
	// Methods
	inline void InCallService_VideoCall::registerCallback(android::telecom::InCallService_VideoCall_Callback arg0) const
	{
		callMethod<void>(
			"registerCallback",
			"(Landroid/telecom/InCallService$VideoCall$Callback;)V",
			arg0.object()
		);
	}
	inline void InCallService_VideoCall::registerCallback(android::telecom::InCallService_VideoCall_Callback arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"registerCallback",
			"(Landroid/telecom/InCallService$VideoCall$Callback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void InCallService_VideoCall::requestCallDataUsage() const
	{
		callMethod<void>(
			"requestCallDataUsage",
			"()V"
		);
	}
	inline void InCallService_VideoCall::requestCameraCapabilities() const
	{
		callMethod<void>(
			"requestCameraCapabilities",
			"()V"
		);
	}
	inline void InCallService_VideoCall::sendSessionModifyRequest(android::telecom::VideoProfile arg0) const
	{
		callMethod<void>(
			"sendSessionModifyRequest",
			"(Landroid/telecom/VideoProfile;)V",
			arg0.object()
		);
	}
	inline void InCallService_VideoCall::sendSessionModifyResponse(android::telecom::VideoProfile arg0) const
	{
		callMethod<void>(
			"sendSessionModifyResponse",
			"(Landroid/telecom/VideoProfile;)V",
			arg0.object()
		);
	}
	inline void InCallService_VideoCall::setCamera(JString arg0) const
	{
		callMethod<void>(
			"setCamera",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void InCallService_VideoCall::setDeviceOrientation(jint arg0) const
	{
		callMethod<void>(
			"setDeviceOrientation",
			"(I)V",
			arg0
		);
	}
	inline void InCallService_VideoCall::setDisplaySurface(android::view::Surface arg0) const
	{
		callMethod<void>(
			"setDisplaySurface",
			"(Landroid/view/Surface;)V",
			arg0.object()
		);
	}
	inline void InCallService_VideoCall::setPauseImage(android::net::Uri arg0) const
	{
		callMethod<void>(
			"setPauseImage",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	inline void InCallService_VideoCall::setPreviewSurface(android::view::Surface arg0) const
	{
		callMethod<void>(
			"setPreviewSurface",
			"(Landroid/view/Surface;)V",
			arg0.object()
		);
	}
	inline void InCallService_VideoCall::setZoom(jfloat arg0) const
	{
		callMethod<void>(
			"setZoom",
			"(F)V",
			arg0
		);
	}
	inline void InCallService_VideoCall::unregisterCallback(android::telecom::InCallService_VideoCall_Callback arg0) const
	{
		callMethod<void>(
			"unregisterCallback",
			"(Landroid/telecom/InCallService$VideoCall$Callback;)V",
			arg0.object()
		);
	}
} // namespace android::telecom

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telecom;
#endif
