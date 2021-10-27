#include "../content/Intent.hpp"
#include "./MediaSession2.hpp"
#include "./MediaSession2_ControllerInfo.hpp"
#include "./MediaSession2Service_MediaNotification.hpp"
#include "./MediaSession2Service.hpp"

namespace android::media
{
	// Fields
	jstring MediaSession2Service::SERVICE_INTERFACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaSession2Service",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	MediaSession2Service::MediaSession2Service(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaSession2Service::MediaSession2Service()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaSession2Service",
			"()V"
		);
	}
	
	// Methods
	void MediaSession2Service::addSession(android::media::MediaSession2 arg0)
	{
		__thiz.callMethod<void>(
			"addSession",
			"(Landroid/media/MediaSession2;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MediaSession2Service::getSessions()
	{
		return __thiz.callObjectMethod(
			"getSessions",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject MediaSession2Service::onBind(android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object()
		);
	}
	void MediaSession2Service::onCreate()
	{
		__thiz.callMethod<void>(
			"onCreate",
			"()V"
		);
	}
	void MediaSession2Service::onDestroy()
	{
		__thiz.callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	QAndroidJniObject MediaSession2Service::onGetSession(android::media::MediaSession2_ControllerInfo arg0)
	{
		return __thiz.callObjectMethod(
			"onGetSession",
			"(Landroid/media/MediaSession2$ControllerInfo;)Landroid/media/MediaSession2;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MediaSession2Service::onUpdateNotification(android::media::MediaSession2 arg0)
	{
		return __thiz.callObjectMethod(
			"onUpdateNotification",
			"(Landroid/media/MediaSession2;)Landroid/media/MediaSession2Service$MediaNotification;",
			arg0.__jniObject().object()
		);
	}
	void MediaSession2Service::removeSession(android::media::MediaSession2 arg0)
	{
		__thiz.callMethod<void>(
			"removeSession",
			"(Landroid/media/MediaSession2;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::media

