#pragma once

#ifndef ANDROID_TELECOM_INCALLSERVICE_VIDEOCALL
#define ANDROID_TELECOM_INCALLSERVICE_VIDEOCALL

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::view
{
	class Surface;
}
namespace __jni_impl::android::telecom
{
	class VideoProfile;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::telecom
{
	class InCallService_VideoCall_Callback;
}
namespace __jni_impl::android::os
{
	class Handler;
}

namespace __jni_impl::android::telecom
{
	class InCallService_VideoCall : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void setPreviewSurface(__jni_impl::android::view::Surface arg0);
		void setCamera(jstring arg0);
		void setDisplaySurface(__jni_impl::android::view::Surface arg0);
		void setDeviceOrientation(jint arg0);
		void setZoom(jfloat arg0);
		void sendSessionModifyRequest(__jni_impl::android::telecom::VideoProfile arg0);
		void sendSessionModifyResponse(__jni_impl::android::telecom::VideoProfile arg0);
		void requestCameraCapabilities();
		void requestCallDataUsage();
		void setPauseImage(__jni_impl::android::net::Uri arg0);
		void registerCallback(__jni_impl::android::telecom::InCallService_VideoCall_Callback arg0, __jni_impl::android::os::Handler arg1);
		void registerCallback(__jni_impl::android::telecom::InCallService_VideoCall_Callback arg0);
		void unregisterCallback(__jni_impl::android::telecom::InCallService_VideoCall_Callback arg0);
	};
} // namespace __jni_impl::android::telecom

#include "../view/Surface.hpp"
#include "VideoProfile.hpp"
#include "../net/Uri.hpp"
#include "InCallService_VideoCall_Callback.hpp"
#include "../os/Handler.hpp"

namespace __jni_impl::android::telecom
{
	// Fields
	
	// Constructors
	void InCallService_VideoCall::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telecom.InCallService$VideoCall",
			"()V");
	}
	
	// Methods
	void InCallService_VideoCall::setPreviewSurface(__jni_impl::android::view::Surface arg0)
	{
		__thiz.callMethod<void>(
			"setPreviewSurface",
			"(Landroid/view/Surface;)V",
			arg0.__jniObject().object());
	}
	void InCallService_VideoCall::setCamera(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setCamera",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void InCallService_VideoCall::setDisplaySurface(__jni_impl::android::view::Surface arg0)
	{
		__thiz.callMethod<void>(
			"setDisplaySurface",
			"(Landroid/view/Surface;)V",
			arg0.__jniObject().object());
	}
	void InCallService_VideoCall::setDeviceOrientation(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDeviceOrientation",
			"(I)V",
			arg0);
	}
	void InCallService_VideoCall::setZoom(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setZoom",
			"(F)V",
			arg0);
	}
	void InCallService_VideoCall::sendSessionModifyRequest(__jni_impl::android::telecom::VideoProfile arg0)
	{
		__thiz.callMethod<void>(
			"sendSessionModifyRequest",
			"(Landroid/telecom/VideoProfile;)V",
			arg0.__jniObject().object());
	}
	void InCallService_VideoCall::sendSessionModifyResponse(__jni_impl::android::telecom::VideoProfile arg0)
	{
		__thiz.callMethod<void>(
			"sendSessionModifyResponse",
			"(Landroid/telecom/VideoProfile;)V",
			arg0.__jniObject().object());
	}
	void InCallService_VideoCall::requestCameraCapabilities()
	{
		__thiz.callMethod<void>(
			"requestCameraCapabilities",
			"()V");
	}
	void InCallService_VideoCall::requestCallDataUsage()
	{
		__thiz.callMethod<void>(
			"requestCallDataUsage",
			"()V");
	}
	void InCallService_VideoCall::setPauseImage(__jni_impl::android::net::Uri arg0)
	{
		__thiz.callMethod<void>(
			"setPauseImage",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object());
	}
	void InCallService_VideoCall::registerCallback(__jni_impl::android::telecom::InCallService_VideoCall_Callback arg0, __jni_impl::android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"registerCallback",
			"(Landroid/telecom/InCallService$VideoCall$Callback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void InCallService_VideoCall::registerCallback(__jni_impl::android::telecom::InCallService_VideoCall_Callback arg0)
	{
		__thiz.callMethod<void>(
			"registerCallback",
			"(Landroid/telecom/InCallService$VideoCall$Callback;)V",
			arg0.__jniObject().object());
	}
	void InCallService_VideoCall::unregisterCallback(__jni_impl::android::telecom::InCallService_VideoCall_Callback arg0)
	{
		__thiz.callMethod<void>(
			"unregisterCallback",
			"(Landroid/telecom/InCallService$VideoCall$Callback;)V",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::telecom

namespace android::telecom
{
	class InCallService_VideoCall : public __jni_impl::android::telecom::InCallService_VideoCall
	{
	public:
		InCallService_VideoCall(QAndroidJniObject obj) { __thiz = obj; }
		InCallService_VideoCall()
		{
			__constructor();
		}
	};
} // namespace android::telecom

#endif // ANDROID_TELECOM_INCALLSERVICE_VIDEOCALL

