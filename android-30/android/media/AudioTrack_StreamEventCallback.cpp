#include "./AudioTrack.hpp"
#include "./AudioTrack_StreamEventCallback.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	AudioTrack_StreamEventCallback::AudioTrack_StreamEventCallback(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	AudioTrack_StreamEventCallback::AudioTrack_StreamEventCallback()
		: __JniBaseClass(
			"android.media.AudioTrack$StreamEventCallback",
			"()V"
		) {}
	
	// Methods
	void AudioTrack_StreamEventCallback::onDataRequest(android::media::AudioTrack arg0, jint arg1)
	{
		callMethod<void>(
			"onDataRequest",
			"(Landroid/media/AudioTrack;I)V",
			arg0.object(),
			arg1
		);
	}
	void AudioTrack_StreamEventCallback::onPresentationEnded(android::media::AudioTrack arg0)
	{
		callMethod<void>(
			"onPresentationEnded",
			"(Landroid/media/AudioTrack;)V",
			arg0.object()
		);
	}
	void AudioTrack_StreamEventCallback::onTearDown(android::media::AudioTrack arg0)
	{
		callMethod<void>(
			"onTearDown",
			"(Landroid/media/AudioTrack;)V",
			arg0.object()
		);
	}
} // namespace android::media

