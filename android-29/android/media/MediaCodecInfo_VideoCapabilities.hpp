#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::util
{
	class Range;
}

namespace android::media
{
	class MediaCodecInfo_VideoCapabilities : public __JniBaseClass
	{
	public:
		// Fields
		
		MediaCodecInfo_VideoCapabilities(QAndroidJniObject obj);
		// Constructors
		MediaCodecInfo_VideoCapabilities() = default;
		
		// Methods
		jboolean areSizeAndRateSupported(jint arg0, jint arg1, jdouble arg2);
		QAndroidJniObject getAchievableFrameRatesFor(jint arg0, jint arg1);
		QAndroidJniObject getBitrateRange();
		jint getHeightAlignment();
		QAndroidJniObject getSupportedFrameRates();
		QAndroidJniObject getSupportedFrameRatesFor(jint arg0, jint arg1);
		QAndroidJniObject getSupportedHeights();
		QAndroidJniObject getSupportedHeightsFor(jint arg0);
		QAndroidJniObject getSupportedPerformancePoints();
		QAndroidJniObject getSupportedWidths();
		QAndroidJniObject getSupportedWidthsFor(jint arg0);
		jint getWidthAlignment();
		jboolean isSizeSupported(jint arg0, jint arg1);
	};
} // namespace android::media

