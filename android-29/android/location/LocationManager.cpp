#include "../app/PendingIntent.hpp"
#include "./Criteria.hpp"
#include "./GnssMeasurementsEvent_Callback.hpp"
#include "./GnssNavigationMessage_Callback.hpp"
#include "./GnssStatus_Callback.hpp"
#include "./GpsStatus.hpp"
#include "./Location.hpp"
#include "./LocationProvider.hpp"
#include "../os/Bundle.hpp"
#include "../os/Handler.hpp"
#include "../os/Looper.hpp"
#include "./LocationManager.hpp"

namespace android::location
{
	// Fields
	jstring LocationManager::EXTRA_PROVIDER_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.location.LocationManager",
			"EXTRA_PROVIDER_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring LocationManager::GPS_PROVIDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.location.LocationManager",
			"GPS_PROVIDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring LocationManager::KEY_LOCATION_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.location.LocationManager",
			"KEY_LOCATION_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring LocationManager::KEY_PROVIDER_ENABLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.location.LocationManager",
			"KEY_PROVIDER_ENABLED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring LocationManager::KEY_PROXIMITY_ENTERING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.location.LocationManager",
			"KEY_PROXIMITY_ENTERING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring LocationManager::KEY_STATUS_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.location.LocationManager",
			"KEY_STATUS_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring LocationManager::MODE_CHANGED_ACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.location.LocationManager",
			"MODE_CHANGED_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring LocationManager::NETWORK_PROVIDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.location.LocationManager",
			"NETWORK_PROVIDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring LocationManager::PASSIVE_PROVIDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.location.LocationManager",
			"PASSIVE_PROVIDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring LocationManager::PROVIDERS_CHANGED_ACTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.location.LocationManager",
			"PROVIDERS_CHANGED_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	LocationManager::LocationManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jboolean LocationManager::addGpsStatusListener(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"addGpsStatusListener",
			"(Landroid/location/GpsStatus$Listener;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean LocationManager::addNmeaListener(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"addNmeaListener",
			"(Landroid/location/OnNmeaMessageListener;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean LocationManager::addNmeaListener(__JniBaseClass arg0, android::os::Handler arg1)
	{
		return __thiz.callMethod<jboolean>(
			"addNmeaListener",
			"(Landroid/location/OnNmeaMessageListener;Landroid/os/Handler;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void LocationManager::addProximityAlert(jdouble arg0, jdouble arg1, jfloat arg2, jlong arg3, android::app::PendingIntent arg4)
	{
		__thiz.callMethod<void>(
			"addProximityAlert",
			"(DDFJLandroid/app/PendingIntent;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	void LocationManager::addTestProvider(jstring arg0, jboolean arg1, jboolean arg2, jboolean arg3, jboolean arg4, jboolean arg5, jboolean arg6, jboolean arg7, jint arg8, jint arg9)
	{
		__thiz.callMethod<void>(
			"addTestProvider",
			"(Ljava/lang/String;ZZZZZZZII)V",
			arg0,
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
	void LocationManager::addTestProvider(const QString &arg0, jboolean arg1, jboolean arg2, jboolean arg3, jboolean arg4, jboolean arg5, jboolean arg6, jboolean arg7, jint arg8, jint arg9)
	{
		__thiz.callMethod<void>(
			"addTestProvider",
			"(Ljava/lang/String;ZZZZZZZII)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
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
	void LocationManager::clearTestProviderEnabled(jstring arg0)
	{
		__thiz.callMethod<void>(
			"clearTestProviderEnabled",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void LocationManager::clearTestProviderEnabled(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"clearTestProviderEnabled",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void LocationManager::clearTestProviderLocation(jstring arg0)
	{
		__thiz.callMethod<void>(
			"clearTestProviderLocation",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void LocationManager::clearTestProviderLocation(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"clearTestProviderLocation",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void LocationManager::clearTestProviderStatus(jstring arg0)
	{
		__thiz.callMethod<void>(
			"clearTestProviderStatus",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void LocationManager::clearTestProviderStatus(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"clearTestProviderStatus",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject LocationManager::getAllProviders()
	{
		return __thiz.callObjectMethod(
			"getAllProviders",
			"()Ljava/util/List;"
		);
	}
	jstring LocationManager::getBestProvider(android::location::Criteria arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"getBestProvider",
			"(Landroid/location/Criteria;Z)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1
		).object<jstring>();
	}
	jstring LocationManager::getGnssHardwareModelName()
	{
		return __thiz.callObjectMethod(
			"getGnssHardwareModelName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint LocationManager::getGnssYearOfHardware()
	{
		return __thiz.callMethod<jint>(
			"getGnssYearOfHardware",
			"()I"
		);
	}
	QAndroidJniObject LocationManager::getGpsStatus(android::location::GpsStatus arg0)
	{
		return __thiz.callObjectMethod(
			"getGpsStatus",
			"(Landroid/location/GpsStatus;)Landroid/location/GpsStatus;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LocationManager::getLastKnownLocation(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getLastKnownLocation",
			"(Ljava/lang/String;)Landroid/location/Location;",
			arg0
		);
	}
	QAndroidJniObject LocationManager::getLastKnownLocation(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getLastKnownLocation",
			"(Ljava/lang/String;)Landroid/location/Location;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject LocationManager::getProvider(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getProvider",
			"(Ljava/lang/String;)Landroid/location/LocationProvider;",
			arg0
		);
	}
	QAndroidJniObject LocationManager::getProvider(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getProvider",
			"(Ljava/lang/String;)Landroid/location/LocationProvider;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject LocationManager::getProviders(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"getProviders",
			"(Z)Ljava/util/List;",
			arg0
		);
	}
	QAndroidJniObject LocationManager::getProviders(android::location::Criteria arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"getProviders",
			"(Landroid/location/Criteria;Z)Ljava/util/List;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean LocationManager::isLocationEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isLocationEnabled",
			"()Z"
		);
	}
	jboolean LocationManager::isProviderEnabled(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isProviderEnabled",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean LocationManager::isProviderEnabled(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isProviderEnabled",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean LocationManager::registerGnssMeasurementsCallback(android::location::GnssMeasurementsEvent_Callback arg0)
	{
		return __thiz.callMethod<jboolean>(
			"registerGnssMeasurementsCallback",
			"(Landroid/location/GnssMeasurementsEvent$Callback;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean LocationManager::registerGnssMeasurementsCallback(android::location::GnssMeasurementsEvent_Callback arg0, android::os::Handler arg1)
	{
		return __thiz.callMethod<jboolean>(
			"registerGnssMeasurementsCallback",
			"(Landroid/location/GnssMeasurementsEvent$Callback;Landroid/os/Handler;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean LocationManager::registerGnssNavigationMessageCallback(android::location::GnssNavigationMessage_Callback arg0)
	{
		return __thiz.callMethod<jboolean>(
			"registerGnssNavigationMessageCallback",
			"(Landroid/location/GnssNavigationMessage$Callback;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean LocationManager::registerGnssNavigationMessageCallback(android::location::GnssNavigationMessage_Callback arg0, android::os::Handler arg1)
	{
		return __thiz.callMethod<jboolean>(
			"registerGnssNavigationMessageCallback",
			"(Landroid/location/GnssNavigationMessage$Callback;Landroid/os/Handler;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean LocationManager::registerGnssStatusCallback(android::location::GnssStatus_Callback arg0)
	{
		return __thiz.callMethod<jboolean>(
			"registerGnssStatusCallback",
			"(Landroid/location/GnssStatus$Callback;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean LocationManager::registerGnssStatusCallback(android::location::GnssStatus_Callback arg0, android::os::Handler arg1)
	{
		return __thiz.callMethod<jboolean>(
			"registerGnssStatusCallback",
			"(Landroid/location/GnssStatus$Callback;Landroid/os/Handler;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void LocationManager::removeGpsStatusListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeGpsStatusListener",
			"(Landroid/location/GpsStatus$Listener;)V",
			arg0.__jniObject().object()
		);
	}
	void LocationManager::removeNmeaListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeNmeaListener",
			"(Landroid/location/OnNmeaMessageListener;)V",
			arg0.__jniObject().object()
		);
	}
	void LocationManager::removeProximityAlert(android::app::PendingIntent arg0)
	{
		__thiz.callMethod<void>(
			"removeProximityAlert",
			"(Landroid/app/PendingIntent;)V",
			arg0.__jniObject().object()
		);
	}
	void LocationManager::removeTestProvider(jstring arg0)
	{
		__thiz.callMethod<void>(
			"removeTestProvider",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void LocationManager::removeTestProvider(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"removeTestProvider",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void LocationManager::removeUpdates(android::app::PendingIntent arg0)
	{
		__thiz.callMethod<void>(
			"removeUpdates",
			"(Landroid/app/PendingIntent;)V",
			arg0.__jniObject().object()
		);
	}
	void LocationManager::removeUpdates(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeUpdates",
			"(Landroid/location/LocationListener;)V",
			arg0.__jniObject().object()
		);
	}
	void LocationManager::requestLocationUpdates(jstring arg0, jlong arg1, jfloat arg2, android::app::PendingIntent arg3)
	{
		__thiz.callMethod<void>(
			"requestLocationUpdates",
			"(Ljava/lang/String;JFLandroid/app/PendingIntent;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void LocationManager::requestLocationUpdates(const QString &arg0, jlong arg1, jfloat arg2, android::app::PendingIntent arg3)
	{
		__thiz.callMethod<void>(
			"requestLocationUpdates",
			"(Ljava/lang/String;JFLandroid/app/PendingIntent;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void LocationManager::requestLocationUpdates(jstring arg0, jlong arg1, jfloat arg2, __JniBaseClass arg3)
	{
		__thiz.callMethod<void>(
			"requestLocationUpdates",
			"(Ljava/lang/String;JFLandroid/location/LocationListener;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void LocationManager::requestLocationUpdates(const QString &arg0, jlong arg1, jfloat arg2, __JniBaseClass arg3)
	{
		__thiz.callMethod<void>(
			"requestLocationUpdates",
			"(Ljava/lang/String;JFLandroid/location/LocationListener;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void LocationManager::requestLocationUpdates(jlong arg0, jfloat arg1, android::location::Criteria arg2, android::app::PendingIntent arg3)
	{
		__thiz.callMethod<void>(
			"requestLocationUpdates",
			"(JFLandroid/location/Criteria;Landroid/app/PendingIntent;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	void LocationManager::requestLocationUpdates(jstring arg0, jlong arg1, jfloat arg2, __JniBaseClass arg3, android::os::Looper arg4)
	{
		__thiz.callMethod<void>(
			"requestLocationUpdates",
			"(Ljava/lang/String;JFLandroid/location/LocationListener;Landroid/os/Looper;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object()
		);
	}
	void LocationManager::requestLocationUpdates(const QString &arg0, jlong arg1, jfloat arg2, __JniBaseClass arg3, android::os::Looper arg4)
	{
		__thiz.callMethod<void>(
			"requestLocationUpdates",
			"(Ljava/lang/String;JFLandroid/location/LocationListener;Landroid/os/Looper;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object()
		);
	}
	void LocationManager::requestLocationUpdates(jlong arg0, jfloat arg1, android::location::Criteria arg2, __JniBaseClass arg3, android::os::Looper arg4)
	{
		__thiz.callMethod<void>(
			"requestLocationUpdates",
			"(JFLandroid/location/Criteria;Landroid/location/LocationListener;Landroid/os/Looper;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object()
		);
	}
	void LocationManager::requestSingleUpdate(android::location::Criteria arg0, android::app::PendingIntent arg1)
	{
		__thiz.callMethod<void>(
			"requestSingleUpdate",
			"(Landroid/location/Criteria;Landroid/app/PendingIntent;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void LocationManager::requestSingleUpdate(jstring arg0, android::app::PendingIntent arg1)
	{
		__thiz.callMethod<void>(
			"requestSingleUpdate",
			"(Ljava/lang/String;Landroid/app/PendingIntent;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void LocationManager::requestSingleUpdate(const QString &arg0, android::app::PendingIntent arg1)
	{
		__thiz.callMethod<void>(
			"requestSingleUpdate",
			"(Ljava/lang/String;Landroid/app/PendingIntent;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void LocationManager::requestSingleUpdate(android::location::Criteria arg0, __JniBaseClass arg1, android::os::Looper arg2)
	{
		__thiz.callMethod<void>(
			"requestSingleUpdate",
			"(Landroid/location/Criteria;Landroid/location/LocationListener;Landroid/os/Looper;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void LocationManager::requestSingleUpdate(jstring arg0, __JniBaseClass arg1, android::os::Looper arg2)
	{
		__thiz.callMethod<void>(
			"requestSingleUpdate",
			"(Ljava/lang/String;Landroid/location/LocationListener;Landroid/os/Looper;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void LocationManager::requestSingleUpdate(const QString &arg0, __JniBaseClass arg1, android::os::Looper arg2)
	{
		__thiz.callMethod<void>(
			"requestSingleUpdate",
			"(Ljava/lang/String;Landroid/location/LocationListener;Landroid/os/Looper;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jboolean LocationManager::sendExtraCommand(jstring arg0, jstring arg1, android::os::Bundle arg2)
	{
		return __thiz.callMethod<jboolean>(
			"sendExtraCommand",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Z",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jboolean LocationManager::sendExtraCommand(const QString &arg0, const QString &arg1, android::os::Bundle arg2)
	{
		return __thiz.callMethod<jboolean>(
			"sendExtraCommand",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	void LocationManager::setTestProviderEnabled(jstring arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setTestProviderEnabled",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	void LocationManager::setTestProviderEnabled(const QString &arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setTestProviderEnabled",
			"(Ljava/lang/String;Z)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void LocationManager::setTestProviderLocation(jstring arg0, android::location::Location arg1)
	{
		__thiz.callMethod<void>(
			"setTestProviderLocation",
			"(Ljava/lang/String;Landroid/location/Location;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void LocationManager::setTestProviderLocation(const QString &arg0, android::location::Location arg1)
	{
		__thiz.callMethod<void>(
			"setTestProviderLocation",
			"(Ljava/lang/String;Landroid/location/Location;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void LocationManager::setTestProviderStatus(jstring arg0, jint arg1, android::os::Bundle arg2, jlong arg3)
	{
		__thiz.callMethod<void>(
			"setTestProviderStatus",
			"(Ljava/lang/String;ILandroid/os/Bundle;J)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
	void LocationManager::setTestProviderStatus(const QString &arg0, jint arg1, android::os::Bundle arg2, jlong arg3)
	{
		__thiz.callMethod<void>(
			"setTestProviderStatus",
			"(Ljava/lang/String;ILandroid/os/Bundle;J)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
	void LocationManager::unregisterGnssMeasurementsCallback(android::location::GnssMeasurementsEvent_Callback arg0)
	{
		__thiz.callMethod<void>(
			"unregisterGnssMeasurementsCallback",
			"(Landroid/location/GnssMeasurementsEvent$Callback;)V",
			arg0.__jniObject().object()
		);
	}
	void LocationManager::unregisterGnssNavigationMessageCallback(android::location::GnssNavigationMessage_Callback arg0)
	{
		__thiz.callMethod<void>(
			"unregisterGnssNavigationMessageCallback",
			"(Landroid/location/GnssNavigationMessage$Callback;)V",
			arg0.__jniObject().object()
		);
	}
	void LocationManager::unregisterGnssStatusCallback(android::location::GnssStatus_Callback arg0)
	{
		__thiz.callMethod<void>(
			"unregisterGnssStatusCallback",
			"(Landroid/location/GnssStatus$Callback;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::location

