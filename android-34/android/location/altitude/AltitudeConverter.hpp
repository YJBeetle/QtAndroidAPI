#pragma once

#include "../../content/Context.def.hpp"
#include "../Location.def.hpp"
#include "./AltitudeConverter.def.hpp"

namespace android::location::altitude
{
	// Fields
	
	// Constructors
	inline AltitudeConverter::AltitudeConverter()
		: JObject(
			"android.location.altitude.AltitudeConverter",
			"()V"
		) {}
	
	// Methods
	inline void AltitudeConverter::addMslAltitudeToLocation(android::content::Context arg0, android::location::Location arg1) const
	{
		callMethod<void>(
			"addMslAltitudeToLocation",
			"(Landroid/content/Context;Landroid/location/Location;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::location::altitude

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::location::altitude;
#endif
