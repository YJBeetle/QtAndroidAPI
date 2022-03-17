#pragma once

#include "../app/PendingIntent.def.hpp"
#include "./Criteria.def.hpp"
#include "./GnssCapabilities.def.hpp"
#include "./GnssMeasurementRequest.def.hpp"
#include "./GnssMeasurementsEvent_Callback.def.hpp"
#include "./GnssNavigationMessage_Callback.def.hpp"
#include "./GnssStatus_Callback.def.hpp"
#include "./GpsStatus.def.hpp"
#include "./Location.def.hpp"
#include "./LocationProvider.def.hpp"
#include "./LocationRequest.def.hpp"
#include "./provider/ProviderProperties.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../os/CancellationSignal.def.hpp"
#include "../os/Handler.def.hpp"
#include "../os/Looper.def.hpp"
#include "../../JString.hpp"
#include "./LocationManager.def.hpp"

namespace android::location
{
	// Fields
	inline JString LocationManager::ACTION_GNSS_CAPABILITIES_CHANGED()
	{
		return getStaticObjectField(
			"android.location.LocationManager",
			"ACTION_GNSS_CAPABILITIES_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString LocationManager::EXTRA_GNSS_CAPABILITIES()
	{
		return getStaticObjectField(
			"android.location.LocationManager",
			"EXTRA_GNSS_CAPABILITIES",
			"Ljava/lang/String;"
		);
	}
	inline JString LocationManager::EXTRA_LOCATION_ENABLED()
	{
		return getStaticObjectField(
			"android.location.LocationManager",
			"EXTRA_LOCATION_ENABLED",
			"Ljava/lang/String;"
		);
	}
	inline JString LocationManager::EXTRA_PROVIDER_ENABLED()
	{
		return getStaticObjectField(
			"android.location.LocationManager",
			"EXTRA_PROVIDER_ENABLED",
			"Ljava/lang/String;"
		);
	}
	inline JString LocationManager::EXTRA_PROVIDER_NAME()
	{
		return getStaticObjectField(
			"android.location.LocationManager",
			"EXTRA_PROVIDER_NAME",
			"Ljava/lang/String;"
		);
	}
	inline JString LocationManager::FUSED_PROVIDER()
	{
		return getStaticObjectField(
			"android.location.LocationManager",
			"FUSED_PROVIDER",
			"Ljava/lang/String;"
		);
	}
	inline JString LocationManager::GPS_PROVIDER()
	{
		return getStaticObjectField(
			"android.location.LocationManager",
			"GPS_PROVIDER",
			"Ljava/lang/String;"
		);
	}
	inline JString LocationManager::KEY_FLUSH_COMPLETE()
	{
		return getStaticObjectField(
			"android.location.LocationManager",
			"KEY_FLUSH_COMPLETE",
			"Ljava/lang/String;"
		);
	}
	inline JString LocationManager::KEY_LOCATIONS()
	{
		return getStaticObjectField(
			"android.location.LocationManager",
			"KEY_LOCATIONS",
			"Ljava/lang/String;"
		);
	}
	inline JString LocationManager::KEY_LOCATION_CHANGED()
	{
		return getStaticObjectField(
			"android.location.LocationManager",
			"KEY_LOCATION_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString LocationManager::KEY_PROVIDER_ENABLED()
	{
		return getStaticObjectField(
			"android.location.LocationManager",
			"KEY_PROVIDER_ENABLED",
			"Ljava/lang/String;"
		);
	}
	inline JString LocationManager::KEY_PROXIMITY_ENTERING()
	{
		return getStaticObjectField(
			"android.location.LocationManager",
			"KEY_PROXIMITY_ENTERING",
			"Ljava/lang/String;"
		);
	}
	inline JString LocationManager::KEY_STATUS_CHANGED()
	{
		return getStaticObjectField(
			"android.location.LocationManager",
			"KEY_STATUS_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString LocationManager::MODE_CHANGED_ACTION()
	{
		return getStaticObjectField(
			"android.location.LocationManager",
			"MODE_CHANGED_ACTION",
			"Ljava/lang/String;"
		);
	}
	inline JString LocationManager::NETWORK_PROVIDER()
	{
		return getStaticObjectField(
			"android.location.LocationManager",
			"NETWORK_PROVIDER",
			"Ljava/lang/String;"
		);
	}
	inline JString LocationManager::PASSIVE_PROVIDER()
	{
		return getStaticObjectField(
			"android.location.LocationManager",
			"PASSIVE_PROVIDER",
			"Ljava/lang/String;"
		);
	}
	inline JString LocationManager::PROVIDERS_CHANGED_ACTION()
	{
		return getStaticObjectField(
			"android.location.LocationManager",
			"PROVIDERS_CHANGED_ACTION",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean LocationManager::addGpsStatusListener(JObject arg0) const
	{
		return callMethod<jboolean>(
			"addGpsStatusListener",
			"(Landroid/location/GpsStatus$Listener;)Z",
			arg0.object()
		);
	}
	inline jboolean LocationManager::addNmeaListener(JObject arg0) const
	{
		return callMethod<jboolean>(
			"addNmeaListener",
			"(Landroid/location/GpsStatus$NmeaListener;)Z",
			arg0.object()
		);
	}
	inline jboolean LocationManager::addNmeaListener(JObject arg0, android::os::Handler arg1) const
	{
		return callMethod<jboolean>(
			"addNmeaListener",
			"(Landroid/location/OnNmeaMessageListener;Landroid/os/Handler;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean LocationManager::addNmeaListener(JObject arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"addNmeaListener",
			"(Ljava/util/concurrent/Executor;Landroid/location/OnNmeaMessageListener;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline void LocationManager::addProximityAlert(jdouble arg0, jdouble arg1, jfloat arg2, jlong arg3, android::app::PendingIntent arg4) const
	{
		callMethod<void>(
			"addProximityAlert",
			"(DDFJLandroid/app/PendingIntent;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object()
		);
	}
	inline void LocationManager::addTestProvider(JString arg0, android::location::provider::ProviderProperties arg1) const
	{
		callMethod<void>(
			"addTestProvider",
			"(Ljava/lang/String;Landroid/location/provider/ProviderProperties;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void LocationManager::addTestProvider(JString arg0, android::location::provider::ProviderProperties arg1, JObject arg2) const
	{
		callMethod<void>(
			"addTestProvider",
			"(Ljava/lang/String;Landroid/location/provider/ProviderProperties;Ljava/util/Set;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void LocationManager::addTestProvider(JString arg0, jboolean arg1, jboolean arg2, jboolean arg3, jboolean arg4, jboolean arg5, jboolean arg6, jboolean arg7, jint arg8, jint arg9) const
	{
		callMethod<void>(
			"addTestProvider",
			"(Ljava/lang/String;ZZZZZZZII)V",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8,
			arg9
		);
	}
	inline void LocationManager::clearTestProviderEnabled(JString arg0) const
	{
		callMethod<void>(
			"clearTestProviderEnabled",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void LocationManager::clearTestProviderLocation(JString arg0) const
	{
		callMethod<void>(
			"clearTestProviderLocation",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void LocationManager::clearTestProviderStatus(JString arg0) const
	{
		callMethod<void>(
			"clearTestProviderStatus",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline JObject LocationManager::getAllProviders() const
	{
		return callObjectMethod(
			"getAllProviders",
			"()Ljava/util/List;"
		);
	}
	inline JString LocationManager::getBestProvider(android::location::Criteria arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"getBestProvider",
			"(Landroid/location/Criteria;Z)Ljava/lang/String;",
			arg0.object(),
			arg1
		);
	}
	inline void LocationManager::getCurrentLocation(JString arg0, android::os::CancellationSignal arg1, JObject arg2, JObject arg3) const
	{
		callMethod<void>(
			"getCurrentLocation",
			"(Ljava/lang/String;Landroid/os/CancellationSignal;Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	inline void LocationManager::getCurrentLocation(JString arg0, android::location::LocationRequest arg1, android::os::CancellationSignal arg2, JObject arg3, JObject arg4) const
	{
		callMethod<void>(
			"getCurrentLocation",
			"(Ljava/lang/String;Landroid/location/LocationRequest;Landroid/os/CancellationSignal;Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object(),
			arg3.object(),
			arg4.object()
		);
	}
	inline JObject LocationManager::getGnssAntennaInfos() const
	{
		return callObjectMethod(
			"getGnssAntennaInfos",
			"()Ljava/util/List;"
		);
	}
	inline android::location::GnssCapabilities LocationManager::getGnssCapabilities() const
	{
		return callObjectMethod(
			"getGnssCapabilities",
			"()Landroid/location/GnssCapabilities;"
		);
	}
	inline JString LocationManager::getGnssHardwareModelName() const
	{
		return callObjectMethod(
			"getGnssHardwareModelName",
			"()Ljava/lang/String;"
		);
	}
	inline jint LocationManager::getGnssYearOfHardware() const
	{
		return callMethod<jint>(
			"getGnssYearOfHardware",
			"()I"
		);
	}
	inline android::location::GpsStatus LocationManager::getGpsStatus(android::location::GpsStatus arg0) const
	{
		return callObjectMethod(
			"getGpsStatus",
			"(Landroid/location/GpsStatus;)Landroid/location/GpsStatus;",
			arg0.object()
		);
	}
	inline android::location::Location LocationManager::getLastKnownLocation(JString arg0) const
	{
		return callObjectMethod(
			"getLastKnownLocation",
			"(Ljava/lang/String;)Landroid/location/Location;",
			arg0.object<jstring>()
		);
	}
	inline android::location::LocationProvider LocationManager::getProvider(JString arg0) const
	{
		return callObjectMethod(
			"getProvider",
			"(Ljava/lang/String;)Landroid/location/LocationProvider;",
			arg0.object<jstring>()
		);
	}
	inline android::location::provider::ProviderProperties LocationManager::getProviderProperties(JString arg0) const
	{
		return callObjectMethod(
			"getProviderProperties",
			"(Ljava/lang/String;)Landroid/location/provider/ProviderProperties;",
			arg0.object<jstring>()
		);
	}
	inline JObject LocationManager::getProviders(jboolean arg0) const
	{
		return callObjectMethod(
			"getProviders",
			"(Z)Ljava/util/List;",
			arg0
		);
	}
	inline JObject LocationManager::getProviders(android::location::Criteria arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"getProviders",
			"(Landroid/location/Criteria;Z)Ljava/util/List;",
			arg0.object(),
			arg1
		);
	}
	inline jboolean LocationManager::hasProvider(JString arg0) const
	{
		return callMethod<jboolean>(
			"hasProvider",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean LocationManager::isLocationEnabled() const
	{
		return callMethod<jboolean>(
			"isLocationEnabled",
			"()Z"
		);
	}
	inline jboolean LocationManager::isProviderEnabled(JString arg0) const
	{
		return callMethod<jboolean>(
			"isProviderEnabled",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean LocationManager::registerAntennaInfoListener(JObject arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"registerAntennaInfoListener",
			"(Ljava/util/concurrent/Executor;Landroid/location/GnssAntennaInfo$Listener;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean LocationManager::registerGnssMeasurementsCallback(android::location::GnssMeasurementsEvent_Callback arg0) const
	{
		return callMethod<jboolean>(
			"registerGnssMeasurementsCallback",
			"(Landroid/location/GnssMeasurementsEvent$Callback;)Z",
			arg0.object()
		);
	}
	inline jboolean LocationManager::registerGnssMeasurementsCallback(android::location::GnssMeasurementsEvent_Callback arg0, android::os::Handler arg1) const
	{
		return callMethod<jboolean>(
			"registerGnssMeasurementsCallback",
			"(Landroid/location/GnssMeasurementsEvent$Callback;Landroid/os/Handler;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean LocationManager::registerGnssMeasurementsCallback(JObject arg0, android::location::GnssMeasurementsEvent_Callback arg1) const
	{
		return callMethod<jboolean>(
			"registerGnssMeasurementsCallback",
			"(Ljava/util/concurrent/Executor;Landroid/location/GnssMeasurementsEvent$Callback;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean LocationManager::registerGnssMeasurementsCallback(android::location::GnssMeasurementRequest arg0, JObject arg1, android::location::GnssMeasurementsEvent_Callback arg2) const
	{
		return callMethod<jboolean>(
			"registerGnssMeasurementsCallback",
			"(Landroid/location/GnssMeasurementRequest;Ljava/util/concurrent/Executor;Landroid/location/GnssMeasurementsEvent$Callback;)Z",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline jboolean LocationManager::registerGnssNavigationMessageCallback(android::location::GnssNavigationMessage_Callback arg0) const
	{
		return callMethod<jboolean>(
			"registerGnssNavigationMessageCallback",
			"(Landroid/location/GnssNavigationMessage$Callback;)Z",
			arg0.object()
		);
	}
	inline jboolean LocationManager::registerGnssNavigationMessageCallback(android::location::GnssNavigationMessage_Callback arg0, android::os::Handler arg1) const
	{
		return callMethod<jboolean>(
			"registerGnssNavigationMessageCallback",
			"(Landroid/location/GnssNavigationMessage$Callback;Landroid/os/Handler;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean LocationManager::registerGnssNavigationMessageCallback(JObject arg0, android::location::GnssNavigationMessage_Callback arg1) const
	{
		return callMethod<jboolean>(
			"registerGnssNavigationMessageCallback",
			"(Ljava/util/concurrent/Executor;Landroid/location/GnssNavigationMessage$Callback;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean LocationManager::registerGnssStatusCallback(android::location::GnssStatus_Callback arg0) const
	{
		return callMethod<jboolean>(
			"registerGnssStatusCallback",
			"(Landroid/location/GnssStatus$Callback;)Z",
			arg0.object()
		);
	}
	inline jboolean LocationManager::registerGnssStatusCallback(android::location::GnssStatus_Callback arg0, android::os::Handler arg1) const
	{
		return callMethod<jboolean>(
			"registerGnssStatusCallback",
			"(Landroid/location/GnssStatus$Callback;Landroid/os/Handler;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean LocationManager::registerGnssStatusCallback(JObject arg0, android::location::GnssStatus_Callback arg1) const
	{
		return callMethod<jboolean>(
			"registerGnssStatusCallback",
			"(Ljava/util/concurrent/Executor;Landroid/location/GnssStatus$Callback;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline void LocationManager::removeGpsStatusListener(JObject arg0) const
	{
		callMethod<void>(
			"removeGpsStatusListener",
			"(Landroid/location/GpsStatus$Listener;)V",
			arg0.object()
		);
	}
	inline void LocationManager::removeNmeaListener(JObject arg0) const
	{
		callMethod<void>(
			"removeNmeaListener",
			"(Landroid/location/GpsStatus$NmeaListener;)V",
			arg0.object()
		);
	}
	inline void LocationManager::removeProximityAlert(android::app::PendingIntent arg0) const
	{
		callMethod<void>(
			"removeProximityAlert",
			"(Landroid/app/PendingIntent;)V",
			arg0.object()
		);
	}
	inline void LocationManager::removeTestProvider(JString arg0) const
	{
		callMethod<void>(
			"removeTestProvider",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void LocationManager::removeUpdates(android::app::PendingIntent arg0) const
	{
		callMethod<void>(
			"removeUpdates",
			"(Landroid/app/PendingIntent;)V",
			arg0.object()
		);
	}
	inline void LocationManager::removeUpdates(JObject arg0) const
	{
		callMethod<void>(
			"removeUpdates",
			"(Landroid/location/LocationListener;)V",
			arg0.object()
		);
	}
	inline void LocationManager::requestFlush(JString arg0, android::app::PendingIntent arg1, jint arg2) const
	{
		callMethod<void>(
			"requestFlush",
			"(Ljava/lang/String;Landroid/app/PendingIntent;I)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2
		);
	}
	inline void LocationManager::requestFlush(JString arg0, JObject arg1, jint arg2) const
	{
		callMethod<void>(
			"requestFlush",
			"(Ljava/lang/String;Landroid/location/LocationListener;I)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2
		);
	}
	inline void LocationManager::requestLocationUpdates(JString arg0, android::location::LocationRequest arg1, android::app::PendingIntent arg2) const
	{
		callMethod<void>(
			"requestLocationUpdates",
			"(Ljava/lang/String;Landroid/location/LocationRequest;Landroid/app/PendingIntent;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void LocationManager::requestLocationUpdates(JString arg0, android::location::LocationRequest arg1, JObject arg2, JObject arg3) const
	{
		callMethod<void>(
			"requestLocationUpdates",
			"(Ljava/lang/String;Landroid/location/LocationRequest;Ljava/util/concurrent/Executor;Landroid/location/LocationListener;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	inline void LocationManager::requestLocationUpdates(JString arg0, jlong arg1, jfloat arg2, android::app::PendingIntent arg3) const
	{
		callMethod<void>(
			"requestLocationUpdates",
			"(Ljava/lang/String;JFLandroid/app/PendingIntent;)V",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3.object()
		);
	}
	inline void LocationManager::requestLocationUpdates(JString arg0, jlong arg1, jfloat arg2, JObject arg3) const
	{
		callMethod<void>(
			"requestLocationUpdates",
			"(Ljava/lang/String;JFLandroid/location/LocationListener;)V",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3.object()
		);
	}
	inline void LocationManager::requestLocationUpdates(jlong arg0, jfloat arg1, android::location::Criteria arg2, android::app::PendingIntent arg3) const
	{
		callMethod<void>(
			"requestLocationUpdates",
			"(JFLandroid/location/Criteria;Landroid/app/PendingIntent;)V",
			arg0,
			arg1,
			arg2.object(),
			arg3.object()
		);
	}
	inline void LocationManager::requestLocationUpdates(JString arg0, jlong arg1, jfloat arg2, JObject arg3, android::os::Looper arg4) const
	{
		callMethod<void>(
			"requestLocationUpdates",
			"(Ljava/lang/String;JFLandroid/location/LocationListener;Landroid/os/Looper;)V",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3.object(),
			arg4.object()
		);
	}
	inline void LocationManager::requestLocationUpdates(JString arg0, jlong arg1, jfloat arg2, JObject arg3, JObject arg4) const
	{
		callMethod<void>(
			"requestLocationUpdates",
			"(Ljava/lang/String;JFLjava/util/concurrent/Executor;Landroid/location/LocationListener;)V",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3.object(),
			arg4.object()
		);
	}
	inline void LocationManager::requestLocationUpdates(jlong arg0, jfloat arg1, android::location::Criteria arg2, JObject arg3, android::os::Looper arg4) const
	{
		callMethod<void>(
			"requestLocationUpdates",
			"(JFLandroid/location/Criteria;Landroid/location/LocationListener;Landroid/os/Looper;)V",
			arg0,
			arg1,
			arg2.object(),
			arg3.object(),
			arg4.object()
		);
	}
	inline void LocationManager::requestLocationUpdates(jlong arg0, jfloat arg1, android::location::Criteria arg2, JObject arg3, JObject arg4) const
	{
		callMethod<void>(
			"requestLocationUpdates",
			"(JFLandroid/location/Criteria;Ljava/util/concurrent/Executor;Landroid/location/LocationListener;)V",
			arg0,
			arg1,
			arg2.object(),
			arg3.object(),
			arg4.object()
		);
	}
	inline void LocationManager::requestSingleUpdate(android::location::Criteria arg0, android::app::PendingIntent arg1) const
	{
		callMethod<void>(
			"requestSingleUpdate",
			"(Landroid/location/Criteria;Landroid/app/PendingIntent;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void LocationManager::requestSingleUpdate(JString arg0, android::app::PendingIntent arg1) const
	{
		callMethod<void>(
			"requestSingleUpdate",
			"(Ljava/lang/String;Landroid/app/PendingIntent;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void LocationManager::requestSingleUpdate(android::location::Criteria arg0, JObject arg1, android::os::Looper arg2) const
	{
		callMethod<void>(
			"requestSingleUpdate",
			"(Landroid/location/Criteria;Landroid/location/LocationListener;Landroid/os/Looper;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void LocationManager::requestSingleUpdate(JString arg0, JObject arg1, android::os::Looper arg2) const
	{
		callMethod<void>(
			"requestSingleUpdate",
			"(Ljava/lang/String;Landroid/location/LocationListener;Landroid/os/Looper;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	inline jboolean LocationManager::sendExtraCommand(JString arg0, JString arg1, android::os::Bundle arg2) const
	{
		return callMethod<jboolean>(
			"sendExtraCommand",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Z",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline void LocationManager::setTestProviderEnabled(JString arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setTestProviderEnabled",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void LocationManager::setTestProviderLocation(JString arg0, android::location::Location arg1) const
	{
		callMethod<void>(
			"setTestProviderLocation",
			"(Ljava/lang/String;Landroid/location/Location;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void LocationManager::setTestProviderStatus(JString arg0, jint arg1, android::os::Bundle arg2, jlong arg3) const
	{
		callMethod<void>(
			"setTestProviderStatus",
			"(Ljava/lang/String;ILandroid/os/Bundle;J)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object(),
			arg3
		);
	}
	inline void LocationManager::unregisterAntennaInfoListener(JObject arg0) const
	{
		callMethod<void>(
			"unregisterAntennaInfoListener",
			"(Landroid/location/GnssAntennaInfo$Listener;)V",
			arg0.object()
		);
	}
	inline void LocationManager::unregisterGnssMeasurementsCallback(android::location::GnssMeasurementsEvent_Callback arg0) const
	{
		callMethod<void>(
			"unregisterGnssMeasurementsCallback",
			"(Landroid/location/GnssMeasurementsEvent$Callback;)V",
			arg0.object()
		);
	}
	inline void LocationManager::unregisterGnssNavigationMessageCallback(android::location::GnssNavigationMessage_Callback arg0) const
	{
		callMethod<void>(
			"unregisterGnssNavigationMessageCallback",
			"(Landroid/location/GnssNavigationMessage$Callback;)V",
			arg0.object()
		);
	}
	inline void LocationManager::unregisterGnssStatusCallback(android::location::GnssStatus_Callback arg0) const
	{
		callMethod<void>(
			"unregisterGnssStatusCallback",
			"(Landroid/location/GnssStatus$Callback;)V",
			arg0.object()
		);
	}
} // namespace android::location

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::location;
#endif
