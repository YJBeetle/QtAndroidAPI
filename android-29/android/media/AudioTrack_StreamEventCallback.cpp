#include "./AudioTrack.hpp"
#include "./AudioTrack_StreamEventCallback.hpp"

namespace android::media
{
	// Fields
	
	AudioTrack_StreamEventCallback::AudioTrack_StreamEventCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AudioTrack_StreamEventCallback::AudioTrack_StreamEventCallback()
	{
		__thiz = QAndroidJniObject(
			"android.media.AudioTrack$StreamEventCallback",
			"()V"
		);
	}
	
	// Methods
	void AudioTrack_StreamEventCallback::onDataRequest(android::media::AudioTrack arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onDataRequest",
			"(Landroid/media/AudioTrack;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void AudioTrack_StreamEventCallback::onPresentationEnded(android::media::AudioTrack arg0)
	{
		__thiz.callMethod<void>(
			"onPresentationEnded",
			"(Landroid/media/AudioTrack;)V",
			arg0.__jniObject().object()
		);
	}
	void AudioTrack_StreamEventCallback::onTearDown(android::media::AudioTrack arg0)
	{
		__thiz.callMethod<void>(
			"onTearDown",
			"(Landroid/media/AudioTrack;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::media

