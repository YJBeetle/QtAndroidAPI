#pragma once

#include "./GnssStatus.def.hpp"
#include "./GnssStatus_Callback.def.hpp"

namespace android::location
{
	// Fields
	
	// Constructors
	inline GnssStatus_Callback::GnssStatus_Callback()
		: JObject(
			"android.location.GnssStatus$Callback",
			"()V"
		) {}
	
	// Methods
	inline void GnssStatus_Callback::onFirstFix(jint arg0) const
	{
		callMethod<void>(
			"onFirstFix",
			"(I)V",
			arg0
		);
	}
	inline void GnssStatus_Callback::onSatelliteStatusChanged(android::location::GnssStatus arg0) const
	{
		callMethod<void>(
			"onSatelliteStatusChanged",
			"(Landroid/location/GnssStatus;)V",
			arg0.object()
		);
	}
	inline void GnssStatus_Callback::onStarted() const
	{
		callMethod<void>(
			"onStarted",
			"()V"
		);
	}
	inline void GnssStatus_Callback::onStopped() const
	{
		callMethod<void>(
			"onStopped",
			"()V"
		);
	}
} // namespace android::location

// Base class headers

