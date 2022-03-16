#include "../../app/PendingIntent.hpp"
#include "../../content/Context.hpp"
#include "../MediaMetadata.hpp"
#include "./MediaController_Callback.hpp"
#include "./MediaController_PlaybackInfo.hpp"
#include "./MediaController_TransportControls.hpp"
#include "./MediaSession_Token.hpp"
#include "./PlaybackState.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/Handler.hpp"
#include "../../os/ResultReceiver.hpp"
#include "../../view/KeyEvent.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./MediaController.hpp"

namespace android::media::session
{
	// Fields
	
	// Constructors
	MediaController::MediaController(android::content::Context arg0, android::media::session::MediaSession_Token arg1)
		: JObject(
			"android.media.session.MediaController",
			"(Landroid/content/Context;Landroid/media/session/MediaSession$Token;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	void MediaController::adjustVolume(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"adjustVolume",
			"(II)V",
			arg0,
			arg1
		);
	}
	jboolean MediaController::dispatchMediaButtonEvent(android::view::KeyEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchMediaButtonEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	android::os::Bundle MediaController::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jlong MediaController::getFlags() const
	{
		return callMethod<jlong>(
			"getFlags",
			"()J"
		);
	}
	android::media::MediaMetadata MediaController::getMetadata() const
	{
		return callObjectMethod(
			"getMetadata",
			"()Landroid/media/MediaMetadata;"
		);
	}
	JString MediaController::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	android::media::session::MediaController_PlaybackInfo MediaController::getPlaybackInfo() const
	{
		return callObjectMethod(
			"getPlaybackInfo",
			"()Landroid/media/session/MediaController$PlaybackInfo;"
		);
	}
	android::media::session::PlaybackState MediaController::getPlaybackState() const
	{
		return callObjectMethod(
			"getPlaybackState",
			"()Landroid/media/session/PlaybackState;"
		);
	}
	JObject MediaController::getQueue() const
	{
		return callObjectMethod(
			"getQueue",
			"()Ljava/util/List;"
		);
	}
	JString MediaController::getQueueTitle() const
	{
		return callObjectMethod(
			"getQueueTitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint MediaController::getRatingType() const
	{
		return callMethod<jint>(
			"getRatingType",
			"()I"
		);
	}
	android::app::PendingIntent MediaController::getSessionActivity() const
	{
		return callObjectMethod(
			"getSessionActivity",
			"()Landroid/app/PendingIntent;"
		);
	}
	android::os::Bundle MediaController::getSessionInfo() const
	{
		return callObjectMethod(
			"getSessionInfo",
			"()Landroid/os/Bundle;"
		);
	}
	android::media::session::MediaSession_Token MediaController::getSessionToken() const
	{
		return callObjectMethod(
			"getSessionToken",
			"()Landroid/media/session/MediaSession$Token;"
		);
	}
	JString MediaController::getTag() const
	{
		return callObjectMethod(
			"getTag",
			"()Ljava/lang/String;"
		);
	}
	android::media::session::MediaController_TransportControls MediaController::getTransportControls() const
	{
		return callObjectMethod(
			"getTransportControls",
			"()Landroid/media/session/MediaController$TransportControls;"
		);
	}
	void MediaController::registerCallback(android::media::session::MediaController_Callback arg0) const
	{
		callMethod<void>(
			"registerCallback",
			"(Landroid/media/session/MediaController$Callback;)V",
			arg0.object()
		);
	}
	void MediaController::registerCallback(android::media::session::MediaController_Callback arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"registerCallback",
			"(Landroid/media/session/MediaController$Callback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaController::sendCommand(JString arg0, android::os::Bundle arg1, android::os::ResultReceiver arg2) const
	{
		callMethod<void>(
			"sendCommand",
			"(Ljava/lang/String;Landroid/os/Bundle;Landroid/os/ResultReceiver;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	void MediaController::setVolumeTo(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setVolumeTo",
			"(II)V",
			arg0,
			arg1
		);
	}
	void MediaController::unregisterCallback(android::media::session::MediaController_Callback arg0) const
	{
		callMethod<void>(
			"unregisterCallback",
			"(Landroid/media/session/MediaController$Callback;)V",
			arg0.object()
		);
	}
} // namespace android::media::session

