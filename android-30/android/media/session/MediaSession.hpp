#pragma once

#include "../../app/PendingIntent.def.hpp"
#include "../../content/Context.def.hpp"
#include "../AudioAttributes.def.hpp"
#include "../MediaMetadata.def.hpp"
#include "../VolumeProvider.def.hpp"
#include "./MediaController.def.hpp"
#include "./MediaSession_Callback.def.hpp"
#include "./MediaSession_Token.def.hpp"
#include "./MediaSessionManager_RemoteUserInfo.def.hpp"
#include "./PlaybackState.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../os/Handler.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./MediaSession.def.hpp"

namespace android::media::session
{
	// Fields
	inline jint MediaSession::FLAG_HANDLES_MEDIA_BUTTONS()
	{
		return getStaticField<jint>(
			"android.media.session.MediaSession",
			"FLAG_HANDLES_MEDIA_BUTTONS"
		);
	}
	inline jint MediaSession::FLAG_HANDLES_TRANSPORT_CONTROLS()
	{
		return getStaticField<jint>(
			"android.media.session.MediaSession",
			"FLAG_HANDLES_TRANSPORT_CONTROLS"
		);
	}
	
	// Constructors
	inline MediaSession::MediaSession(android::content::Context arg0, JString arg1)
		: JObject(
			"android.media.session.MediaSession",
			"(Landroid/content/Context;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	inline MediaSession::MediaSession(android::content::Context arg0, JString arg1, android::os::Bundle arg2)
		: JObject(
			"android.media.session.MediaSession",
			"(Landroid/content/Context;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		) {}
	
	// Methods
	inline android::media::session::MediaController MediaSession::getController() const
	{
		return callObjectMethod(
			"getController",
			"()Landroid/media/session/MediaController;"
		);
	}
	inline android::media::session::MediaSessionManager_RemoteUserInfo MediaSession::getCurrentControllerInfo() const
	{
		return callObjectMethod(
			"getCurrentControllerInfo",
			"()Landroid/media/session/MediaSessionManager$RemoteUserInfo;"
		);
	}
	inline android::media::session::MediaSession_Token MediaSession::getSessionToken() const
	{
		return callObjectMethod(
			"getSessionToken",
			"()Landroid/media/session/MediaSession$Token;"
		);
	}
	inline jboolean MediaSession::isActive() const
	{
		return callMethod<jboolean>(
			"isActive",
			"()Z"
		);
	}
	inline void MediaSession::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	inline void MediaSession::sendSessionEvent(JString arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"sendSessionEvent",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void MediaSession::setActive(jboolean arg0) const
	{
		callMethod<void>(
			"setActive",
			"(Z)V",
			arg0
		);
	}
	inline void MediaSession::setCallback(android::media::session::MediaSession_Callback arg0) const
	{
		callMethod<void>(
			"setCallback",
			"(Landroid/media/session/MediaSession$Callback;)V",
			arg0.object()
		);
	}
	inline void MediaSession::setCallback(android::media::session::MediaSession_Callback arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"setCallback",
			"(Landroid/media/session/MediaSession$Callback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void MediaSession::setExtras(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"setExtras",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	inline void MediaSession::setFlags(jint arg0) const
	{
		callMethod<void>(
			"setFlags",
			"(I)V",
			arg0
		);
	}
	inline void MediaSession::setMediaButtonReceiver(android::app::PendingIntent arg0) const
	{
		callMethod<void>(
			"setMediaButtonReceiver",
			"(Landroid/app/PendingIntent;)V",
			arg0.object()
		);
	}
	inline void MediaSession::setMetadata(android::media::MediaMetadata arg0) const
	{
		callMethod<void>(
			"setMetadata",
			"(Landroid/media/MediaMetadata;)V",
			arg0.object()
		);
	}
	inline void MediaSession::setPlaybackState(android::media::session::PlaybackState arg0) const
	{
		callMethod<void>(
			"setPlaybackState",
			"(Landroid/media/session/PlaybackState;)V",
			arg0.object()
		);
	}
	inline void MediaSession::setPlaybackToLocal(android::media::AudioAttributes arg0) const
	{
		callMethod<void>(
			"setPlaybackToLocal",
			"(Landroid/media/AudioAttributes;)V",
			arg0.object()
		);
	}
	inline void MediaSession::setPlaybackToRemote(android::media::VolumeProvider arg0) const
	{
		callMethod<void>(
			"setPlaybackToRemote",
			"(Landroid/media/VolumeProvider;)V",
			arg0.object()
		);
	}
	inline void MediaSession::setQueue(JObject arg0) const
	{
		callMethod<void>(
			"setQueue",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline void MediaSession::setQueueTitle(JString arg0) const
	{
		callMethod<void>(
			"setQueueTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void MediaSession::setRatingType(jint arg0) const
	{
		callMethod<void>(
			"setRatingType",
			"(I)V",
			arg0
		);
	}
	inline void MediaSession::setSessionActivity(android::app::PendingIntent arg0) const
	{
		callMethod<void>(
			"setSessionActivity",
			"(Landroid/app/PendingIntent;)V",
			arg0.object()
		);
	}
} // namespace android::media::session

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::session;
#endif
