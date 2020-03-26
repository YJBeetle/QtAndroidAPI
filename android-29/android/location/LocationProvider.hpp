#pragma once

#ifndef ANDROID_LOCATION_LOCATIONPROVIDER
#define ANDROID_LOCATION_LOCATIONPROVIDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::location
{
	class Criteria;
}

namespace __jni_impl::android::location
{
	class LocationProvider : public __JniBaseClass
	{
	public:
		// Fields
		static jint AVAILABLE();
		static jint OUT_OF_SERVICE();
		static jint TEMPORARILY_UNAVAILABLE();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring getName();
		jint getAccuracy();
		jboolean meetsCriteria(__jni_impl::android::location::Criteria arg0);
		jboolean requiresNetwork();
		jboolean requiresSatellite();
		jboolean requiresCell();
		jboolean hasMonetaryCost();
		jboolean supportsAltitude();
		jboolean supportsSpeed();
		jboolean supportsBearing();
		jint getPowerRequirement();
	};
} // namespace __jni_impl::android::location

#include "Criteria.hpp"

namespace __jni_impl::android::location
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
	
	// Constructors
	void LocationProvider::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.location.LocationProvider",
			"(V)V");
	}
	
	// Methods
	jstring LocationProvider::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint LocationProvider::getAccuracy()
	{
		return __thiz.callMethod<jint>(
			"getAccuracy",
			"()I"
		);
	}
	jboolean LocationProvider::meetsCriteria(__jni_impl::android::location::Criteria arg0)
	{
		return __thiz.callMethod<jboolean>(
			"meetsCriteria",
			"(Landroid/location/Criteria;)Z",
			arg0.__jniObject().object()
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
	jboolean LocationProvider::requiresCell()
	{
		return __thiz.callMethod<jboolean>(
			"requiresCell",
			"()Z"
		);
	}
	jboolean LocationProvider::hasMonetaryCost()
	{
		return __thiz.callMethod<jboolean>(
			"hasMonetaryCost",
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
	jboolean LocationProvider::supportsSpeed()
	{
		return __thiz.callMethod<jboolean>(
			"supportsSpeed",
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
	jint LocationProvider::getPowerRequirement()
	{
		return __thiz.callMethod<jint>(
			"getPowerRequirement",
			"()I"
		);
	}
} // namespace __jni_impl::android::location

namespace android::location
{
	class LocationProvider : public __jni_impl::android::location::LocationProvider
	{
	public:
		LocationProvider(QAndroidJniObject obj) { __thiz = obj; }
		LocationProvider()
		{
			__constructor();
		}
	};
} // namespace android::location

#endif // ANDROID_LOCATION_LOCATIONPROVIDER

