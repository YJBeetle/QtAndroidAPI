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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AudioPlaybackCaptureConfiguration(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AudioPlaybackCaptureConfiguration(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JIntArray getExcludeUids() const;
		JIntArray getExcludeUsages() const;
		JIntArray getMatchingUids() const;
		JIntArray getMatchingUsages() const;
		android::media::projection::MediaProjection getMediaProjection() const;
	};
} // namespace android::media

