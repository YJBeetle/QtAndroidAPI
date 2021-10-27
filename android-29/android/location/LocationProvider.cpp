#include "./Criteria.hpp"
#include "./LocationProvider.hpp"

namespace android::location
{
	// Fields
	jint LocationProvider::AVAILABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.LocationProvider",
			"AVAILABLE"
		);
	}
	jint LocationProvider::OUT_OF_SERVICE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.LocationProvider",
			"OUT_OF_SERVICE"
		);
	}
	jint LocationProvider::TEMPORARILY_UNAVAILABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.LocationProvider",
			"TEMPORARILY_UNAVAILABLE"
		);
	}
	
	LocationProvider::LocationProvider(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint LocationProvider::getAccuracy()
	{
		return __thiz.callMethod<jint>(
			"getAccuracy",
			"()I"
		);
	}
	jstring LocationProvider::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint LocationProvider::getPowerRequirement()
	{
		return __thiz.callMethod<jint>(
			"getPowerRequirement",
			"()I"
		);
	}
	jboolean LocationProvider::hasMonetaryCost()
	{
		return __thiz.callMethod<jboolean>(
			"hasMonetaryCost",
			"()Z"
		);
	}
	jboolean LocationProvider::meetsCriteria(android::location::Criteria arg0)
	{
		return __thiz.callMethod<jboolean>(
			"meetsCriteria",
			"(Landroid/location/Criteria;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean LocationProvider::requiresCell()
	{
		return __thiz.callMethod<jboolean>(
			"requiresCell",
			"()Z"
		);
	}
	jboolean LocationProvider::requiresNetwork()
	{
		return __thiz.callMethod<jboolean>(
			"requiresNetwork",
			"()Z"
		);
	}
	jboolean LocationProvider::requiresSatellite()
	{
		return __thiz.callMethod<jboolean>(
			"requiresSatellite",
			"()Z"
		);
	}
	jboolean LocationProvider::supportsAltitude()
	{
		return __thiz.callMethod<jboolean>(
			"supportsAltitude",
			"()Z"
		);
	}
	jboolean LocationProvider::supportsBearing()
	{
		return __thiz.callMethod<jboolean>(
			"supportsBearing",
			"()Z"
		);
	}
	jboolean LocationProvider::supportsSpeed()
	{
		return __thiz.callMethod<jboolean>(
			"supportsSpeed",
			"()Z"
		);
	}
} // namespace android::location

