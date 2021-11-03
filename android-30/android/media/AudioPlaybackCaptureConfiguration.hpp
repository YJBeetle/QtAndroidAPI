#pragma once

#include "../../JObject.hpp"

namespace android::media::projection
{
	class MediaProjection;
}

namespace android::media
{
	class AudioPlaybackCaptureConfiguration : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AudioPlaybackCaptureConfiguration(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AudioPlaybackCaptureConfiguration(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jintArray getExcludeUids();
		jintArray getExcludeUsages();
		jintArray getMatchingUids();
		jintArray getMatchingUsages();
		android::media::projection::MediaProjection getMediaProjection();
	};
} // namespace android::media

