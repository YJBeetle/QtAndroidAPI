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
		jboolean areSizeAndRateSupported(jint arg0, jint arg1, jdouble arg2) const;
		android::util::Range getAchievableFrameRatesFor(jint arg0, jint arg1) const;
		android::util::Range getBitrateRange() const;
		jint getHeightAlignment() const;
		android::util::Range getSupportedFrameRates() const;
		android::util::Range getSupportedFrameRatesFor(jint arg0, jint arg1) const;
		android::util::Range getSupportedHeights() const;
		android::util::Range getSupportedHeightsFor(jint arg0) const;
		JObject getSupportedPerformancePoints() const;
		android::util::Range getSupportedWidths() const;
		android::util::Range getSupportedWidthsFor(jint arg0) const;
		jint getWidthAlignment() const;
		jboolean isSizeSupported(jint arg0, jint arg1) const;
	};
} // namespace android::media

