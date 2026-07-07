#pragma once

#include "../content/Intent.def.hpp"
#include "./MediaSession2.def.hpp"
#include "./MediaSession2_ControllerInfo.def.hpp"
#include "./MediaSession2Service_MediaNotification.def.hpp"
#include "../../JString.hpp"
#include "./MediaSession2Service.def.hpp"

namespace android::media
{
	// Fields
	inline JString MediaSession2Service::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.media.MediaSession2Service",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline MediaSession2Service::MediaSession2Service()
		: android::app::Service(
			"android.media.MediaSession2Service",
			"()V"
		) {}
	
	// Methods
	inline void MediaSession2Service::addSession(android::media::MediaSession2 arg0) const
	{
		callMethod<void>(
			"addSession",
			"(Landroid/media/MediaSession2;)V",
			arg0.object()
		);
	}
	inline JObject MediaSession2Service::getSessions() const
	{
		return callObjectMethod(
			"getSessions",
			"()Ljava/util/List;"
		);
	}
	inline JObject MediaSession2Service::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	inline void MediaSession2Service::onCreate() const
	{
		callMethod<void>(
			"onCreate",
			"()V"
		);
	}
	inline void MediaSession2Service::onDestroy() const
	{
		callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
	inline android::media::MediaSession2 MediaSession2Service::onGetSession(android::media::MediaSession2_ControllerInfo arg0) const
	{
		return callObjectMethod(
			"onGetSession",
			"(Landroid/media/MediaSession2$ControllerInfo;)Landroid/media/MediaSession2;",
			arg0.object()
		);
	}
	inline android::media::MediaSession2Service_MediaNotification MediaSession2Service::onUpdateNotification(android::media::MediaSession2 arg0) const
	{
		return callObjectMethod(
			"onUpdateNotification",
			"(Landroid/media/MediaSession2;)Landroid/media/MediaSession2Service$MediaNotification;",
			arg0.object()
		);
	}
	inline void MediaSession2Service::removeSession(android::media::MediaSession2 arg0) const
	{
		callMethod<void>(
			"removeSession",
			"(Landroid/media/MediaSession2;)V",
			arg0.object()
		);
	}
} // namespace android::media

// Base class headers
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../app/Service.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
