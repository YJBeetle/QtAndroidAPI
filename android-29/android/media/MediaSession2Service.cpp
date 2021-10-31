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
	
	// QAndroidJniObject forward
	MediaSession2Service::MediaSession2Service(QAndroidJniObject obj) : android::app::Service(obj) {}
	
	// Constructors
	MediaSession2Service::MediaSession2Service()
		: android::app::Service(
			"android.media.MediaSession2Service",
			"()V"
		) {}
	
	// Methods
	void MediaSession2Service::addSession(android::media::MediaSession2 arg0)
	{
		callMethod<void>(
			"addSession",
			"(Landroid/media/MediaSession2;)V",
			arg0.object()
		);
	}
	QAndroidJniObject MediaSession2Service::getSessions()
	{
		return callObjectMethod(
			"getSessions",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject MediaSession2Service::onBind(android::content::Intent arg0)
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	void MediaSession2Service::onCreate()
	{
		callMethod<void>(
			"onCreate",
			"()V"
		);
	}
	void MediaSession2Service::onDestroy()
	{
		callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	QAndroidJniObject MediaSession2Service::onGetSession(android::media::MediaSession2_ControllerInfo arg0)
	{
		return callObjectMethod(
			"onGetSession",
			"(Landroid/media/MediaSession2$ControllerInfo;)Landroid/media/MediaSession2;",
			arg0.object()
		);
	}
	QAndroidJniObject MediaSession2Service::onUpdateNotification(android::media::MediaSession2 arg0)
	{
		return callObjectMethod(
			"onUpdateNotification",
			"(Landroid/media/MediaSession2;)Landroid/media/MediaSession2Service$MediaNotification;",
			arg0.object()
		);
	}
	void MediaSession2Service::removeSession(android::media::MediaSession2 arg0)
	{
		callMethod<void>(
			"removeSession",
			"(Landroid/media/MediaSession2;)V",
			arg0.object()
		);
	}
} // namespace android::media

