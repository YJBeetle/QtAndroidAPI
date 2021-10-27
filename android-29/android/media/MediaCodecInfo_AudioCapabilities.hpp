#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::util
{
	class Range;
}

namespace android::media
{
	class MediaCodecInfo_AudioCapabilities : public __JniBaseClass
	{
	public:
		// Fields
		
		MediaCodecInfo_AudioCapabilities(QAndroidJniObject obj);
		// Constructors
		MediaCodecInfo_AudioCapabilities() = default;
		
		// Methods
		QAndroidJniObject getBitrateRange();
		jint getMaxInputChannelCount();
		jarray getSupportedSampleRateRanges();
		jintArray getSupportedSampleRates();
		jboolean isSampleRateSupported(jint arg0);
	};
} // namespace android::media

