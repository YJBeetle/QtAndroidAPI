#include "./projection/MediaProjection.hpp"
#include "./AudioPlaybackCaptureConfiguration.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	AudioPlaybackCaptureConfiguration::AudioPlaybackCaptureConfiguration(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jintArray AudioPlaybackCaptureConfiguration::getExcludeUids()
	{
		return callObjectMethod(
			"getExcludeUids",
			"()[I"
		).object<jintArray>();
	}
	jintArray AudioPlaybackCaptureConfiguration::getExcludeUsages()
	{
		return callObjectMethod(
			"getExcludeUsages",
			"()[I"
		).object<jintArray>();
	}
	jintArray AudioPlaybackCaptureConfiguration::getMatchingUids()
	{
		return callObjectMethod(
			"getMatchingUids",
			"()[I"
		).object<jintArray>();
	}
	jintArray AudioPlaybackCaptureConfiguration::getMatchingUsages()
	{
		return callObjectMethod(
			"getMatchingUsages",
			"()[I"
		).object<jintArray>();
	}
	android::media::projection::MediaProjection AudioPlaybackCaptureConfiguration::getMediaProjection()
	{
		return callObjectMethod(
			"getMediaProjection",
			"()Landroid/media/projection/MediaProjection;"
		);
	}
} // namespace android::media

