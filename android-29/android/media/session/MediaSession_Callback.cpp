#include "../../content/Intent.hpp"
#include "../Rating.hpp"
#include "../../net/Uri.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/ResultReceiver.hpp"
#include "./MediaSession_Callback.hpp"

namespace android::media::session
{
	// Fields
	
	MediaSession_Callback::MediaSession_Callback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaSession_Callback::MediaSession_Callback()
	{
		__thiz = QAndroidJniObject(
			"android.media.session.MediaSession$Callback",
			"()V"
		);
	}
	
	// Methods
	void MediaSession_Callback::onCommand(jstring arg0, android::os::Bundle arg1, android::os::ResultReceiver arg2)
	{
		__thiz.callMethod<void>(
			"onCommand",
			"(Ljava/lang/String;Landroid/os/Bundle;Landroid/os/ResultReceiver;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void MediaSession_Callback::onCustomAction(jstring arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"onCustomAction",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void MediaSession_Callback::onFastForward()
	{
		__thiz.callMethod<void>(
			"onFastForward",
			"()V"
		);
	}
	jboolean MediaSession_Callback::onMediaButtonEvent(android::content::Intent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onMediaButtonEvent",
			"(Landroid/content/Intent;)Z",
			arg0.__jniObject().object()
		);
	}
	void MediaSession_Callback::onPause()
	{
		__thiz.callMethod<void>(
			"onPause",
			"()V"
		);
	}
	void MediaSession_Callback::onPlay()
	{
		__thiz.callMethod<void>(
			"onPlay",
			"()V"
		);
	}
	void MediaSession_Callback::onPlayFromMediaId(jstring arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"onPlayFromMediaId",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void MediaSession_Callback::onPlayFromSearch(jstring arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"onPlayFromSearch",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void MediaSession_Callback::onPlayFromUri(android::net::Uri arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"onPlayFromUri",
			"(Landroid/net/Uri;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaSession_Callback::onPrepare()
	{
		__thiz.callMethod<void>(
			"onPrepare",
			"()V"
		);
	}
	void MediaSession_Callback::onPrepareFromMediaId(jstring arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"onPrepareFromMediaId",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void MediaSession_Callback::onPrepareFromSearch(jstring arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"onPrepareFromSearch",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void MediaSession_Callback::onPrepareFromUri(android::net::Uri arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"onPrepareFromUri",
			"(Landroid/net/Uri;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaSession_Callback::onRewind()
	{
		__thiz.callMethod<void>(
			"onRewind",
			"()V"
		);
	}
	void MediaSession_Callback::onSeekTo(jlong arg0)
	{
		__thiz.callMethod<void>(
			"onSeekTo",
			"(J)V",
			arg0
		);
	}
	void MediaSession_Callback::onSetPlaybackSpeed(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"onSetPlaybackSpeed",
			"(F)V",
			arg0
		);
	}
	void MediaSession_Callback::onSetRating(android::media::Rating arg0)
	{
		__thiz.callMethod<void>(
			"onSetRating",
			"(Landroid/media/Rating;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaSession_Callback::onSkipToNext()
	{
		__thiz.callMethod<void>(
			"onSkipToNext",
			"()V"
		);
	}
	void MediaSession_Callback::onSkipToPrevious()
	{
		__thiz.callMethod<void>(
			"onSkipToPrevious",
			"()V"
		);
	}
	void MediaSession_Callback::onSkipToQueueItem(jlong arg0)
	{
		__thiz.callMethod<void>(
			"onSkipToQueueItem",
			"(J)V",
			arg0
		);
	}
	void MediaSession_Callback::onStop()
	{
		__thiz.callMethod<void>(
			"onStop",
			"()V"
		);
	}
} // namespace android::media::session

