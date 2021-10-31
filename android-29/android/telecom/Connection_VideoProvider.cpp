#include "../net/Uri.hpp"
#include "./VideoProfile.hpp"
#include "./VideoProfile_CameraCapabilities.hpp"
#include "../view/Surface.hpp"
#include "./Connection_VideoProvider.hpp"

namespace android::telecom
{
	// Fields
	jint Connection_VideoProvider::SESSION_EVENT_CAMERA_FAILURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection$VideoProvider",
			"SESSION_EVENT_CAMERA_FAILURE"
		);
	}
	jint Connection_VideoProvider::SESSION_EVENT_CAMERA_PERMISSION_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection$VideoProvider",
			"SESSION_EVENT_CAMERA_PERMISSION_ERROR"
		);
	}
	jint Connection_VideoProvider::SESSION_EVENT_CAMERA_READY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection$VideoProvider",
			"SESSION_EVENT_CAMERA_READY"
		);
	}
	jint Connection_VideoProvider::SESSION_EVENT_RX_PAUSE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection$VideoProvider",
			"SESSION_EVENT_RX_PAUSE"
		);
	}
	jint Connection_VideoProvider::SESSION_EVENT_RX_RESUME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection$VideoProvider",
			"SESSION_EVENT_RX_RESUME"
		);
	}
	jint Connection_VideoProvider::SESSION_EVENT_TX_START()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection$VideoProvider",
			"SESSION_EVENT_TX_START"
		);
	}
	jint Connection_VideoProvider::SESSION_EVENT_TX_STOP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection$VideoProvider",
			"SESSION_EVENT_TX_STOP"
		);
	}
	jint Connection_VideoProvider::SESSION_MODIFY_REQUEST_FAIL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection$VideoProvider",
			"SESSION_MODIFY_REQUEST_FAIL"
		);
	}
	jint Connection_VideoProvider::SESSION_MODIFY_REQUEST_INVALID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection$VideoProvider",
			"SESSION_MODIFY_REQUEST_INVALID"
		);
	}
	jint Connection_VideoProvider::SESSION_MODIFY_REQUEST_REJECTED_BY_REMOTE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection$VideoProvider",
			"SESSION_MODIFY_REQUEST_REJECTED_BY_REMOTE"
		);
	}
	jint Connection_VideoProvider::SESSION_MODIFY_REQUEST_SUCCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection$VideoProvider",
			"SESSION_MODIFY_REQUEST_SUCCESS"
		);
	}
	jint Connection_VideoProvider::SESSION_MODIFY_REQUEST_TIMED_OUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.Connection$VideoProvider",
			"SESSION_MODIFY_REQUEST_TIMED_OUT"
		);
	}
	
	// QAndroidJniObject forward
	Connection_VideoProvider::Connection_VideoProvider(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Connection_VideoProvider::Connection_VideoProvider()
		: __JniBaseClass(
			"android.telecom.Connection$VideoProvider",
			"()V"
		) {}
	
	// Methods
	void Connection_VideoProvider::changeCameraCapabilities(android::telecom::VideoProfile_CameraCapabilities arg0)
	{
		callMethod<void>(
			"changeCameraCapabilities",
			"(Landroid/telecom/VideoProfile$CameraCapabilities;)V",
			arg0.object()
		);
	}
	void Connection_VideoProvider::changePeerDimensions(jint arg0, jint arg1)
	{
		callMethod<void>(
			"changePeerDimensions",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Connection_VideoProvider::changeVideoQuality(jint arg0)
	{
		callMethod<void>(
			"changeVideoQuality",
			"(I)V",
			arg0
		);
	}
	void Connection_VideoProvider::handleCallSessionEvent(jint arg0)
	{
		callMethod<void>(
			"handleCallSessionEvent",
			"(I)V",
			arg0
		);
	}
	void Connection_VideoProvider::onRequestCameraCapabilities()
	{
		callMethod<void>(
			"onRequestCameraCapabilities",
			"()V"
		);
	}
	void Connection_VideoProvider::onRequestConnectionDataUsage()
	{
		callMethod<void>(
			"onRequestConnectionDataUsage",
			"()V"
		);
	}
	void Connection_VideoProvider::onSendSessionModifyRequest(android::telecom::VideoProfile arg0, android::telecom::VideoProfile arg1)
	{
		callMethod<void>(
			"onSendSessionModifyRequest",
			"(Landroid/telecom/VideoProfile;Landroid/telecom/VideoProfile;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Connection_VideoProvider::onSendSessionModifyResponse(android::telecom::VideoProfile arg0)
	{
		callMethod<void>(
			"onSendSessionModifyResponse",
			"(Landroid/telecom/VideoProfile;)V",
			arg0.object()
		);
	}
	void Connection_VideoProvider::onSetCamera(jstring arg0)
	{
		callMethod<void>(
			"onSetCamera",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Connection_VideoProvider::onSetDeviceOrientation(jint arg0)
	{
		callMethod<void>(
			"onSetDeviceOrientation",
			"(I)V",
			arg0
		);
	}
	void Connection_VideoProvider::onSetDisplaySurface(android::view::Surface arg0)
	{
		callMethod<void>(
			"onSetDisplaySurface",
			"(Landroid/view/Surface;)V",
			arg0.object()
		);
	}
	void Connection_VideoProvider::onSetPauseImage(android::net::Uri arg0)
	{
		callMethod<void>(
			"onSetPauseImage",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	void Connection_VideoProvider::onSetPreviewSurface(android::view::Surface arg0)
	{
		callMethod<void>(
			"onSetPreviewSurface",
			"(Landroid/view/Surface;)V",
			arg0.object()
		);
	}
	void Connection_VideoProvider::onSetZoom(jfloat arg0)
	{
		callMethod<void>(
			"onSetZoom",
			"(F)V",
			arg0
		);
	}
	void Connection_VideoProvider::receiveSessionModifyRequest(android::telecom::VideoProfile arg0)
	{
		callMethod<void>(
			"receiveSessionModifyRequest",
			"(Landroid/telecom/VideoProfile;)V",
			arg0.object()
		);
	}
	void Connection_VideoProvider::receiveSessionModifyResponse(jint arg0, android::telecom::VideoProfile arg1, android::telecom::VideoProfile arg2)
	{
		callMethod<void>(
			"receiveSessionModifyResponse",
			"(ILandroid/telecom/VideoProfile;Landroid/telecom/VideoProfile;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	void Connection_VideoProvider::setCallDataUsage(jlong arg0)
	{
		callMethod<void>(
			"setCallDataUsage",
			"(J)V",
			arg0
		);
	}
} // namespace android::telecom
