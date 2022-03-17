#pragma once

#include "./Visualizer_MeasurementPeakRms.def.hpp"

namespace android::media::audiofx
{
	// Fields
	inline jint Visualizer_MeasurementPeakRms::mPeak()
	{
		return getField<jint>(
			"mPeak"
		);
	}
	inline jint Visualizer_MeasurementPeakRms::mRms()
	{
		return getField<jint>(
			"mRms"
		);
	}
	
	// Constructors
	inline Visualizer_MeasurementPeakRms::Visualizer_MeasurementPeakRms()
		: JObject(
			"android.media.audiofx.Visualizer$MeasurementPeakRms",
			"()V"
		) {}
	
	// Methods
} // namespace android::media::audiofx

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::audiofx;
#endif
