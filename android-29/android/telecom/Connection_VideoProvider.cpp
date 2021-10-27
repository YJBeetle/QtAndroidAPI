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
	
	Connection_VideoProvider::Connection_VideoProvider(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Connection_VideoProvider::Connection_VideoProvider()
	{
		__thiz = QAndroidJniObject(
			"android.telecom.Connection$VideoProvider",
			"()V"
		);
	}
	
	// Methods
	void Connection_VideoProvider::changeCameraCapabilities(android::telecom::VideoProfile_CameraCapabilities arg0)
	{
		__thiz.callMethod<void>(
			"changeCameraCapabilities",
			"(Landroid/telecom/VideoProfile$CameraCapabilities;)V",
			arg0.__jniObject().object()
		);
	}
	void Connection_VideoProvider::changePeerDimensions(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"changePeerDimensions",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Connection_VideoProvider::changeVideoQuality(jint arg0)
	{
		__thiz.callMethod<void>(
			"changeVideoQuality",
			"(I)V",
			arg0
		);
	}
	void Connection_VideoProvider::handleCallSessionEvent(jint arg0)
	{
		__thiz.callMethod<void>(
			"handleCallSessionEvent",
			"(I)V",
			arg0
		);
	}
	void Connection_VideoProvider::onRequestCameraCapabilities()
	{
		__thiz.callMethod<void>(
			"onRequestCameraCapabilities",
			"()V"
		);
	}
	void Connection_VideoProvider::onRequestConnectionDataUsage()
	{
		__thiz.callMethod<void>(
			"onRequestConnectionDataUsage",
			"()V"
		);
	}
	void Connection_VideoProvider::onSendSessionModifyRequest(android::telecom::VideoProfile arg0, android::telecom::VideoProfile arg1)
	{
		__thiz.callMethod<void>(
			"onSendSessionModifyRequest",
			"(Landroid/telecom/VideoProfile;Landroid/telecom/VideoProfile;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Connection_VideoProvider::onSendSessionModifyResponse(android::telecom::VideoProfile arg0)
	{
		__thiz.callMethod<void>(
			"onSendSessionModifyResponse",
			"(Landroid/telecom/VideoProfile;)V",
			arg0.__jniObject().object()
		);
	}
	void Connection_VideoProvider::onSetCamera(jstring arg0)
	{
		__thiz.callMethod<void>(
			"onSetCamera",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Connection_VideoProvider::onSetCamera(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"onSetCamera",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Connection_VideoProvider::onSetDeviceOrientation(jint arg0)
	{
		__thiz.callMethod<void>(
			"onSetDeviceOrientation",
			"(I)V",
			arg0
		);
	}
	void Connection_VideoProvider::onSetDisplaySurface(android::view::Surface arg0)
	{
		__thiz.callMethod<void>(
			"onSetDisplaySurface",
			"(Landroid/view/Surface;)V",
			arg0.__jniObject().object()
		);
	}
	void Connection_VideoProvider::onSetPauseImage(android::net::Uri arg0)
	{
		__thiz.callMethod<void>(
			"onSetPauseImage",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object()
		);
	}
	void Connection_VideoProvider::onSetPreviewSurface(android::view::Surface arg0)
	{
		__thiz.callMethod<void>(
			"onSetPreviewSurface",
			"(Landroid/view/Surface;)V",
			arg0.__jniObject().object()
		);
	}
	void Connection_VideoProvider::onSetZoom(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"onSetZoom",
			"(F)V",
			arg0
		);
	}
	void Connection_VideoProvider::receiveSessionModifyRequest(android::telecom::VideoProfile arg0)
	{
		__thiz.callMethod<void>(
			"receiveSessionModifyRequest",
			"(Landroid/telecom/VideoProfile;)V",
			arg0.__jniObject().object()
		);
	}
	void Connection_VideoProvider::receiveSessionModifyResponse(jint arg0, android::telecom::VideoProfile arg1, android::telecom::VideoProfile arg2)
	{
		__thiz.callMethod<void>(
			"receiveSessionModifyResponse",
			"(ILandroid/telecom/VideoProfile;Landroid/telecom/VideoProfile;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void Connection_VideoProvider::setCallDataUsage(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setCallDataUsage",
			"(J)V",
			arg0
		);
	}
} // namespace android::telecom

