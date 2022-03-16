#include "../../JIntArray.hpp"
#include "../../JArray.hpp"
#include "../util/Range.hpp"
#include "./MediaCodecInfo_AudioCapabilities.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	android::util::Range MediaCodecInfo_AudioCapabilities::getBitrateRange() const
	{
		return callObjectMethod(
			"getBitrateRange",
			"()Landroid/util/Range;"
		);
	}
	jint MediaCodecInfo_AudioCapabilities::getMaxInputChannelCount() const
	{
		return callMethod<jint>(
			"getMaxInputChannelCount",
			"()I"
		);
	}
	JArray MediaCodecInfo_AudioCapabilities::getSupportedSampleRateRanges() const
	{
		return callObjectMethod(
			"getSupportedSampleRateRanges",
			"()[Landroid/util/Range;"
		);
	}
	JIntArray MediaCodecInfo_AudioCapabilities::getSupportedSampleRates() const
	{
		return callObjectMethod(
			"getSupportedSampleRates",
			"()[I"
		);
	}
	jboolean MediaCodecInfo_AudioCapabilities::isSampleRateSupported(jint arg0) const
	{
		return callMethod<jboolean>(
			"isSampleRateSupported",
			"(I)Z",
			arg0
		);
	}
} // namespace android::media

