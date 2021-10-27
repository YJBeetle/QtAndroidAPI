#include "../util/Range.hpp"
#include "./MediaCodecInfo_VideoCapabilities.hpp"

namespace android::media
{
	// Fields
	
	MediaCodecInfo_VideoCapabilities::MediaCodecInfo_VideoCapabilities(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jboolean MediaCodecInfo_VideoCapabilities::areSizeAndRateSupported(jint arg0, jint arg1, jdouble arg2)
	{
		return __thiz.callMethod<jboolean>(
			"areSizeAndRateSupported",
			"(IID)Z",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject MediaCodecInfo_VideoCapabilities::getAchievableFrameRatesFor(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getAchievableFrameRatesFor",
			"(II)Landroid/util/Range;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject MediaCodecInfo_VideoCapabilities::getBitrateRange()
	{
		return __thiz.callObjectMethod(
			"getBitrateRange",
			"()Landroid/util/Range;"
		);
	}
	jint MediaCodecInfo_VideoCapabilities::getHeightAlignment()
	{
		return __thiz.callMethod<jint>(
			"getHeightAlignment",
			"()I"
		);
	}
	QAndroidJniObject MediaCodecInfo_VideoCapabilities::getSupportedFrameRates()
	{
		return __thiz.callObjectMethod(
			"getSupportedFrameRates",
			"()Landroid/util/Range;"
		);
	}
	QAndroidJniObject MediaCodecInfo_VideoCapabilities::getSupportedFrameRatesFor(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getSupportedFrameRatesFor",
			"(II)Landroid/util/Range;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject MediaCodecInfo_VideoCapabilities::getSupportedHeights()
	{
		return __thiz.callObjectMethod(
			"getSupportedHeights",
			"()Landroid/util/Range;"
		);
	}
	QAndroidJniObject MediaCodecInfo_VideoCapabilities::getSupportedHeightsFor(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getSupportedHeightsFor",
			"(I)Landroid/util/Range;",
			arg0
		);
	}
	QAndroidJniObject MediaCodecInfo_VideoCapabilities::getSupportedPerformancePoints()
	{
		return __thiz.callObjectMethod(
			"getSupportedPerformancePoints",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject MediaCodecInfo_VideoCapabilities::getSupportedWidths()
	{
		return __thiz.callObjectMethod(
			"getSupportedWidths",
			"()Landroid/util/Range;"
		);
	}
	QAndroidJniObject MediaCodecInfo_VideoCapabilities::getSupportedWidthsFor(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getSupportedWidthsFor",
			"(I)Landroid/util/Range;",
			arg0
		);
	}
	jint MediaCodecInfo_VideoCapabilities::getWidthAlignment()
	{
		return __thiz.callMethod<jint>(
			"getWidthAlignment",
			"()I"
		);
	}
	jboolean MediaCodecInfo_VideoCapabilities::isSizeSupported(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"isSizeSupported",
			"(II)Z",
			arg0,
			arg1
		);
	}
} // namespace android::media

