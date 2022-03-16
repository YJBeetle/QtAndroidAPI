#include "../net/Uri.hpp"
#include "../os/Handler.hpp"
#include "./InCallService_VideoCall_Callback.hpp"
#include "./VideoProfile.hpp"
#include "../view/Surface.hpp"
#include "../../JString.hpp"
#include "./InCallService_VideoCall.hpp"

namespace android::telecom
{
	// Fields
	
	// Constructors
	InCallService_VideoCall::InCallService_VideoCall()
		: JObject(
			"android.telecom.InCallService$VideoCall",
			"()V"
		) {}
	
	// Methods
	void InCallService_VideoCall::registerCallback(android::telecom::InCallService_VideoCall_Callback arg0) const
	{
		callMethod<void>(
			"registerCallback",
			"(Landroid/telecom/InCallService$VideoCall$Callback;)V",
			arg0.object()
		);
	}
	void InCallService_VideoCall::registerCallback(android::telecom::InCallService_VideoCall_Callback arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"registerCallback",
			"(Landroid/telecom/InCallService$VideoCall$Callback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void InCallService_VideoCall::requestCallDataUsage() const
	{
		callMethod<void>(
			"requestCallDataUsage",
			"()V"
		);
	}
	void InCallService_VideoCall::requestCameraCapabilities() const
	{
		callMethod<void>(
			"requestCameraCapabilities",
			"()V"
		);
	}
	void InCallService_VideoCall::sendSessionModifyRequest(android::telecom::VideoProfile arg0) const
	{
		callMethod<void>(
			"sendSessionModifyRequest",
			"(Landroid/telecom/VideoProfile;)V",
			arg0.object()
		);
	}
	void InCallService_VideoCall::sendSessionModifyResponse(android::telecom::VideoProfile arg0) const
	{
		callMethod<void>(
			"sendSessionModifyResponse",
			"(Landroid/telecom/VideoProfile;)V",
			arg0.object()
		);
	}
	void InCallService_VideoCall::setCamera(JString arg0) const
	{
		callMethod<void>(
			"setCamera",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void InCallService_VideoCall::setDeviceOrientation(jint arg0) const
	{
		callMethod<void>(
			"setDeviceOrientation",
			"(I)V",
			arg0
		);
	}
	void InCallService_VideoCall::setDisplaySurface(android::view::Surface arg0) const
	{
		callMethod<void>(
			"setDisplaySurface",
			"(Landroid/view/Surface;)V",
			arg0.object()
		);
	}
	void InCallService_VideoCall::setPauseImage(android::net::Uri arg0) const
	{
		callMethod<void>(
			"setPauseImage",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	void InCallService_VideoCall::setPreviewSurface(android::view::Surface arg0) const
	{
		callMethod<void>(
			"setPreviewSurface",
			"(Landroid/view/Surface;)V",
			arg0.object()
		);
	}
	void InCallService_VideoCall::setZoom(jfloat arg0) const
	{
		callMethod<void>(
			"setZoom",
			"(F)V",
			arg0
		);
	}
	void InCallService_VideoCall::unregisterCallback(android::telecom::InCallService_VideoCall_Callback arg0) const
	{
		callMethod<void>(
			"unregisterCallback",
			"(Landroid/telecom/InCallService$VideoCall$Callback;)V",
			arg0.object()
		);
	}
} // namespace android::telecom

