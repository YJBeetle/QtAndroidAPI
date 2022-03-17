#pragma once

#include "../../JIntArray.hpp"
#include "../../JArray.hpp"
#include "../util/Range.def.hpp"
#include "./MediaCodecInfo_AudioCapabilities.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::util::Range MediaCodecInfo_AudioCapabilities::getBitrateRange() const
	{
		return callObjectMethod(
			"getBitrateRange",
			"()Landroid/util/Range;"
		);
	}
	inline JArray MediaCodecInfo_AudioCapabilities::getInputChannelCountRanges() const
	{
		return callObjectMethod(
			"getInputChannelCountRanges",
			"()[Landroid/util/Range;"
		);
	}
	inline jint MediaCodecInfo_AudioCapabilities::getMaxInputChannelCount() const
	{
		return callMethod<jint>(
			"getMaxInputChannelCount",
			"()I"
		);
	}
	inline jint MediaCodecInfo_AudioCapabilities::getMinInputChannelCount() const
	{
		return callMethod<jint>(
			"getMinInputChannelCount",
			"()I"
		);
	}
	inline JArray MediaCodecInfo_AudioCapabilities::getSupportedSampleRateRanges() const
	{
		return callObjectMethod(
			"getSupportedSampleRateRanges",
			"()[Landroid/util/Range;"
		);
	}
	inline JIntArray MediaCodecInfo_AudioCapabilities::getSupportedSampleRates() const
	{
		return callObjectMethod(
			"getSupportedSampleRates",
			"()[I"
		);
	}
	inline jboolean MediaCodecInfo_AudioCapabilities::isSampleRateSupported(jint arg0) const
	{
		return callMethod<jboolean>(
			"isSampleRateSupported",
			"(I)Z",
			arg0
		);
	}
} // namespace android::media

// Base class headers

