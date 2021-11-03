#include "./Criteria.hpp"
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
	
	// QJniObject forward
	LocationProvider::LocationProvider(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint LocationProvider::getAccuracy()
	{
		return callMethod<jint>(
			"getAccuracy",
			"()I"
		);
	}
	jstring LocationProvider::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint LocationProvider::getPowerRequirement()
	{
		return callMethod<jint>(
			"getPowerRequirement",
			"()I"
		);
	}
	jboolean LocationProvider::hasMonetaryCost()
	{
		return callMethod<jboolean>(
			"hasMonetaryCost",
			"()Z"
		);
	}
	jboolean LocationProvider::meetsCriteria(android::location::Criteria arg0)
	{
		return callMethod<jboolean>(
			"meetsCriteria",
			"(Landroid/location/Criteria;)Z",
			arg0.object()
		);
	}
	jboolean LocationProvider::requiresCell()
	{
		return callMethod<jboolean>(
			"requiresCell",
			"()Z"
		);
	}
	jboolean LocationProvider::requiresNetwork()
	{
		return callMethod<jboolean>(
			"requiresNetwork",
			"()Z"
		);
	}
	jboolean LocationProvider::requiresSatellite()
	{
		return callMethod<jboolean>(
			"requiresSatellite",
			"()Z"
		);
	}
	jboolean LocationProvider::supportsAltitude()
	{
		return callMethod<jboolean>(
			"supportsAltitude",
			"()Z"
		);
	}
	jboolean LocationProvider::supportsBearing()
	{
		return callMethod<jboolean>(
			"supportsBearing",
			"()Z"
		);
	}
	jboolean LocationProvider::supportsSpeed()
	{
		return callMethod<jboolean>(
			"supportsSpeed",
			"()Z"
		);
	}
} // namespace android::location

