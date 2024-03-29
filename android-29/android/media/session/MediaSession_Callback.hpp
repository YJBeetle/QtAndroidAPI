#pragma once

#include "../../content/Intent.def.hpp"
#include "../Rating.def.hpp"
#include "../../net/Uri.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../os/ResultReceiver.def.hpp"
#include "../../../JString.hpp"
#include "./MediaSession_Callback.def.hpp"

namespace android::media::session
{
	// Fields
	
	// Constructors
	inline MediaSession_Callback::MediaSession_Callback()
		: JObject(
			"android.media.session.MediaSession$Callback",
			"()V"
		) {}
	
	// Methods
	inline void MediaSession_Callback::onCommand(JString arg0, android::os::Bundle arg1, android::os::ResultReceiver arg2) const
	{
		callMethod<void>(
			"onCommand",
			"(Ljava/lang/String;Landroid/os/Bundle;Landroid/os/ResultReceiver;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void MediaSession_Callback::onCustomAction(JString arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"onCustomAction",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void MediaSession_Callback::onFastForward() const
	{
		callMethod<void>(
			"onFastForward",
			"()V"
		);
	}
	inline jboolean MediaSession_Callback::onMediaButtonEvent(android::content::Intent arg0) const
	{
		return callMethod<jboolean>(
			"onMediaButtonEvent",
			"(Landroid/content/Intent;)Z",
			arg0.object()
		);
	}
	inline void MediaSession_Callback::onPause() const
	{
		callMethod<void>(
			"onPause",
			"()V"
		);
	}
	inline void MediaSession_Callback::onPlay() const
	{
		callMethod<void>(
			"onPlay",
			"()V"
		);
	}
	inline void MediaSession_Callback::onPlayFromMediaId(JString arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"onPlayFromMediaId",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void MediaSession_Callback::onPlayFromSearch(JString arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"onPlayFromSearch",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void MediaSession_Callback::onPlayFromUri(android::net::Uri arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"onPlayFromUri",
			"(Landroid/net/Uri;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void MediaSession_Callback::onPrepare() const
	{
		callMethod<void>(
			"onPrepare",
			"()V"
		);
	}
	inline void MediaSession_Callback::onPrepareFromMediaId(JString arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"onPrepareFromMediaId",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void MediaSession_Callback::onPrepareFromSearch(JString arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"onPrepareFromSearch",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void MediaSession_Callback::onPrepareFromUri(android::net::Uri arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"onPrepareFromUri",
			"(Landroid/net/Uri;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void MediaSession_Callback::onRewind() const
	{
		callMethod<void>(
			"onRewind",
			"()V"
		);
	}
	inline void MediaSession_Callback::onSeekTo(jlong arg0) const
	{
		callMethod<void>(
			"onSeekTo",
			"(J)V",
			arg0
		);
	}
	inline void MediaSession_Callback::onSetPlaybackSpeed(jfloat arg0) const
	{
		callMethod<void>(
			"onSetPlaybackSpeed",
			"(F)V",
			arg0
		);
	}
	inline void MediaSession_Callback::onSetRating(android::media::Rating arg0) const
	{
		callMethod<void>(
			"onSetRating",
			"(Landroid/media/Rating;)V",
			arg0.object()
		);
	}
	inline void MediaSession_Callback::onSkipToNext() const
	{
		callMethod<void>(
			"onSkipToNext",
			"()V"
		);
	}
	inline void MediaSession_Callback::onSkipToPrevious() const
	{
		callMethod<void>(
			"onSkipToPrevious",
			"()V"
		);
	}
	inline void MediaSession_Callback::onSkipToQueueItem(jlong arg0) const
	{
		callMethod<void>(
			"onSkipToQueueItem",
			"(J)V",
			arg0
		);
	}
	inline void MediaSession_Callback::onStop() const
	{
		callMethod<void>(
			"onStop",
			"()V"
		);
	}
} // namespace android::media::session

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::session;
#endif
