#include "../../JIntArray.hpp"
#include "./projection/MediaProjection.hpp"
#include "./AudioPlaybackCaptureConfiguration.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	AudioPlaybackCaptureConfiguration::AudioPlaybackCaptureConfiguration(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JIntArray AudioPlaybackCaptureConfiguration::getExcludeUids()
	{
		return callObjectMethod(
			"getExcludeUids",
			"()[I"
		);
	}
	JIntArray AudioPlaybackCaptureConfiguration::getExcludeUsages()
	{
		return callObjectMethod(
			"getExcludeUsages",
			"()[I"
		);
	}
	JIntArray AudioPlaybackCaptureConfiguration::getMatchingUids()
	{
		return callObjectMethod(
			"getMatchingUids",
			"()[I"
		);
	}
	JIntArray AudioPlaybackCaptureConfiguration::getMatchingUsages()
	{
		return callObjectMethod(
			"getMatchingUsages",
			"()[I"
		);
	}
	android::media::projection::MediaProjection AudioPlaybackCaptureConfiguration::getMediaProjection()
	{
		return callObjectMethod(
			"getMediaProjection",
			"()Landroid/media/projection/MediaProjection;"
		);
	}
} // namespace android::media

