#include "../util/Range.hpp"
#include "./MediaCodecInfo_VideoCapabilities.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	MediaCodecInfo_VideoCapabilities::MediaCodecInfo_VideoCapabilities(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jboolean MediaCodecInfo_VideoCapabilities::areSizeAndRateSupported(jint arg0, jint arg1, jdouble arg2)
	{
		return callMethod<jboolean>(
			"areSizeAndRateSupported",
			"(IID)Z",
			arg0,
			arg1,
			arg2
		);
	}
	android::util::Range MediaCodecInfo_VideoCapabilities::getAchievableFrameRatesFor(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"getAchievableFrameRatesFor",
			"(II)Landroid/util/Range;",
			arg0,
			arg1
		);
	}
	android::util::Range MediaCodecInfo_VideoCapabilities::getBitrateRange()
	{
		return callObjectMethod(
			"getBitrateRange",
			"()Landroid/util/Range;"
		);
	}
	jint MediaCodecInfo_VideoCapabilities::getHeightAlignment()
	{
		return callMethod<jint>(
			"getHeightAlignment",
			"()I"
		);
	}
	android::util::Range MediaCodecInfo_VideoCapabilities::getSupportedFrameRates()
	{
		return callObjectMethod(
			"getSupportedFrameRates",
			"()Landroid/util/Range;"
		);
	}
	android::util::Range MediaCodecInfo_VideoCapabilities::getSupportedFrameRatesFor(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"getSupportedFrameRatesFor",
			"(II)Landroid/util/Range;",
			arg0,
			arg1
		);
	}
	android::util::Range MediaCodecInfo_VideoCapabilities::getSupportedHeights()
	{
		return callObjectMethod(
			"getSupportedHeights",
			"()Landroid/util/Range;"
		);
	}
	android::util::Range MediaCodecInfo_VideoCapabilities::getSupportedHeightsFor(jint arg0)
	{
		return callObjectMethod(
			"getSupportedHeightsFor",
			"(I)Landroid/util/Range;",
			arg0
		);
	}
	android::util::Range MediaCodecInfo_VideoCapabilities::getSupportedWidths()
	{
		return callObjectMethod(
			"getSupportedWidths",
			"()Landroid/util/Range;"
		);
	}
	android::util::Range MediaCodecInfo_VideoCapabilities::getSupportedWidthsFor(jint arg0)
	{
		return callObjectMethod(
			"getSupportedWidthsFor",
			"(I)Landroid/util/Range;",
			arg0
		);
	}
	jint MediaCodecInfo_VideoCapabilities::getWidthAlignment()
	{
		return callMethod<jint>(
			"getWidthAlignment",
			"()I"
		);
	}
	jboolean MediaCodecInfo_VideoCapabilities::isSizeSupported(jint arg0, jint arg1)
	{
		return callMethod<jboolean>(
			"isSizeSupported",
			"(II)Z",
			arg0,
			arg1
		);
	}
} // namespace android::media

