#include "./AudioFormat.hpp"
#include "./AudioPlaybackCaptureConfiguration.hpp"
#include "./AudioRecord.hpp"
#include "./AudioRecord_Builder.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	AudioRecord_Builder::AudioRecord_Builder()
		: JObject(
			"android.media.AudioRecord$Builder",
			"()V"
		) {}
	
	// Methods
	android::media::AudioRecord AudioRecord_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/AudioRecord;"
		);
	}
	android::media::AudioRecord_Builder AudioRecord_Builder::setAudioFormat(android::media::AudioFormat arg0) const
	{
		return callObjectMethod(
			"setAudioFormat",
			"(Landroid/media/AudioFormat;)Landroid/media/AudioRecord$Builder;",
			arg0.object()
		);
	}
	android::media::AudioRecord_Builder AudioRecord_Builder::setAudioPlaybackCaptureConfig(android::media::AudioPlaybackCaptureConfiguration arg0) const
	{
		return callObjectMethod(
			"setAudioPlaybackCaptureConfig",
			"(Landroid/media/AudioPlaybackCaptureConfiguration;)Landroid/media/AudioRecord$Builder;",
			arg0.object()
		);
	}
	android::media::AudioRecord_Builder AudioRecord_Builder::setAudioSource(jint arg0) const
	{
		return callObjectMethod(
			"setAudioSource",
			"(I)Landroid/media/AudioRecord$Builder;",
			arg0
		);
	}
	android::media::AudioRecord_Builder AudioRecord_Builder::setBufferSizeInBytes(jint arg0) const
	{
		return callObjectMethod(
			"setBufferSizeInBytes",
			"(I)Landroid/media/AudioRecord$Builder;",
			arg0
		);
	}
	android::media::AudioRecord_Builder AudioRecord_Builder::setPrivacySensitive(jboolean arg0) const
	{
		return callObjectMethod(
			"setPrivacySensitive",
			"(Z)Landroid/media/AudioRecord$Builder;",
			arg0
		);
	}
} // namespace android::media

