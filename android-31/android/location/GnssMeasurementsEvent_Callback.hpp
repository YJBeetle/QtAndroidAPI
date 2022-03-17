#pragma once

#include "./GnssMeasurementsEvent.def.hpp"
#include "./GnssMeasurementsEvent_Callback.def.hpp"

namespace android::location
{
	// Fields
	inline jint GnssMeasurementsEvent_Callback::STATUS_LOCATION_DISABLED()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurementsEvent$Callback",
			"STATUS_LOCATION_DISABLED"
		);
	}
	inline jint GnssMeasurementsEvent_Callback::STATUS_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurementsEvent$Callback",
			"STATUS_NOT_ALLOWED"
		);
	}
	inline jint GnssMeasurementsEvent_Callback::STATUS_NOT_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurementsEvent$Callback",
			"STATUS_NOT_SUPPORTED"
		);
	}
	inline jint GnssMeasurementsEvent_Callback::STATUS_READY()
	{
		return getStaticField<jint>(
			"android.location.GnssMeasurementsEvent$Callback",
			"STATUS_READY"
		);
	}
	
	// Constructors
	inline GnssMeasurementsEvent_Callback::GnssMeasurementsEvent_Callback()
		: JObject(
			"android.location.GnssMeasurementsEvent$Callback",
			"()V"
		) {}
	
	// Methods
	inline void GnssMeasurementsEvent_Callback::onGnssMeasurementsReceived(android::location::GnssMeasurementsEvent arg0) const
	{
		callMethod<void>(
			"onGnssMeasurementsReceived",
			"(Landroid/location/GnssMeasurementsEvent;)V",
			arg0.object()
		);
	}
	inline void GnssMeasurementsEvent_Callback::onStatusChanged(jint arg0) const
	{
		callMethod<void>(
			"onStatusChanged",
			"(I)V",
			arg0
		);
	}
} // namespace android::location

// Base class headers

