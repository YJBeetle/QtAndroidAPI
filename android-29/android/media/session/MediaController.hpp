#pragma once

#include "../../app/PendingIntent.def.hpp"
#include "../../content/Context.def.hpp"
#include "../MediaMetadata.def.hpp"
#include "./MediaController_Callback.def.hpp"
#include "./MediaController_PlaybackInfo.def.hpp"
#include "./MediaController_TransportControls.def.hpp"
#include "./MediaSession_Token.def.hpp"
#include "./PlaybackState.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../os/Handler.def.hpp"
#include "../../os/ResultReceiver.def.hpp"
#include "../../view/KeyEvent.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./MediaController.def.hpp"

namespace android::media::session
{
	// Fields
	
	// Constructors
	inline MediaController::MediaController(android::content::Context arg0, android::media::session::MediaSession_Token arg1)
		: JObject(
			"android.media.session.MediaController",
			"(Landroid/content/Context;Landroid/media/session/MediaSession$Token;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline void MediaController::adjustVolume(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"adjustVolume",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline jboolean MediaController::dispatchMediaButtonEvent(android::view::KeyEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchMediaButtonEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	inline android::os::Bundle MediaController::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline jlong MediaController::getFlags() const
	{
		return callMethod<jlong>(
			"getFlags",
			"()J"
		);
	}
	inline android::media::MediaMetadata MediaController::getMetadata() const
	{
		return callObjectMethod(
			"getMetadata",
			"()Landroid/media/MediaMetadata;"
		);
	}
	inline JString MediaController::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline android::media::session::MediaController_PlaybackInfo MediaController::getPlaybackInfo() const
	{
		return callObjectMethod(
			"getPlaybackInfo",
			"()Landroid/media/session/MediaController$PlaybackInfo;"
		);
	}
	inline android::media::session::PlaybackState MediaController::getPlaybackState() const
	{
		return callObjectMethod(
			"getPlaybackState",
			"()Landroid/media/session/PlaybackState;"
		);
	}
	inline JObject MediaController::getQueue() const
	{
		return callObjectMethod(
			"getQueue",
			"()Ljava/util/List;"
		);
	}
	inline JString MediaController::getQueueTitle() const
	{
		return callObjectMethod(
			"getQueueTitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint MediaController::getRatingType() const
	{
		return callMethod<jint>(
			"getRatingType",
			"()I"
		);
	}
	inline android::app::PendingIntent MediaController::getSessionActivity() const
	{
		return callObjectMethod(
			"getSessionActivity",
			"()Landroid/app/PendingIntent;"
		);
	}
	inline android::os::Bundle MediaController::getSessionInfo() const
	{
		return callObjectMethod(
			"getSessionInfo",
			"()Landroid/os/Bundle;"
		);
	}
	inline android::media::session::MediaSession_Token MediaController::getSessionToken() const
	{
		return callObjectMethod(
			"getSessionToken",
			"()Landroid/media/session/MediaSession$Token;"
		);
	}
	inline android::media::session::MediaController_TransportControls MediaController::getTransportControls() const
	{
		return callObjectMethod(
			"getTransportControls",
			"()Landroid/media/session/MediaController$TransportControls;"
		);
	}
	inline void MediaController::registerCallback(android::media::session::MediaController_Callback arg0) const
	{
		callMethod<void>(
			"registerCallback",
			"(Landroid/media/session/MediaController$Callback;)V",
			arg0.object()
		);
	}
	inline void MediaController::registerCallback(android::media::session::MediaController_Callback arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"registerCallback",
			"(Landroid/media/session/MediaController$Callback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void MediaController::sendCommand(JString arg0, android::os::Bundle arg1, android::os::ResultReceiver arg2) const
	{
		callMethod<void>(
			"sendCommand",
			"(Ljava/lang/String;Landroid/os/Bundle;Landroid/os/ResultReceiver;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void MediaController::setVolumeTo(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setVolumeTo",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void MediaController::unregisterCallback(android::media::session::MediaController_Callback arg0) const
	{
		callMethod<void>(
			"unregisterCallback",
			"(Landroid/media/session/MediaController$Callback;)V",
			arg0.object()
		);
	}
} // namespace android::media::session

// Base class headers

