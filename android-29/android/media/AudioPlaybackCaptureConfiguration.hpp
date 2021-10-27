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
		jintArray getExcludeUids();
		jintArray getExcludeUsages();
		jintArray getMatchingUids();
		jintArray getMatchingUsages();
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

