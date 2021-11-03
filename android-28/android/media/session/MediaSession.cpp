#include "../../app/PendingIntent.hpp"
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
#include "../../../JString.hpp"
#include "../../../JString.hpp"
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
	MediaSession::MediaSession(android::content::Context arg0, JString arg1)
		: JObject(
			"android.media.session.MediaSession",
			"(Landroid/content/Context;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	android::media::session::MediaController MediaSession::getController() const
	{
		return callObjectMethod(
			"getController",
			"()Landroid/media/session/MediaController;"
		);
	}
	android::media::session::MediaSessionManager_RemoteUserInfo MediaSession::getCurrentControllerInfo() const
	{
		return callObjectMethod(
			"getCurrentControllerInfo",
			"()Landroid/media/session/MediaSessionManager$RemoteUserInfo;"
		);
	}
	android::media::session::MediaSession_Token MediaSession::getSessionToken() const
	{
		return callObjectMethod(
			"getSessionToken",
			"()Landroid/media/session/MediaSession$Token;"
		);
	}
	jboolean MediaSession::isActive() const
	{
		return callMethod<jboolean>(
			"isActive",
			"()Z"
		);
	}
	void MediaSession::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	void MediaSession::sendSessionEvent(JString arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"sendSessionEvent",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void MediaSession::setActive(jboolean arg0) const
	{
		callMethod<void>(
			"setActive",
			"(Z)V",
			arg0
		);
	}
	void MediaSession::setCallback(android::media::session::MediaSession_Callback arg0) const
	{
		callMethod<void>(
			"setCallback",
			"(Landroid/media/session/MediaSession$Callback;)V",
			arg0.object()
		);
	}
	void MediaSession::setCallback(android::media::session::MediaSession_Callback arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"setCallback",
			"(Landroid/media/session/MediaSession$Callback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaSession::setExtras(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"setExtras",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void MediaSession::setFlags(jint arg0) const
	{
		callMethod<void>(
			"setFlags",
			"(I)V",
			arg0
		);
	}
	void MediaSession::setMediaButtonReceiver(android::app::PendingIntent arg0) const
	{
		callMethod<void>(
			"setMediaButtonReceiver",
			"(Landroid/app/PendingIntent;)V",
			arg0.object()
		);
	}
	void MediaSession::setMetadata(android::media::MediaMetadata arg0) const
	{
		callMethod<void>(
			"setMetadata",
			"(Landroid/media/MediaMetadata;)V",
			arg0.object()
		);
	}
	void MediaSession::setPlaybackState(android::media::session::PlaybackState arg0) const
	{
		callMethod<void>(
			"setPlaybackState",
			"(Landroid/media/session/PlaybackState;)V",
			arg0.object()
		);
	}
	void MediaSession::setPlaybackToLocal(android::media::AudioAttributes arg0) const
	{
		callMethod<void>(
			"setPlaybackToLocal",
			"(Landroid/media/AudioAttributes;)V",
			arg0.object()
		);
	}
	void MediaSession::setPlaybackToRemote(android::media::VolumeProvider arg0) const
	{
		callMethod<void>(
			"setPlaybackToRemote",
			"(Landroid/media/VolumeProvider;)V",
			arg0.object()
		);
	}
	void MediaSession::setQueue(JObject arg0) const
	{
		callMethod<void>(
			"setQueue",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void MediaSession::setQueueTitle(JString arg0) const
	{
		callMethod<void>(
			"setQueueTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void MediaSession::setRatingType(jint arg0) const
	{
		callMethod<void>(
			"setRatingType",
			"(I)V",
			arg0
		);
	}
	void MediaSession::setSessionActivity(android::app::PendingIntent arg0) const
	{
		callMethod<void>(
			"setSessionActivity",
			"(Landroid/app/PendingIntent;)V",
			arg0.object()
		);
	}
} // namespace android::media::session

