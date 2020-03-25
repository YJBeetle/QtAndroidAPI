#pragma once

#ifndef ANDROID_TELECOM_REMOTECONNECTION_VIDEOPROVIDER
#define ANDROID_TELECOM_REMOTECONNECTION_VIDEOPROVIDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::telecom
{
	class RemoteConnection_VideoProvider_Callback;
}
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
	class RemoteConnection_VideoProvider : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void registerCallback(__jni_impl::android::telecom::RemoteConnection_VideoProvider_Callback arg0);
		void unregisterCallback(__jni_impl::android::telecom::RemoteConnection_VideoProvider_Callback arg0);
		void setPreviewSurface(__jni_impl::android::view::Surface arg0);
		void setCamera(jstring arg0);
		void setDisplaySurface(__jni_impl::android::view::Surface arg0);
		void setDeviceOrientation(jint arg0);
		void setZoom(jfloat arg0);
		void sendSessionModifyRequest(__jni_impl::android::telecom::VideoProfile arg0, __jni_impl::android::telecom::VideoProfile arg1);
		void sendSessionModifyResponse(__jni_impl::android::telecom::VideoProfile arg0);
		void requestCameraCapabilities();
		void requestCallDataUsage();
		void setPauseImage(__jni_impl::android::net::Uri arg0);
	};
} // namespace __jni_impl::android::telecom

#include "RemoteConnection_VideoProvider_Callback.hpp"
#include "../view/Surface.hpp"
#include "VideoProfile.hpp"
#include "../net/Uri.hpp"

namespace __jni_impl::android::telecom
{
	// Fields
	
	// Constructors
	void RemoteConnection_VideoProvider::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telecom.RemoteConnection$VideoProvider",
			"(V)V");
	}
	
	// Methods
	void RemoteConnection_VideoProvider::registerCallback(__jni_impl::android::telecom::RemoteConnection_VideoProvider_Callback arg0)
	{
		__thiz.callMethod<void>(
			"registerCallback",
			"(Landroid/telecom/RemoteConnection$VideoProvider$Callback;)V",
			arg0.__jniObject().object());
	}
	void RemoteConnection_VideoProvider::unregisterCallback(__jni_impl::android::telecom::RemoteConnection_VideoProvider_Callback arg0)
	{
		__thiz.callMethod<void>(
			"unregisterCallback",
			"(Landroid/telecom/RemoteConnection$VideoProvider$Callback;)V",
			arg0.__jniObject().object());
	}
	void RemoteConnection_VideoProvider::setPreviewSurface(__jni_impl::android::view::Surface arg0)
	{
		__thiz.callMethod<void>(
			"setPreviewSurface",
			"(Landroid/view/Surface;)V",
			arg0.__jniObject().object());
	}
	void RemoteConnection_VideoProvider::setCamera(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setCamera",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void RemoteConnection_VideoProvider::setDisplaySurface(__jni_impl::android::view::Surface arg0)
	{
		__thiz.callMethod<void>(
			"setDisplaySurface",
			"(Landroid/view/Surface;)V",
			arg0.__jniObject().object());
	}
	void RemoteConnection_VideoProvider::setDeviceOrientation(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDeviceOrientation",
			"(I)V",
			arg0);
	}
	void RemoteConnection_VideoProvider::setZoom(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setZoom",
			"(F)V",
			arg0);
	}
	void RemoteConnection_VideoProvider::sendSessionModifyRequest(__jni_impl::android::telecom::VideoProfile arg0, __jni_impl::android::telecom::VideoProfile arg1)
	{
		__thiz.callMethod<void>(
			"sendSessionModifyRequest",
			"(Landroid/telecom/VideoProfile;Landroid/telecom/VideoProfile;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void RemoteConnection_VideoProvider::sendSessionModifyResponse(__jni_impl::android::telecom::VideoProfile arg0)
	{
		__thiz.callMethod<void>(
			"sendSessionModifyResponse",
			"(Landroid/telecom/VideoProfile;)V",
			arg0.__jniObject().object());
	}
	void RemoteConnection_VideoProvider::requestCameraCapabilities()
	{
		__thiz.callMethod<void>(
			"requestCameraCapabilities",
			"()V");
	}
	void RemoteConnection_VideoProvider::requestCallDataUsage()
	{
		__thiz.callMethod<void>(
			"requestCallDataUsage",
			"()V");
	}
	void RemoteConnection_VideoProvider::setPauseImage(__jni_impl::android::net::Uri arg0)
	{
		__thiz.callMethod<void>(
			"setPauseImage",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::telecom

namespace android::telecom
{
	class RemoteConnection_VideoProvider : public __jni_impl::android::telecom::RemoteConnection_VideoProvider
	{
	public:
		RemoteConnection_VideoProvider(QAndroidJniObject obj) { __thiz = obj; }
		RemoteConnection_VideoProvider()
		{
			__constructor();
		}
	};
} // namespace android::telecom

#endif // ANDROID_TELECOM_REMOTECONNECTION_VIDEOPROVIDER

