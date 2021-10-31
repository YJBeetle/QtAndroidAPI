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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaCodecInfo_AudioCapabilities(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaCodecInfo_AudioCapabilities(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::util::Range getBitrateRange();
		jarray getInputChannelCountRanges();
		jint getMaxInputChannelCount();
		jint getMinInputChannelCount();
		jarray getSupportedSampleRateRanges();
		jintArray getSupportedSampleRates();
		jboolean isSampleRateSupported(jint arg0);
	};
} // namespace android::media

