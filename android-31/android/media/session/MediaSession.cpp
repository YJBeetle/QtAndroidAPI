#include "../../app/PendingIntent.hpp"
#include "../../content/ComponentName.hpp"
#include "../../content/Context.hpp"
#include "../AudioAttributes.hpp"
#include "../MediaMetadata.hpp"
#include "../VolumeProvider.hpp"
#include "./MediaController.hpp"
#include "./MediaSession_Callback.hpp"
#include "./MediaSession_Token.hpp"
#include "./MediaSessionManager_RemoteUserInfo.hpp"
#include "./PlaybackState.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/Handler.hpp"
#include "./MediaSession.hpp"

namespace android::media::session
{
	// Fields
	jint MediaSession::FLAG_HANDLES_MEDIA_BUTTONS()
	{
		return getStaticField<jint>(
			"android.media.session.MediaSession",
			"FLAG_HANDLES_MEDIA_BUTTONS"
		);
	}
	jint MediaSession::FLAG_HANDLES_TRANSPORT_CONTROLS()
	{
		return getStaticField<jint>(
			"android.media.session.MediaSession",
			"FLAG_HANDLES_TRANSPORT_CONTROLS"
		);
	}
	
	// QJniObject forward
	MediaSession::MediaSession(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	MediaSession::MediaSession(android::content::Context arg0, jstring arg1)
		: JObject(
			"android.media.session.MediaSession",
			"(Landroid/content/Context;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		) {}
	MediaSession::MediaSession(android::content::Context arg0, jstring arg1, android::os::Bundle arg2)
		: JObject(
			"android.media.session.MediaSession",
			"(Landroid/content/Context;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1,
			arg2.object()
		) {}
	
	// Methods
	android::media::session::MediaController MediaSession::getController()
	{
		return callObjectMethod(
			"getController",
			"()Landroid/media/session/MediaController;"
		);
	}
	android::media::session::MediaSessionManager_RemoteUserInfo MediaSession::getCurrentControllerInfo()
	{
		return callObjectMethod(
			"getCurrentControllerInfo",
			"()Landroid/media/session/MediaSessionManager$RemoteUserInfo;"
		);
	}
	android::media::session::MediaSession_Token MediaSession::getSessionToken()
	{
		return callObjectMethod(
			"getSessionToken",
			"()Landroid/media/session/MediaSession$Token;"
		);
	}
	jboolean MediaSession::isActive()
	{
		return callMethod<jboolean>(
			"isActive",
			"()Z"
		);
	}
	void MediaSession::release()
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	void MediaSession::sendSessionEvent(jstring arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"sendSessionEvent",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.object()
		);
	}
	void MediaSession::setActive(jboolean arg0)
	{
		callMethod<void>(
			"setActive",
			"(Z)V",
			arg0
		);
	}
	void MediaSession::setCallback(android::media::session::MediaSession_Callback arg0)
	{
		callMethod<void>(
			"setCallback",
			"(Landroid/media/session/MediaSession$Callback;)V",
			arg0.object()
		);
	}
	void MediaSession::setCallback(android::media::session::MediaSession_Callback arg0, android::os::Handler arg1)
	{
		callMethod<void>(
			"setCallback",
			"(Landroid/media/session/MediaSession$Callback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaSession::setExtras(android::os::Bundle arg0)
	{
		callMethod<void>(
			"setExtras",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void MediaSession::setFlags(jint arg0)
	{
		callMethod<void>(
			"setFlags",
			"(I)V",
			arg0
		);
	}
	void MediaSession::setMediaButtonBroadcastReceiver(android::content::ComponentName arg0)
	{
		callMethod<void>(
			"setMediaButtonBroadcastReceiver",
			"(Landroid/content/ComponentName;)V",
			arg0.object()
		);
	}
	void MediaSession::setMediaButtonReceiver(android::app::PendingIntent arg0)
	{
		callMethod<void>(
			"setMediaButtonReceiver",
			"(Landroid/app/PendingIntent;)V",
			arg0.object()
		);
	}
	void MediaSession::setMetadata(android::media::MediaMetadata arg0)
	{
		callMethod<void>(
			"setMetadata",
			"(Landroid/media/MediaMetadata;)V",
			arg0.object()
		);
	}
	void MediaSession::setPlaybackState(android::media::session::PlaybackState arg0)
	{
		callMethod<void>(
			"setPlaybackState",
			"(Landroid/media/session/PlaybackState;)V",
			arg0.object()
		);
	}
	void MediaSession::setPlaybackToLocal(android::media::AudioAttributes arg0)
	{
		callMethod<void>(
			"setPlaybackToLocal",
			"(Landroid/media/AudioAttributes;)V",
			arg0.object()
		);
	}
	void MediaSession::setPlaybackToRemote(android::media::VolumeProvider arg0)
	{
		callMethod<void>(
			"setPlaybackToRemote",
			"(Landroid/media/VolumeProvider;)V",
			arg0.object()
		);
	}
	void MediaSession::setQueue(JObject arg0)
	{
		callMethod<void>(
			"setQueue",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void MediaSession::setQueueTitle(jstring arg0)
	{
		callMethod<void>(
			"setQueueTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void MediaSession::setRatingType(jint arg0)
	{
		callMethod<void>(
			"setRatingType",
			"(I)V",
			arg0
		);
	}
	void MediaSession::setSessionActivity(android::app::PendingIntent arg0)
	{
		callMethod<void>(
			"setSessionActivity",
			"(Landroid/app/PendingIntent;)V",
			arg0.object()
		);
	}
} // namespace android::media::session

