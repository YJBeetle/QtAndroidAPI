#include "../MediaMetadata.hpp"
#include "./MediaController_PlaybackInfo.hpp"
#include "./PlaybackState.hpp"
#include "../../os/Bundle.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./MediaController_Callback.hpp"

namespace android::media::session
{
	// Fields
	
	// QJniObject forward
	MediaController_Callback::MediaController_Callback(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	MediaController_Callback::MediaController_Callback()
		: JObject(
			"android.media.session.MediaController$Callback",
			"()V"
		) {}
	
	// Methods
	void MediaController_Callback::onAudioInfoChanged(android::media::session::MediaController_PlaybackInfo arg0) const
	{
		callMethod<void>(
			"onAudioInfoChanged",
			"(Landroid/media/session/MediaController$PlaybackInfo;)V",
			arg0.object()
		);
	}
	void MediaController_Callback::onExtrasChanged(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"onExtrasChanged",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void MediaController_Callback::onMetadataChanged(android::media::MediaMetadata arg0) const
	{
		callMethod<void>(
			"onMetadataChanged",
			"(Landroid/media/MediaMetadata;)V",
			arg0.object()
		);
	}
	void MediaController_Callback::onPlaybackStateChanged(android::media::session::PlaybackState arg0) const
	{
		callMethod<void>(
			"onPlaybackStateChanged",
			"(Landroid/media/session/PlaybackState;)V",
			arg0.object()
		);
	}
	void MediaController_Callback::onQueueChanged(JObject arg0) const
	{
		callMethod<void>(
			"onQueueChanged",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void MediaController_Callback::onQueueTitleChanged(JString arg0) const
	{
		callMethod<void>(
			"onQueueTitleChanged",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void MediaController_Callback::onSessionDestroyed() const
	{
		callMethod<void>(
			"onSessionDestroyed",
			"()V"
		);
	}
	void MediaController_Callback::onSessionEvent(JString arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"onSessionEvent",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
} // namespace android::media::session

