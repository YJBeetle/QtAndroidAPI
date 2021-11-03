#include "../../content/Intent.hpp"
#include "../Rating.hpp"
#include "../../net/Uri.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/ResultReceiver.hpp"
#include "../../../JString.hpp"
#include "./MediaSession_Callback.hpp"

namespace android::media::session
{
	// Fields
	
	// QJniObject forward
	MediaSession_Callback::MediaSession_Callback(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	MediaSession_Callback::MediaSession_Callback()
		: JObject(
			"android.media.session.MediaSession$Callback",
			"()V"
		) {}
	
	// Methods
	void MediaSession_Callback::onCommand(JString arg0, android::os::Bundle arg1, android::os::ResultReceiver arg2)
	{
		callMethod<void>(
			"onCommand",
			"(Ljava/lang/String;Landroid/os/Bundle;Landroid/os/ResultReceiver;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	void MediaSession_Callback::onCustomAction(JString arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"onCustomAction",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void MediaSession_Callback::onFastForward()
	{
		callMethod<void>(
			"onFastForward",
			"()V"
		);
	}
	jboolean MediaSession_Callback::onMediaButtonEvent(android::content::Intent arg0)
	{
		return callMethod<jboolean>(
			"onMediaButtonEvent",
			"(Landroid/content/Intent;)Z",
			arg0.object()
		);
	}
	void MediaSession_Callback::onPause()
	{
		callMethod<void>(
			"onPause",
			"()V"
		);
	}
	void MediaSession_Callback::onPlay()
	{
		callMethod<void>(
			"onPlay",
			"()V"
		);
	}
	void MediaSession_Callback::onPlayFromMediaId(JString arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"onPlayFromMediaId",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void MediaSession_Callback::onPlayFromSearch(JString arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"onPlayFromSearch",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void MediaSession_Callback::onPlayFromUri(android::net::Uri arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"onPlayFromUri",
			"(Landroid/net/Uri;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaSession_Callback::onPrepare()
	{
		callMethod<void>(
			"onPrepare",
			"()V"
		);
	}
	void MediaSession_Callback::onPrepareFromMediaId(JString arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"onPrepareFromMediaId",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void MediaSession_Callback::onPrepareFromSearch(JString arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"onPrepareFromSearch",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void MediaSession_Callback::onPrepareFromUri(android::net::Uri arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"onPrepareFromUri",
			"(Landroid/net/Uri;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaSession_Callback::onRewind()
	{
		callMethod<void>(
			"onRewind",
			"()V"
		);
	}
	void MediaSession_Callback::onSeekTo(jlong arg0)
	{
		callMethod<void>(
			"onSeekTo",
			"(J)V",
			arg0
		);
	}
	void MediaSession_Callback::onSetRating(android::media::Rating arg0)
	{
		callMethod<void>(
			"onSetRating",
			"(Landroid/media/Rating;)V",
			arg0.object()
		);
	}
	void MediaSession_Callback::onSkipToNext()
	{
		callMethod<void>(
			"onSkipToNext",
			"()V"
		);
	}
	void MediaSession_Callback::onSkipToPrevious()
	{
		callMethod<void>(
			"onSkipToPrevious",
			"()V"
		);
	}
	void MediaSession_Callback::onSkipToQueueItem(jlong arg0)
	{
		callMethod<void>(
			"onSkipToQueueItem",
			"(J)V",
			arg0
		);
	}
	void MediaSession_Callback::onStop()
	{
		callMethod<void>(
			"onStop",
			"()V"
		);
	}
} // namespace android::media::session

