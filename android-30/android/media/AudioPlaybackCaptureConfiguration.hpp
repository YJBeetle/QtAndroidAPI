#pragma once

#include "../../JObject.hpp"

class JIntArray;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit AudioPlaybackCaptureConfiguration(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AudioPlaybackCaptureConfiguration(QJniObject obj);
		
		// Constructors
		
		// Methods
		JIntArray getExcludeUids();
		JIntArray getExcludeUsages();
		JIntArray getMatchingUids();
		JIntArray getMatchingUsages();
		android::media::projection::MediaProjection getMediaProjection();
	};
} // namespace android::media

