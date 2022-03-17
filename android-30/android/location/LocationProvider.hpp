#pragma once

#include "./Criteria.def.hpp"
#include "../../JString.hpp"
#include "./LocationProvider.def.hpp"

namespace android::location
{
	// Fields
	inline jint LocationProvider::AVAILABLE()
	{
		return getStaticField<jint>(
			"android.location.LocationProvider",
			"AVAILABLE"
		);
	}
	inline jint LocationProvider::OUT_OF_SERVICE()
	{
		return getStaticField<jint>(
			"android.location.LocationProvider",
			"OUT_OF_SERVICE"
		);
	}
	inline jint LocationProvider::TEMPORARILY_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.location.LocationProvider",
			"TEMPORARILY_UNAVAILABLE"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint LocationProvider::getAccuracy() const
	{
		return callMethod<jint>(
			"getAccuracy",
			"()I"
		);
	}
	inline JString LocationProvider::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline jint LocationProvider::getPowerRequirement() const
	{
		return callMethod<jint>(
			"getPowerRequirement",
			"()I"
		);
	}
	inline jboolean LocationProvider::hasMonetaryCost() const
	{
		return callMethod<jboolean>(
			"hasMonetaryCost",
			"()Z"
		);
	}
	inline jboolean LocationProvider::meetsCriteria(android::location::Criteria arg0) const
	{
		return callMethod<jboolean>(
			"meetsCriteria",
			"(Landroid/location/Criteria;)Z",
			arg0.object()
		);
	}
	inline jboolean LocationProvider::requiresCell() const
	{
		return callMethod<jboolean>(
			"requiresCell",
			"()Z"
		);
	}
	inline jboolean LocationProvider::requiresNetwork() const
	{
		return callMethod<jboolean>(
			"requiresNetwork",
			"()Z"
		);
	}
	inline jboolean LocationProvider::requiresSatellite() const
	{
		return callMethod<jboolean>(
			"requiresSatellite",
			"()Z"
		);
	}
	inline jboolean LocationProvider::supportsAltitude() const
	{
		return callMethod<jboolean>(
			"supportsAltitude",
			"()Z"
		);
	}
	inline jboolean LocationProvider::supportsBearing() const
	{
		return callMethod<jboolean>(
			"supportsBearing",
			"()Z"
		);
	}
	inline jboolean LocationProvider::supportsSpeed() const
	{
		return callMethod<jboolean>(
			"supportsSpeed",
			"()Z"
		);
	}
} // namespace android::location

// Base class headers

