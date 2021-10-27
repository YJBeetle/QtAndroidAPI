#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::telecom
{
	class VideoProfile;
}
namespace __jni_impl::android::telecom
{
	class VideoProfile_CameraCapabilities;
}
namespace __jni_impl::android::view
{
	class Surface;
}

namespace __jni_impl::android::telecom
{
	class Connection_VideoProvider : public __JniBaseClass
	{
	public:
		// Fields
		static jint SESSION_EVENT_CAMERA_FAILURE();
		static jint SESSION_EVENT_CAMERA_PERMISSION_ERROR();
		static jint SESSION_EVENT_CAMERA_READY();
		static jint SESSION_EVENT_RX_PAUSE();
		static jint SESSION_EVENT_RX_RESUME();
		static jint SESSION_EVENT_TX_START();
		static jint SESSION_EVENT_TX_STOP();
		static jint SESSION_MODIFY_REQUEST_FAIL();
		static jint SESSION_MODIFY_REQUEST_INVALID();
		static jint SESSION_MODIFY_REQUEST_REJECTED_BY_REMOTE();
		static jint SESSION_MODIFY_REQUEST_SUCCESS();
		static jint SESSION_MODIFY_REQUEST_TIMED_OUT();
		
		// Constructors
		void __constructor();
		
		// Methods
		void changeCameraCapabilities(__jni_impl::android::telecom::VideoProfile_CameraCapabilities arg0);
		void changePeerDimensions(jint arg0, jint arg1);
		void changeVideoQuality(jint arg0);
		void handleCallSessionEvent(jint arg0);
		void onRequestCameraCapabilities();
		void onRequestConnectionDataUsage();
		void onSendSessionModifyRequest(__jni_impl::android::telecom::VideoProfile arg0, __jni_impl::android::telecom::VideoProfile arg1);
		void onSendSessionModifyResponse(__jni_impl::android::telecom::VideoProfile arg0);
		void onSetCamera(jstring arg0);
		void onSetCamera(const QString &arg0);
		void onSetDeviceOrientation(jint arg0);
		void onSetDisplaySurface(__jni_impl::android::view::Surface arg0);
		void onSetPauseImage(__jni_impl::android::net::Uri arg0);
		void onSetPreviewSurface(__jni_impl::android::view::Surface arg0);
		void onSetZoom(jfloat arg0);
		void receiveSessionModifyRequest(__jni_impl::android::telecom::VideoProfile arg0);
		void receiveSessionModifyResponse(jint arg0, __jni_impl::android::telecom::VideoProfile arg1, __jni_impl::android::telecom::VideoProfile arg2);
		void setCallDataUsage(jlong arg0);
	};
} // namespace __jni_impl::android::telecom

#include "../net/Uri.hpp"
#include "VideoProfile.hpp"
#include "VideoProfile_CameraCapabilities.hpp"
#include "../view/Surface.hpp"

namespace __jni_impl::android::telecom
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
	
	// Constructors
	void Connection_VideoProvider::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telecom.Connection$VideoProvider",
			"()V"
		);
	}
	
	// Methods
	void Connection_VideoProvider::changeCameraCapabilities(__jni_impl::android::telecom::VideoProfile_CameraCapabilities arg0)
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
	void Connection_VideoProvider::onSendSessionModifyRequest(__jni_impl::android::telecom::VideoProfile arg0, __jni_impl::android::telecom::VideoProfile arg1)
	{
		__thiz.callMethod<void>(
			"onSendSessionModifyRequest",
			"(Landroid/telecom/VideoProfile;Landroid/telecom/VideoProfile;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Connection_VideoProvider::onSendSessionModifyResponse(__jni_impl::android::telecom::VideoProfile arg0)
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
	void Connection_VideoProvider::onSetDisplaySurface(__jni_impl::android::view::Surface arg0)
	{
		__thiz.callMethod<void>(
			"onSetDisplaySurface",
			"(Landroid/view/Surface;)V",
			arg0.__jniObject().object()
		);
	}
	void Connection_VideoProvider::onSetPauseImage(__jni_impl::android::net::Uri arg0)
	{
		__thiz.callMethod<void>(
			"onSetPauseImage",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object()
		);
	}
	void Connection_VideoProvider::onSetPreviewSurface(__jni_impl::android::view::Surface arg0)
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
	void Connection_VideoProvider::receiveSessionModifyRequest(__jni_impl::android::telecom::VideoProfile arg0)
	{
		__thiz.callMethod<void>(
			"receiveSessionModifyRequest",
			"(Landroid/telecom/VideoProfile;)V",
			arg0.__jniObject().object()
		);
	}
	void Connection_VideoProvider::receiveSessionModifyResponse(jint arg0, __jni_impl::android::telecom::VideoProfile arg1, __jni_impl::android::telecom::VideoProfile arg2)
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
} // namespace __jni_impl::android::telecom

namespace android::telecom
{
	class Connection_VideoProvider : public __jni_impl::android::telecom::Connection_VideoProvider
	{
	public:
		Connection_VideoProvider(QAndroidJniObject obj) { __thiz = obj; }
		Connection_VideoProvider()
		{
			__constructor();
		}
	};
} // namespace android::telecom

