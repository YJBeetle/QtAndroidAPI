#include "./AudioPlaybackCaptureConfiguration.hpp"
#include "./projection/MediaProjection.hpp"
#include "./AudioPlaybackCaptureConfiguration_Builder.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	AudioPlaybackCaptureConfiguration_Builder::AudioPlaybackCaptureConfiguration_Builder(android::media::projection::MediaProjection arg0)
		: JObject(
			"android.media.AudioPlaybackCaptureConfiguration$Builder",
			"(Landroid/media/projection/MediaProjection;)V",
			arg0.object()
		) {}
	
	// Methods
	android::media::AudioPlaybackCaptureConfiguration_Builder AudioPlaybackCaptureConfiguration_Builder::addMatchingUid(jint arg0) const
	{
		return callObjectMethod(
			"addMatchingUid",
			"(I)Landroid/media/AudioPlaybackCaptureConfiguration$Builder;",
			arg0
		);
	}
	android::media::AudioPlaybackCaptureConfiguration_Builder AudioPlaybackCaptureConfiguration_Builder::addMatchingUsage(jint arg0) const
	{
		return callObjectMethod(
			"addMatchingUsage",
			"(I)Landroid/media/AudioPlaybackCaptureConfiguration$Builder;",
			arg0
		);
	}
	android::media::AudioPlaybackCaptureConfiguration AudioPlaybackCaptureConfiguration_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/AudioPlaybackCaptureConfiguration;"
		);
	}
	android::media::AudioPlaybackCaptureConfiguration_Builder AudioPlaybackCaptureConfiguration_Builder::excludeUid(jint arg0) const
	{
		return callObjectMethod(
			"excludeUid",
			"(I)Landroid/media/AudioPlaybackCaptureConfiguration$Builder;",
			arg0
		);
	}
	android::media::AudioPlaybackCaptureConfiguration_Builder AudioPlaybackCaptureConfiguration_Builder::excludeUsage(jint arg0) const
	{
		return callObjectMethod(
			"excludeUsage",
			"(I)Landroid/media/AudioPlaybackCaptureConfiguration$Builder;",
			arg0
		);
	}
} // namespace android::media

