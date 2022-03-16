#include "../net/Uri.hpp"
#include "./RemoteConnection_VideoProvider_Callback.hpp"
#include "./VideoProfile.hpp"
#include "../view/Surface.hpp"
#include "../../JString.hpp"
#include "./RemoteConnection_VideoProvider.hpp"

namespace android::telecom
{
	// Fields
	
	// Constructors
	
	// Methods
	void RemoteConnection_VideoProvider::registerCallback(android::telecom::RemoteConnection_VideoProvider_Callback arg0) const
	{
		callMethod<void>(
			"registerCallback",
			"(Landroid/telecom/RemoteConnection$VideoProvider$Callback;)V",
			arg0.object()
		);
	}
	void RemoteConnection_VideoProvider::requestCallDataUsage() const
	{
		callMethod<void>(
			"requestCallDataUsage",
			"()V"
		);
	}
	void RemoteConnection_VideoProvider::requestCameraCapabilities() const
	{
		callMethod<void>(
			"requestCameraCapabilities",
			"()V"
		);
	}
	void RemoteConnection_VideoProvider::sendSessionModifyRequest(android::telecom::VideoProfile arg0, android::telecom::VideoProfile arg1) const
	{
		callMethod<void>(
			"sendSessionModifyRequest",
			"(Landroid/telecom/VideoProfile;Landroid/telecom/VideoProfile;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void RemoteConnection_VideoProvider::sendSessionModifyResponse(android::telecom::VideoProfile arg0) const
	{
		callMethod<void>(
			"sendSessionModifyResponse",
			"(Landroid/telecom/VideoProfile;)V",
			arg0.object()
		);
	}
	void RemoteConnection_VideoProvider::setCamera(JString arg0) const
	{
		callMethod<void>(
			"setCamera",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void RemoteConnection_VideoProvider::setDeviceOrientation(jint arg0) const
	{
		callMethod<void>(
			"setDeviceOrientation",
			"(I)V",
			arg0
		);
	}
	void RemoteConnection_VideoProvider::setDisplaySurface(android::view::Surface arg0) const
	{
		callMethod<void>(
			"setDisplaySurface",
			"(Landroid/view/Surface;)V",
			arg0.object()
		);
	}
	void RemoteConnection_VideoProvider::setPauseImage(android::net::Uri arg0) const
	{
		callMethod<void>(
			"setPauseImage",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	void RemoteConnection_VideoProvider::setPreviewSurface(android::view::Surface arg0) const
	{
		callMethod<void>(
			"setPreviewSurface",
			"(Landroid/view/Surface;)V",
			arg0.object()
		);
	}
	void RemoteConnection_VideoProvider::setZoom(jfloat arg0) const
	{
		callMethod<void>(
			"setZoom",
			"(F)V",
			arg0
		);
	}
	void RemoteConnection_VideoProvider::unregisterCallback(android::telecom::RemoteConnection_VideoProvider_Callback arg0) const
	{
		callMethod<void>(
			"unregisterCallback",
			"(Landroid/telecom/RemoteConnection$VideoProvider$Callback;)V",
			arg0.object()
		);
	}
} // namespace android::telecom

