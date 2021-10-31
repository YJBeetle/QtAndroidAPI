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
	
	MediaController::MediaController(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaController::MediaController(android::content::Context arg0, android::media::session::MediaSession_Token arg1)
	{
		__thiz = QAndroidJniObject(
			"android.media.session.MediaController",
			"(Landroid/content/Context;Landroid/media/session/MediaSession$Token;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	void MediaController::adjustVolume(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"adjustVolume",
			"(II)V",
			arg0,
			arg1
		);
	}
	jboolean MediaController::dispatchMediaButtonEvent(android::view::KeyEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchMediaButtonEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MediaController::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jlong MediaController::getFlags()
	{
		return __thiz.callMethod<jlong>(
			"getFlags",
			"()J"
		);
	}
	QAndroidJniObject MediaController::getMetadata()
	{
		return __thiz.callObjectMethod(
			"getMetadata",
			"()Landroid/media/MediaMetadata;"
		);
	}
	jstring MediaController::getPackageName()
	{
		return __thiz.callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject MediaController::getPlaybackInfo()
	{
		return __thiz.callObjectMethod(
			"getPlaybackInfo",
			"()Landroid/media/session/MediaController$PlaybackInfo;"
		);
	}
	QAndroidJniObject MediaController::getPlaybackState()
	{
		return __thiz.callObjectMethod(
			"getPlaybackState",
			"()Landroid/media/session/PlaybackState;"
		);
	}
	QAndroidJniObject MediaController::getQueue()
	{
		return __thiz.callObjectMethod(
			"getQueue",
			"()Ljava/util/List;"
		);
	}
	jstring MediaController::getQueueTitle()
	{
		return __thiz.callObjectMethod(
			"getQueueTitle",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint MediaController::getRatingType()
	{
		return __thiz.callMethod<jint>(
			"getRatingType",
			"()I"
		);
	}
	QAndroidJniObject MediaController::getSessionActivity()
	{
		return __thiz.callObjectMethod(
			"getSessionActivity",
			"()Landroid/app/PendingIntent;"
		);
	}
	QAndroidJniObject MediaController::getSessionInfo()
	{
		return __thiz.callObjectMethod(
			"getSessionInfo",
			"()Landroid/os/Bundle;"
		);
	}
	QAndroidJniObject MediaController::getSessionToken()
	{
		return __thiz.callObjectMethod(
			"getSessionToken",
			"()Landroid/media/session/MediaSession$Token;"
		);
	}
	QAndroidJniObject MediaController::getTransportControls()
	{
		return __thiz.callObjectMethod(
			"getTransportControls",
			"()Landroid/media/session/MediaController$TransportControls;"
		);
	}
	void MediaController::registerCallback(android::media::session::MediaController_Callback arg0)
	{
		__thiz.callMethod<void>(
			"registerCallback",
			"(Landroid/media/session/MediaController$Callback;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaController::registerCallback(android::media::session::MediaController_Callback arg0, android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"registerCallback",
			"(Landroid/media/session/MediaController$Callback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaController::sendCommand(jstring arg0, android::os::Bundle arg1, android::os::ResultReceiver arg2)
	{
		__thiz.callMethod<void>(
			"sendCommand",
			"(Ljava/lang/String;Landroid/os/Bundle;Landroid/os/ResultReceiver;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void MediaController::setVolumeTo(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setVolumeTo",
			"(II)V",
			arg0,
			arg1
		);
	}
	void MediaController::unregisterCallback(android::media::session::MediaController_Callback arg0)
	{
		__thiz.callMethod<void>(
			"unregisterCallback",
			"(Landroid/media/session/MediaController$Callback;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::media::session

