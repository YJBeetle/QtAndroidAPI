#include "../../JIntArray.hpp"
#include "../../JArray.hpp"
#include "../util/Range.hpp"
#include "./MediaCodecInfo_AudioCapabilities.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	MediaCodecInfo_AudioCapabilities::MediaCodecInfo_AudioCapabilities(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::util::Range MediaCodecInfo_AudioCapabilities::getBitrateRange() const
	{
		return callObjectMethod(
			"getBitrateRange",
			"()Landroid/util/Range;"
		);
	}
	JArray MediaCodecInfo_AudioCapabilities::getInputChannelCountRanges() const
	{
		return callObjectMethod(
			"getInputChannelCountRanges",
			"()[Landroid/util/Range;"
		);
	}
	jint MediaCodecInfo_AudioCapabilities::getMaxInputChannelCount() const
	{
		return callMethod<jint>(
			"getMaxInputChannelCount",
			"()I"
		);
	}
	jint MediaCodecInfo_AudioCapabilities::getMinInputChannelCount() const
	{
		return callMethod<jint>(
			"getMinInputChannelCount",
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

