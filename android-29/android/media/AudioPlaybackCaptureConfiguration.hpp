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
		
		// QJniObject forward
		template<typename ...Ts> explicit AudioPlaybackCaptureConfiguration(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AudioPlaybackCaptureConfiguration(QJniObject obj);
		
		// Constructors
		
		// Methods
		jintArray getExcludeUids();
		jintArray getExcludeUsages();
		jintArray getMatchingUids();
		jintArray getMatchingUsages();
		android::media::projection::MediaProjection getMediaProjection();
	};
} // namespace android::media

