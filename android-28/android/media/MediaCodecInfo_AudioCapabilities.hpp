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
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaCodecInfo_AudioCapabilities(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaCodecInfo_AudioCapabilities(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::util::Range getBitrateRange();
		jint getMaxInputChannelCount();
		jarray getSupportedSampleRateRanges();
		jintArray getSupportedSampleRates();
		jboolean isSampleRateSupported(jint arg0);
	};
} // namespace android::media

