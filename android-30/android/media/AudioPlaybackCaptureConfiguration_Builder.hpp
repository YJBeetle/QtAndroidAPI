#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::media
{
	class AudioPlaybackCaptureConfiguration;
}
namespace android::media::projection
{
	class MediaProjection;
}

namespace android::media
{
	class AudioPlaybackCaptureConfiguration_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AudioPlaybackCaptureConfiguration_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AudioPlaybackCaptureConfiguration_Builder(QJniObject obj);
		
		// Constructors
		AudioPlaybackCaptureConfiguration_Builder(android::media::projection::MediaProjection arg0);
		
		// Methods
		android::media::AudioPlaybackCaptureConfiguration_Builder addMatchingUid(jint arg0);
		android::media::AudioPlaybackCaptureConfiguration_Builder addMatchingUsage(jint arg0);
		android::media::AudioPlaybackCaptureConfiguration build();
		android::media::AudioPlaybackCaptureConfiguration_Builder excludeUid(jint arg0);
		android::media::AudioPlaybackCaptureConfiguration_Builder excludeUsage(jint arg0);
	};
} // namespace android::media

