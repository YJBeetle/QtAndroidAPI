#include "./Criteria.hpp"
#include "../../JString.hpp"
#include "./LocationProvider.hpp"

namespace android::location
{
	// Fields
	jint LocationProvider::AVAILABLE()
	{
		return getStaticField<jint>(
			"android.location.LocationProvider",
			"AVAILABLE"
		);
	}
	jint LocationProvider::OUT_OF_SERVICE()
	{
		return getStaticField<jint>(
			"android.location.LocationProvider",
			"OUT_OF_SERVICE"
		);
	}
	jint LocationProvider::TEMPORARILY_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.location.LocationProvider",
			"TEMPORARILY_UNAVAILABLE"
		);
	}
	
	// QAndroidJniObject forward
	LocationProvider::LocationProvider(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint LocationProvider::getAccuracy() const
	{
		return callMethod<jint>(
			"getAccuracy",
			"()I"
		);
	}
	JString LocationProvider::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	jint LocationProvider::getPowerRequirement() const
	{
		return callMethod<jint>(
			"getPowerRequirement",
			"()I"
		);
	}
	jboolean LocationProvider::hasMonetaryCost() const
	{
		return callMethod<jboolean>(
			"hasMonetaryCost",
			"()Z"
		);
	}
	jboolean LocationProvider::meetsCriteria(android::location::Criteria arg0) const
	{
		return callMethod<jboolean>(
			"meetsCriteria",
			"(Landroid/location/Criteria;)Z",
			arg0.object()
		);
	}
	jboolean LocationProvider::requiresCell() const
	{
		return callMethod<jboolean>(
			"requiresCell",
			"()Z"
		);
	}
	jboolean LocationProvider::requiresNetwork() const
	{
		return callMethod<jboolean>(
			"requiresNetwork",
			"()Z"
		);
	}
	jboolean LocationProvider::requiresSatellite() const
	{
		return callMethod<jboolean>(
			"requiresSatellite",
			"()Z"
		);
	}
	jboolean LocationProvider::supportsAltitude() const
	{
		return callMethod<jboolean>(
			"supportsAltitude",
			"()Z"
		);
	}
	jboolean LocationProvider::supportsBearing() const
	{
		return callMethod<jboolean>(
			"supportsBearing",
			"()Z"
		);
	}
	jboolean LocationProvider::supportsSpeed() const
	{
		return callMethod<jboolean>(
			"supportsSpeed",
			"()Z"
		);
	}
} // namespace android::location

