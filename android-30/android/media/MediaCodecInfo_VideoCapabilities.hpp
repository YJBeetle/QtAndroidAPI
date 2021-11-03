#pragma once

#include "../../JObject.hpp"

namespace android::util
{
	class Range;
}

namespace android::media
{
	class MediaCodecInfo_VideoCapabilities : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaCodecInfo_VideoCapabilities(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaCodecInfo_VideoCapabilities(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean areSizeAndRateSupported(jint arg0, jint arg1, jdouble arg2);
		android::util::Range getAchievableFrameRatesFor(jint arg0, jint arg1);
		android::util::Range getBitrateRange();
		jint getHeightAlignment();
		android::util::Range getSupportedFrameRates();
		android::util::Range getSupportedFrameRatesFor(jint arg0, jint arg1);
		android::util::Range getSupportedHeights();
		android::util::Range getSupportedHeightsFor(jint arg0);
		JObject getSupportedPerformancePoints();
		android::util::Range getSupportedWidths();
		android::util::Range getSupportedWidthsFor(jint arg0);
		jint getWidthAlignment();
		jboolean isSizeSupported(jint arg0, jint arg1);
	};
} // namespace android::media

