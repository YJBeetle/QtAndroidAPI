#pragma once

#include "../MediaMetadata.def.hpp"
#include "./MediaController_PlaybackInfo.def.hpp"
#include "./PlaybackState.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./MediaController_Callback.def.hpp"

namespace android::media::session
{
	// Fields
	
	// Constructors
	inline MediaController_Callback::MediaController_Callback()
		: JObject(
			"android.media.session.MediaController$Callback",
			"()V"
		) {}
	
	// Methods
	inline void MediaController_Callback::onAudioInfoChanged(android::media::session::MediaController_PlaybackInfo arg0) const
	{
		callMethod<void>(
			"onAudioInfoChanged",
			"(Landroid/media/session/MediaController$PlaybackInfo;)V",
			arg0.object()
		);
	}
	inline void MediaController_Callback::onExtrasChanged(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"onExtrasChanged",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	inline void MediaController_Callback::onMetadataChanged(android::media::MediaMetadata arg0) const
	{
		callMethod<void>(
			"onMetadataChanged",
			"(Landroid/media/MediaMetadata;)V",
			arg0.object()
		);
	}
	inline void MediaController_Callback::onPlaybackStateChanged(android::media::session::PlaybackState arg0) const
	{
		callMethod<void>(
			"onPlaybackStateChanged",
			"(Landroid/media/session/PlaybackState;)V",
			arg0.object()
		);
	}
	inline void MediaController_Callback::onQueueChanged(JObject arg0) const
	{
		callMethod<void>(
			"onQueueChanged",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline void MediaController_Callback::onQueueTitleChanged(JString arg0) const
	{
		callMethod<void>(
			"onQueueTitleChanged",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void MediaController_Callback::onSessionDestroyed() const
	{
		callMethod<void>(
			"onSessionDestroyed",
			"()V"
		);
	}
	inline void MediaController_Callback::onSessionEvent(JString arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"onSessionEvent",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
} // namespace android::media::session

// Base class headers

