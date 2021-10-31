#include "../MediaMetadata.hpp"
#include "./MediaController_PlaybackInfo.hpp"
#include "./PlaybackState.hpp"
#include "../../os/Bundle.hpp"
#include "./MediaController_Callback.hpp"

namespace android::media::session
{
	// Fields
	
	MediaController_Callback::MediaController_Callback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaController_Callback::MediaController_Callback()
	{
		__thiz = QAndroidJniObject(
			"android.media.session.MediaController$Callback",
			"()V"
		);
	}
	
	// Methods
	void MediaController_Callback::onAudioInfoChanged(android::media::session::MediaController_PlaybackInfo arg0)
	{
		__thiz.callMethod<void>(
			"onAudioInfoChanged",
			"(Landroid/media/session/MediaController$PlaybackInfo;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaController_Callback::onExtrasChanged(android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"onExtrasChanged",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaController_Callback::onMetadataChanged(android::media::MediaMetadata arg0)
	{
		__thiz.callMethod<void>(
			"onMetadataChanged",
			"(Landroid/media/MediaMetadata;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaController_Callback::onPlaybackStateChanged(android::media::session::PlaybackState arg0)
	{
		__thiz.callMethod<void>(
			"onPlaybackStateChanged",
			"(Landroid/media/session/PlaybackState;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaController_Callback::onQueueChanged(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onQueueChanged",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaController_Callback::onQueueTitleChanged(jstring arg0)
	{
		__thiz.callMethod<void>(
			"onQueueTitleChanged",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void MediaController_Callback::onSessionDestroyed()
	{
		__thiz.callMethod<void>(
			"onSessionDestroyed",
			"()V"
		);
	}
	void MediaController_Callback::onSessionEvent(jstring arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"onSessionEvent",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
} // namespace android::media::session

