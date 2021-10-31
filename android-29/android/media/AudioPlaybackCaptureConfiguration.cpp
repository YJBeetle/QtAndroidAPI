#include "./projection/MediaProjection.hpp"
#include "./AudioPlaybackCaptureConfiguration.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	AudioPlaybackCaptureConfiguration::AudioPlaybackCaptureConfiguration(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
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

