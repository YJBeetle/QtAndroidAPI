#pragma once

#include "../../JObject.hpp"

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
	class AudioPlaybackCaptureConfiguration_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AudioPlaybackCaptureConfiguration_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
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

