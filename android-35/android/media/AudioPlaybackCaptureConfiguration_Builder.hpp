#pragma once

#include "./AudioPlaybackCaptureConfiguration.def.hpp"
#include "./projection/MediaProjection.def.hpp"
#include "./AudioPlaybackCaptureConfiguration_Builder.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline AudioPlaybackCaptureConfiguration_Builder::AudioPlaybackCaptureConfiguration_Builder(android::media::projection::MediaProjection arg0)
		: JObject(
			"android.media.AudioPlaybackCaptureConfiguration$Builder",
			"(Landroid/media/projection/MediaProjection;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::media::AudioPlaybackCaptureConfiguration_Builder AudioPlaybackCaptureConfiguration_Builder::addMatchingUid(jint arg0) const
	{
		return callObjectMethod(
			"addMatchingUid",
			"(I)Landroid/media/AudioPlaybackCaptureConfiguration$Builder;",
			arg0
		);
	}
	inline android::media::AudioPlaybackCaptureConfiguration_Builder AudioPlaybackCaptureConfiguration_Builder::addMatchingUsage(jint arg0) const
	{
		return callObjectMethod(
			"addMatchingUsage",
			"(I)Landroid/media/AudioPlaybackCaptureConfiguration$Builder;",
			arg0
		);
	}
	inline android::media::AudioPlaybackCaptureConfiguration AudioPlaybackCaptureConfiguration_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/AudioPlaybackCaptureConfiguration;"
		);
	}
	inline android::media::AudioPlaybackCaptureConfiguration_Builder AudioPlaybackCaptureConfiguration_Builder::excludeUid(jint arg0) const
	{
		return callObjectMethod(
			"excludeUid",
			"(I)Landroid/media/AudioPlaybackCaptureConfiguration$Builder;",
			arg0
		);
	}
	inline android::media::AudioPlaybackCaptureConfiguration_Builder AudioPlaybackCaptureConfiguration_Builder::excludeUsage(jint arg0) const
	{
		return callObjectMethod(
			"excludeUsage",
			"(I)Landroid/media/AudioPlaybackCaptureConfiguration$Builder;",
			arg0
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
