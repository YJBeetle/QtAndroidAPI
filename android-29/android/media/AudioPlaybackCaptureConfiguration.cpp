#include "./projection/MediaProjection.hpp"
#include "./AudioPlaybackCaptureConfiguration.hpp"

namespace android::media
{
	// Fields
	
	AudioPlaybackCaptureConfiguration::AudioPlaybackCaptureConfiguration(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jintArray AudioPlaybackCaptureConfiguration::getExcludeUids()
	{
		return __thiz.callObjectMethod(
			"getExcludeUids",
			"()[I"
		).object<jintArray>();
	}
	jintArray AudioPlaybackCaptureConfiguration::getExcludeUsages()
	{
		return __thiz.callObjectMethod(
			"getExcludeUsages",
			"()[I"
		).object<jintArray>();
	}
	jintArray AudioPlaybackCaptureConfiguration::getMatchingUids()
	{
		return __thiz.callObjectMethod(
			"getMatchingUids",
			"()[I"
		).object<jintArray>();
	}
	jintArray AudioPlaybackCaptureConfiguration::getMatchingUsages()
	{
		return __thiz.callObjectMethod(
			"getMatchingUsages",
			"()[I"
		).object<jintArray>();
	}
	QAndroidJniObject AudioPlaybackCaptureConfiguration::getMediaProjection()
	{
		return __thiz.callObjectMethod(
			"getMediaProjection",
			"()Landroid/media/projection/MediaProjection;"
		);
	}
} // namespace android::media

