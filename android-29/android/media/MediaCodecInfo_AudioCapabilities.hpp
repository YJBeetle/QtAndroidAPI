#pragma once

#ifndef ANDROID_MEDIA_MEDIACODECINFO_AUDIOCAPABILITIES
#define ANDROID_MEDIA_MEDIACODECINFO_AUDIOCAPABILITIES

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::util
{
	class Range;
}

namespace __jni_impl::android::media
{
	class MediaCodecInfo_AudioCapabilities : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jintArray getSupportedSampleRates();
		jarray getSupportedSampleRateRanges();
		jint getMaxInputChannelCount();
		jboolean isSampleRateSupported(jint arg0);
		QAndroidJniObject getBitrateRange();
	};
} // namespace __jni_impl::android::media

#include "../util/Range.hpp"

namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void MediaCodecInfo_AudioCapabilities::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaCodecInfo$AudioCapabilities",
			"(V)V");
	}
	
	// Methods
	jintArray MediaCodecInfo_AudioCapabilities::getSupportedSampleRates()
	{
		return __thiz.callObjectMethod(
			"getSupportedSampleRates",
			"()[I"
		).object<jintArray>();
	}
	jarray MediaCodecInfo_AudioCapabilities::getSupportedSampleRateRanges()
	{
		return __thiz.callObjectMethod(
			"getSupportedSampleRateRanges",
			"()[Landroid/util/Range;"
		).object<jarray>();
	}
	jint MediaCodecInfo_AudioCapabilities::getMaxInputChannelCount()
	{
		return __thiz.callMethod<jint>(
			"getMaxInputChannelCount",
			"()I"
		);
	}
	jboolean MediaCodecInfo_AudioCapabilities::isSampleRateSupported(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isSampleRateSupported",
			"(I)Z",
			arg0
		);
	}
	QAndroidJniObject MediaCodecInfo_AudioCapabilities::getBitrateRange()
	{
		return __thiz.callObjectMethod(
			"getBitrateRange",
			"()Landroid/util/Range;"
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaCodecInfo_AudioCapabilities : public __jni_impl::android::media::MediaCodecInfo_AudioCapabilities
	{
	public:
		MediaCodecInfo_AudioCapabilities(QAndroidJniObject obj) { __thiz = obj; }
		MediaCodecInfo_AudioCapabilities()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIACODECINFO_AUDIOCAPABILITIES

