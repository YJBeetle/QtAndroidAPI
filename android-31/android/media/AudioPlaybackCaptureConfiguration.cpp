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
	JIntArray AudioPlaybackCaptureConfiguration::getExcludeUids() const
	{
		return callObjectMethod(
			"getExcludeUids",
			"()[I"
		);
	}
	JIntArray AudioPlaybackCaptureConfiguration::getExcludeUsages() const
	{
		return callObjectMethod(
			"getExcludeUsages",
			"()[I"
		);
	}
	JIntArray AudioPlaybackCaptureConfiguration::getMatchingUids() const
	{
		return callObjectMethod(
			"getMatchingUids",
			"()[I"
		);
	}
	JIntArray AudioPlaybackCaptureConfiguration::getMatchingUsages() const
	{
		return callObjectMethod(
			"getMatchingUsages",
			"()[I"
		);
	}
	android::media::projection::MediaProjection AudioPlaybackCaptureConfiguration::getMediaProjection() const
	{
		return callObjectMethod(
			"getMediaProjection",
			"()Landroid/media/projection/MediaProjection;"
		);
	}
} // namespace android::media

