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
#include "./MediaController.hpp"

namespace android::media::session
{
	// Fields
	
	// QJniObject forward
	MediaController::MediaController(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MediaController::MediaController(android::content::Context arg0, android::media::session::MediaSession_Token arg1)
		: __JniBaseClass(
			"android.media.session.MediaController",
			"(Landroid/content/Context;Landroid/media/session/MediaSession$Token;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	void MediaController::adjustVolume(jint arg0, jint arg1)
	{
		callMethod<void>(
			"adjustVolume",
			"(II)V",
			arg0,
			arg1
		);
	}
	jboolean MediaController::dispatchMediaButtonEvent(android::view::KeyEvent arg0)
	{
		return callMethod<jboolean>(
			"dispatchMediaButtonEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	android::os::Bundle MediaController::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jlong MediaController::getFlags()
	{
		return callMethod<jlong>(
			"getFlags",
			"()J"
		);
	}
	android::media::MediaMetadata MediaController::getMetadata()
	{
		return callObjectMethod(
			"getMetadata",
			"()Landroid/media/MediaMetadata;"
		);
	}
	jstring MediaController::getPackageName()
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::media::session::MediaController_PlaybackInfo MediaController::getPlaybackInfo()
	{
		return callObjectMethod(
			"getPlaybackInfo",
			"()Landroid/media/session/MediaController$PlaybackInfo;"
		);
	}
	android::media::session::PlaybackState MediaController::getPlaybackState()
	{
		return callObjectMethod(
			"getPlaybackState",
			"()Landroid/media/session/PlaybackState;"
		);
	}
	__JniBaseClass MediaController::getQueue()
	{
		return callObjectMethod(
			"getQueue",
			"()Ljava/util/List;"
		);
	}
	jstring MediaController::getQueueTitle()
	{
		return callObjectMethod(
			"getQueueTitle",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint MediaController::getRatingType()
	{
		return callMethod<jint>(
			"getRatingType",
			"()I"
		);
	}
	android::app::PendingIntent MediaController::getSessionActivity()
	{
		return callObjectMethod(
			"getSessionActivity",
			"()Landroid/app/PendingIntent;"
		);
	}
	android::media::session::MediaSession_Token MediaController::getSessionToken()
	{
		return callObjectMethod(
			"getSessionToken",
			"()Landroid/media/session/MediaSession$Token;"
		);
	}
	android::media::session::MediaController_TransportControls MediaController::getTransportControls()
	{
		return callObjectMethod(
			"getTransportControls",
			"()Landroid/media/session/MediaController$TransportControls;"
		);
	}
	void MediaController::registerCallback(android::media::session::MediaController_Callback arg0)
	{
		callMethod<void>(
			"registerCallback",
			"(Landroid/media/session/MediaController$Callback;)V",
			arg0.object()
		);
	}
	void MediaController::registerCallback(android::media::session::MediaController_Callback arg0, android::os::Handler arg1)
	{
		callMethod<void>(
			"registerCallback",
			"(Landroid/media/session/MediaController$Callback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaController::sendCommand(jstring arg0, android::os::Bundle arg1, android::os::ResultReceiver arg2)
	{
		callMethod<void>(
			"sendCommand",
			"(Ljava/lang/String;Landroid/os/Bundle;Landroid/os/ResultReceiver;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	void MediaController::setVolumeTo(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setVolumeTo",
			"(II)V",
			arg0,
			arg1
		);
	}
	void MediaController::unregisterCallback(android::media::session::MediaController_Callback arg0)
	{
		callMethod<void>(
			"unregisterCallback",
			"(Landroid/media/session/MediaController$Callback;)V",
			arg0.object()
		);
	}
} // namespace android::media::session

