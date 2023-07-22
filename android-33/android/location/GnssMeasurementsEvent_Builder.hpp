#pragma once

#include "./GnssClock.def.hpp"
#include "./GnssMeasurementsEvent.def.hpp"
#include "./GnssMeasurementsEvent_Builder.def.hpp"

namespace android::location
{
	// Fields
	
	// Constructors
	inline GnssMeasurementsEvent_Builder::GnssMeasurementsEvent_Builder()
		: JObject(
			"android.location.GnssMeasurementsEvent$Builder",
			"()V"
		) {}
	inline GnssMeasurementsEvent_Builder::GnssMeasurementsEvent_Builder(android::location::GnssMeasurementsEvent arg0)
		: JObject(
			"android.location.GnssMeasurementsEvent$Builder",
			"(Landroid/location/GnssMeasurementsEvent;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::location::GnssMeasurementsEvent GnssMeasurementsEvent_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/location/GnssMeasurementsEvent;"
		);
	}
	inline android::location::GnssMeasurementsEvent_Builder GnssMeasurementsEvent_Builder::setClock(android::location::GnssClock arg0) const
	{
		return callObjectMethod(
			"setClock",
			"(Landroid/location/GnssClock;)Landroid/location/GnssMeasurementsEvent$Builder;",
			arg0.object()
		);
	}
	inline android::location::GnssMeasurementsEvent_Builder GnssMeasurementsEvent_Builder::setGnssAutomaticGainControls(JObject arg0) const
	{
		return callObjectMethod(
			"setGnssAutomaticGainControls",
			"(Ljava/util/Collection;)Landroid/location/GnssMeasurementsEvent$Builder;",
			arg0.object()
		);
	}
	inline android::location::GnssMeasurementsEvent_Builder GnssMeasurementsEvent_Builder::setMeasurements(JObject arg0) const
	{
		return callObjectMethod(
			"setMeasurements",
			"(Ljava/util/Collection;)Landroid/location/GnssMeasurementsEvent$Builder;",
			arg0.object()
		);
	}
} // namespace android::location

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::location;
#endif
