#pragma once

#ifndef ANDROID_MEDIA_MEDIASESSION2SERVICE
#define ANDROID_MEDIA_MEDIASESSION2SERVICE

#include "../app/Service.hpp"

namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::media
{
	class MediaSession2;
}
namespace __jni_impl::android::media
{
	class MediaSession2_ControllerInfo;
}
namespace __jni_impl::android::media
{
	class MediaSession2Service_MediaNotification;
}

namespace __jni_impl::android::media
{
	class MediaSession2Service : public __jni_impl::android::app::Service
	{
	public:
		// Fields
		static QAndroidJniObject SERVICE_INTERFACE();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject onBind(__jni_impl::android::content::Intent arg0);
		QAndroidJniObject onGetSession(__jni_impl::android::media::MediaSession2_ControllerInfo arg0);
		QAndroidJniObject onUpdateNotification(__jni_impl::android::media::MediaSession2 arg0);
		void addSession(__jni_impl::android::media::MediaSession2 arg0);
		void removeSession(__jni_impl::android::media::MediaSession2 arg0);
		QAndroidJniObject getSessions();
		void onCreate();
		void onDestroy();
	};
} // namespace __jni_impl::android::media

#include "../content/Intent.hpp"
#include "MediaSession2.hpp"
#include "MediaSession2_ControllerInfo.hpp"
#include "MediaSession2Service_MediaNotification.hpp"

namespace __jni_impl::android::media
{
	// Fields
	QAndroidJniObject MediaSession2Service::SERVICE_INTERFACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaSession2Service",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void MediaSession2Service::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaSession2Service",
			"()V");
	}
	
	// Methods
	QAndroidJniObject MediaSession2Service::onBind(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject MediaSession2Service::onGetSession(__jni_impl::android::media::MediaSession2_ControllerInfo arg0)
	{
		return __thiz.callObjectMethod(
			"onGetSession",
			"(Landroid/media/MediaSession2$ControllerInfo;)Landroid/media/MediaSession2;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject MediaSession2Service::onUpdateNotification(__jni_impl::android::media::MediaSession2 arg0)
	{
		return __thiz.callObjectMethod(
			"onUpdateNotification",
			"(Landroid/media/MediaSession2;)Landroid/media/MediaSession2Service$MediaNotification;",
			arg0.__jniObject().object());
	}
	void MediaSession2Service::addSession(__jni_impl::android::media::MediaSession2 arg0)
	{
		__thiz.callMethod<void>(
			"addSession",
			"(Landroid/media/MediaSession2;)V",
			arg0.__jniObject().object());
	}
	void MediaSession2Service::removeSession(__jni_impl::android::media::MediaSession2 arg0)
	{
		__thiz.callMethod<void>(
			"removeSession",
			"(Landroid/media/MediaSession2;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject MediaSession2Service::getSessions()
	{
		return __thiz.callObjectMethod(
			"getSessions",
			"()Ljava/util/List;");
	}
	void MediaSession2Service::onCreate()
	{
		__thiz.callMethod<void>(
			"onCreate",
			"()V");
	}
	void MediaSession2Service::onDestroy()
	{
		__thiz.callMethod<void>(
			"onDestroy",
			"()V");
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaSession2Service : public __jni_impl::android::media::MediaSession2Service
	{
	public:
		MediaSession2Service(QAndroidJniObject obj) { __thiz = obj; }
		MediaSession2Service()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIASESSION2SERVICE

