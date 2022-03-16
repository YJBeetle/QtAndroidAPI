#include "../content/Intent.hpp"
#include "./MediaSession2.hpp"
#include "./MediaSession2_ControllerInfo.hpp"
#include "./MediaSession2Service_MediaNotification.hpp"
#include "../../JString.hpp"
#include "./MediaSession2Service.hpp"

namespace android::media
{
	// Fields
	JString MediaSession2Service::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.media.MediaSession2Service",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	MediaSession2Service::MediaSession2Service()
		: android::app::Service(
			"android.media.MediaSession2Service",
			"()V"
		) {}
	
	// Methods
	void MediaSession2Service::addSession(android::media::MediaSession2 arg0) const
	{
		callMethod<void>(
			"addSession",
			"(Landroid/media/MediaSession2;)V",
			arg0.object()
		);
	}
	JObject MediaSession2Service::getSessions() const
	{
		return callObjectMethod(
			"getSessions",
			"()Ljava/util/List;"
		);
	}
	JObject MediaSession2Service::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	void MediaSession2Service::onCreate() const
	{
		callMethod<void>(
			"onCreate",
			"()V"
		);
	}
	void MediaSession2Service::onDestroy() const
	{
		callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	android::media::MediaSession2 MediaSession2Service::onGetSession(android::media::MediaSession2_ControllerInfo arg0) const
	{
		return callObjectMethod(
			"onGetSession",
			"(Landroid/media/MediaSession2$ControllerInfo;)Landroid/media/MediaSession2;",
			arg0.object()
		);
	}
	android::media::MediaSession2Service_MediaNotification MediaSession2Service::onUpdateNotification(android::media::MediaSession2 arg0) const
	{
		return callObjectMethod(
			"onUpdateNotification",
			"(Landroid/media/MediaSession2;)Landroid/media/MediaSession2Service$MediaNotification;",
			arg0.object()
		);
	}
	void MediaSession2Service::removeSession(android::media::MediaSession2 arg0) const
	{
		callMethod<void>(
			"removeSession",
			"(Landroid/media/MediaSession2;)V",
			arg0.object()
		);
	}
} // namespace android::media

