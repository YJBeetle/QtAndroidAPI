#include "../net/Uri.hpp"
#include "./RemoteConnection_VideoProvider_Callback.hpp"
#include "./VideoProfile.hpp"
#include "../view/Surface.hpp"
#include "./RemoteConnection_VideoProvider.hpp"

namespace android::telecom
{
	// Fields
	
	RemoteConnection_VideoProvider::RemoteConnection_VideoProvider(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void RemoteConnection_VideoProvider::registerCallback(android::telecom::RemoteConnection_VideoProvider_Callback arg0)
	{
		__thiz.callMethod<void>(
			"registerCallback",
			"(Landroid/telecom/RemoteConnection$VideoProvider$Callback;)V",
			arg0.__jniObject().object()
		);
	}
	void RemoteConnection_VideoProvider::requestCallDataUsage()
	{
		__thiz.callMethod<void>(
			"requestCallDataUsage",
			"()V"
		);
	}
	void RemoteConnection_VideoProvider::requestCameraCapabilities()
	{
		__thiz.callMethod<void>(
			"requestCameraCapabilities",
			"()V"
		);
	}
	void RemoteConnection_VideoProvider::sendSessionModifyRequest(android::telecom::VideoProfile arg0, android::telecom::VideoProfile arg1)
	{
		__thiz.callMethod<void>(
			"sendSessionModifyRequest",
			"(Landroid/telecom/VideoProfile;Landroid/telecom/VideoProfile;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void RemoteConnection_VideoProvider::sendSessionModifyResponse(android::telecom::VideoProfile arg0)
	{
		__thiz.callMethod<void>(
			"sendSessionModifyResponse",
			"(Landroid/telecom/VideoProfile;)V",
			arg0.__jniObject().object()
		);
	}
	void RemoteConnection_VideoProvider::setCamera(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setCamera",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void RemoteConnection_VideoProvider::setDeviceOrientation(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDeviceOrientation",
			"(I)V",
			arg0
		);
	}
	void RemoteConnection_VideoProvider::setDisplaySurface(android::view::Surface arg0)
	{
		__thiz.callMethod<void>(
			"setDisplaySurface",
			"(Landroid/view/Surface;)V",
			arg0.__jniObject().object()
		);
	}
	void RemoteConnection_VideoProvider::setPauseImage(android::net::Uri arg0)
	{
		__thiz.callMethod<void>(
			"setPauseImage",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object()
		);
	}
	void RemoteConnection_VideoProvider::setPreviewSurface(android::view::Surface arg0)
	{
		__thiz.callMethod<void>(
			"setPreviewSurface",
			"(Landroid/view/Surface;)V",
			arg0.__jniObject().object()
		);
	}
	void RemoteConnection_VideoProvider::setZoom(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setZoom",
			"(F)V",
			arg0
		);
	}
	void RemoteConnection_VideoProvider::unregisterCallback(android::telecom::RemoteConnection_VideoProvider_Callback arg0)
	{
		__thiz.callMethod<void>(
			"unregisterCallback",
			"(Landroid/telecom/RemoteConnection$VideoProvider$Callback;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::telecom

