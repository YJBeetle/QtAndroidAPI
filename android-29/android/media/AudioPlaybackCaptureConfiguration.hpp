#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::media::projection
{
	class MediaProjection;
}

namespace android::media
{
	class AudioPlaybackCaptureConfiguration : public __JniBaseClass
	{
	public:
		// Fields
		
		AudioPlaybackCaptureConfiguration(QAndroidJniObject obj);
		// Constructors
		AudioPlaybackCaptureConfiguration() = default;
		
		// Methods
		jintArray getExcludeUids();
		jintArray getExcludeUsages();
		jintArray getMatchingUids();
		jintArray getMatchingUsages();
		QAndroidJniObject getMediaProjection();
	};
} // namespace android::media

