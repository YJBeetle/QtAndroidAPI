#pragma once

#include "../util/Range.def.hpp"
#include "./MediaCodecInfo_VideoCapabilities.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean MediaCodecInfo_VideoCapabilities::areSizeAndRateSupported(jint arg0, jint arg1, jdouble arg2) const
	{
		return callMethod<jboolean>(
			"areSizeAndRateSupported",
			"(IID)Z",
			arg0,
			arg1,
			arg2
		);
	}
	inline android::util::Range MediaCodecInfo_VideoCapabilities::getAchievableFrameRatesFor(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getAchievableFrameRatesFor",
			"(II)Landroid/util/Range;",
			arg0,
			arg1
		);
	}
	inline android::util::Range MediaCodecInfo_VideoCapabilities::getBitrateRange() const
	{
		return callObjectMethod(
			"getBitrateRange",
			"()Landroid/util/Range;"
		);
	}
	inline jint MediaCodecInfo_VideoCapabilities::getHeightAlignment() const
	{
		return callMethod<jint>(
			"getHeightAlignment",
			"()I"
		);
	}
	inline android::util::Range MediaCodecInfo_VideoCapabilities::getSupportedFrameRates() const
	{
		return callObjectMethod(
			"getSupportedFrameRates",
			"()Landroid/util/Range;"
		);
	}
	inline android::util::Range MediaCodecInfo_VideoCapabilities::getSupportedFrameRatesFor(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getSupportedFrameRatesFor",
			"(II)Landroid/util/Range;",
			arg0,
			arg1
		);
	}
	inline android::util::Range MediaCodecInfo_VideoCapabilities::getSupportedHeights() const
	{
		return callObjectMethod(
			"getSupportedHeights",
			"()Landroid/util/Range;"
		);
	}
	inline android::util::Range MediaCodecInfo_VideoCapabilities::getSupportedHeightsFor(jint arg0) const
	{
		return callObjectMethod(
			"getSupportedHeightsFor",
			"(I)Landroid/util/Range;",
			arg0
		);
	}
	inline android::util::Range MediaCodecInfo_VideoCapabilities::getSupportedWidths() const
	{
		return callObjectMethod(
			"getSupportedWidths",
			"()Landroid/util/Range;"
		);
	}
	inline android::util::Range MediaCodecInfo_VideoCapabilities::getSupportedWidthsFor(jint arg0) const
	{
		return callObjectMethod(
			"getSupportedWidthsFor",
			"(I)Landroid/util/Range;",
			arg0
		);
	}
	inline jint MediaCodecInfo_VideoCapabilities::getWidthAlignment() const
	{
		return callMethod<jint>(
			"getWidthAlignment",
			"()I"
		);
	}
	inline jboolean MediaCodecInfo_VideoCapabilities::isSizeSupported(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"isSizeSupported",
			"(II)Z",
			arg0,
			arg1
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
