#pragma once

#ifndef ANDROID_MEDIA_AUDIOPLAYBACKCAPTURECONFIGURATION
#define ANDROID_MEDIA_AUDIOPLAYBACKCAPTURECONFIGURATION

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::media::projection
{
	class MediaProjection;
}

namespace __jni_impl::android::media
{
	class AudioPlaybackCaptureConfiguration : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getMatchingUsages();
		QAndroidJniObject getMatchingUids();
		QAndroidJniObject getExcludeUsages();
		QAndroidJniObject getExcludeUids();
		QAndroidJniObject getMediaProjection();
	};
} // namespace __jni_impl::android::media

#include "projection/MediaProjection.hpp"

namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void AudioPlaybackCaptureConfiguration::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.AudioPlaybackCaptureConfiguration",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject AudioPlaybackCaptureConfiguration::getMatchingUsages()
	{
		return __thiz.callObjectMethod(
			"getMatchingUsages",
			"()[I");
	}
	QAndroidJniObject AudioPlaybackCaptureConfiguration::getMatchingUids()
	{
		return __thiz.callObjectMethod(
			"getMatchingUids",
			"()[I");
	}
	QAndroidJniObject AudioPlaybackCaptureConfiguration::getExcludeUsages()
	{
		return __thiz.callObjectMethod(
			"getExcludeUsages",
			"()[I");
	}
	QAndroidJniObject AudioPlaybackCaptureConfiguration::getExcludeUids()
	{
		return __thiz.callObjectMethod(
			"getExcludeUids",
			"()[I");
	}
	QAndroidJniObject AudioPlaybackCaptureConfiguration::getMediaProjection()
	{
		return __thiz.callObjectMethod(
			"getMediaProjection",
			"()Landroid/media/projection/MediaProjection;");
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class AudioPlaybackCaptureConfiguration : public __jni_impl::android::media::AudioPlaybackCaptureConfiguration
	{
	public:
		AudioPlaybackCaptureConfiguration(QAndroidJniObject obj) { __thiz = obj; }
		AudioPlaybackCaptureConfiguration()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_AUDIOPLAYBACKCAPTURECONFIGURATION

