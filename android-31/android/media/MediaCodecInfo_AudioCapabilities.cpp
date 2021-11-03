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
	android::util::Range MediaCodecInfo_AudioCapabilities::getBitrateRange()
	{
		return callObjectMethod(
			"getBitrateRange",
			"()Landroid/util/Range;"
		);
	}
	JArray MediaCodecInfo_AudioCapabilities::getInputChannelCountRanges()
	{
		return callObjectMethod(
			"getInputChannelCountRanges",
			"()[Landroid/util/Range;"
		);
	}
	jint MediaCodecInfo_AudioCapabilities::getMaxInputChannelCount()
	{
		return callMethod<jint>(
			"getMaxInputChannelCount",
			"()I"
		);
	}
	jint MediaCodecInfo_AudioCapabilities::getMinInputChannelCount()
	{
		return callMethod<jint>(
			"getMinInputChannelCount",
			"()I"
		);
	}
	JArray MediaCodecInfo_AudioCapabilities::getSupportedSampleRateRanges()
	{
		return callObjectMethod(
			"getSupportedSampleRateRanges",
			"()[Landroid/util/Range;"
		);
	}
	JIntArray MediaCodecInfo_AudioCapabilities::getSupportedSampleRates()
	{
		return callObjectMethod(
			"getSupportedSampleRates",
			"()[I"
		);
	}
	jboolean MediaCodecInfo_AudioCapabilities::isSampleRateSupported(jint arg0)
	{
		return callMethod<jboolean>(
			"isSampleRateSupported",
			"(I)Z",
			arg0
		);
	}
} // namespace android::media

