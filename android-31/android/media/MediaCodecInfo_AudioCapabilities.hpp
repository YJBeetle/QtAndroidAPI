#pragma once

#include "../../JObject.hpp"

class JIntArray;
class JArray;
namespace android::util
{
	class Range;
}

namespace android::media
{
	class MediaCodecInfo_AudioCapabilities : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaCodecInfo_AudioCapabilities(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaCodecInfo_AudioCapabilities(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::util::Range getBitrateRange();
		JArray getInputChannelCountRanges();
		jint getMaxInputChannelCount();
		jint getMinInputChannelCount();
		JArray getSupportedSampleRateRanges();
		JIntArray getSupportedSampleRates();
		jboolean isSampleRateSupported(jint arg0);
	};
} // namespace android::media

