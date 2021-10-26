#pragma once

#ifndef ANDROID_LOCATION_LOCATIONMANAGER
#define ANDROID_LOCATION_LOCATIONMANAGER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::location
{
	class LocationProvider;
}
namespace __jni_impl::android::location
{
	class Criteria;
}
namespace __jni_impl::android::os
{
	class Looper;
}
namespace __jni_impl::android::app
{
	class PendingIntent;
}
namespace __jni_impl::android::location
{
	class Location;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::location
{
	class GnssStatus_Callback;
}
namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::location
{
	class GnssMeasurementsEvent_Callback;
}
namespace __jni_impl::android::location
{
	class GnssNavigationMessage_Callback;
}
namespace __jni_impl::android::location
{
	class GpsStatus;
}

namespace __jni_impl::android::location
{
	class LocationManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring EXTRA_PROVIDER_NAME();
		static jstring GPS_PROVIDER();
		static jstring KEY_LOCATION_CHANGED();
		static jstring KEY_PROVIDER_ENABLED();
		static jstring KEY_PROXIMITY_ENTERING();
		static jstring KEY_STATUS_CHANGED();
		static jstring MODE_CHANGED_ACTION();
		static jstring NETWORK_PROVIDER();
		static jstring PASSIVE_PROVIDER();
		static jstring PROVIDERS_CHANGED_ACTION();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getProvider(jstring arg0);
		QAndroidJniObject getProvider(const QString &arg0);
		QAndroidJniObject getProviders(__jni_impl::android::location::Criteria arg0, jboolean arg1);
		QAndroidJniObject getProviders(jboolean arg0);
		QAndroidJniObject getAllProviders();
		jstring getBestProvider(__jni_impl::android::location::Criteria arg0, jboolean arg1);
		void requestLocationUpdates(jlong arg0, jfloat arg1, __jni_impl::android::location::Criteria arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::android::os::Looper arg4);
		void requestLocationUpdates(jstring arg0, jlong arg1, jfloat arg2, __jni_impl::android::app::PendingIntent arg3);
		void requestLocationUpdates(const QString &arg0, jlong arg1, jfloat arg2, __jni_impl::android::app::PendingIntent arg3);
		void requestLocationUpdates(jlong arg0, jfloat arg1, __jni_impl::android::location::Criteria arg2, __jni_impl::android::app::PendingIntent arg3);
		void requestLocationUpdates(jstring arg0, jlong arg1, jfloat arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::android::os::Looper arg4);
		void requestLocationUpdates(const QString &arg0, jlong arg1, jfloat arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::android::os::Looper arg4);
		void requestLocationUpdates(jstring arg0, jlong arg1, jfloat arg2, __jni_impl::__JniBaseClass arg3);
		void requestLocationUpdates(const QString &arg0, jlong arg1, jfloat arg2, __jni_impl::__JniBaseClass arg3);
		void requestSingleUpdate(jstring arg0, __jni_impl::android::app::PendingIntent arg1);
		void requestSingleUpdate(const QString &arg0, __jni_impl::android::app::PendingIntent arg1);
		void requestSingleUpdate(__jni_impl::android::location::Criteria arg0, __jni_impl::android::app::PendingIntent arg1);
		void requestSingleUpdate(__jni_impl::android::location::Criteria arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::os::Looper arg2);
		void requestSingleUpdate(jstring arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::os::Looper arg2);
		void requestSingleUpdate(const QString &arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::os::Looper arg2);
		void removeUpdates(__jni_impl::android::app::PendingIntent arg0);
		void removeUpdates(__jni_impl::__JniBaseClass arg0);
		void addProximityAlert(jdouble arg0, jdouble arg1, jfloat arg2, jlong arg3, __jni_impl::android::app::PendingIntent arg4);
		void removeProximityAlert(__jni_impl::android::app::PendingIntent arg0);
		jboolean isLocationEnabled();
		jboolean isProviderEnabled(jstring arg0);
		jboolean isProviderEnabled(const QString &arg0);
		QAndroidJniObject getLastKnownLocation(jstring arg0);
		QAndroidJniObject getLastKnownLocation(const QString &arg0);
		void addTestProvider(jstring arg0, jboolean arg1, jboolean arg2, jboolean arg3, jboolean arg4, jboolean arg5, jboolean arg6, jboolean arg7, jint arg8, jint arg9);
		void addTestProvider(const QString &arg0, jboolean arg1, jboolean arg2, jboolean arg3, jboolean arg4, jboolean arg5, jboolean arg6, jboolean arg7, jint arg8, jint arg9);
		void removeTestProvider(jstring arg0);
		void removeTestProvider(const QString &arg0);
		void setTestProviderLocation(jstring arg0, __jni_impl::android::location::Location arg1);
		void setTestProviderLocation(const QString &arg0, __jni_impl::android::location::Location arg1);
		void clearTestProviderLocation(jstring arg0);
		void clearTestProviderLocation(const QString &arg0);
		void setTestProviderEnabled(jstring arg0, jboolean arg1);
		void setTestProviderEnabled(const QString &arg0, jboolean arg1);
		void clearTestProviderEnabled(jstring arg0);
		void clearTestProviderEnabled(const QString &arg0);
		void setTestProviderStatus(jstring arg0, jint arg1, __jni_impl::android::os::Bundle arg2, jlong arg3);
		void setTestProviderStatus(const QString &arg0, jint arg1, __jni_impl::android::os::Bundle arg2, jlong arg3);
		void clearTestProviderStatus(jstring arg0);
		void clearTestProviderStatus(const QString &arg0);
		jboolean addGpsStatusListener(__jni_impl::__JniBaseClass arg0);
		void removeGpsStatusListener(__jni_impl::__JniBaseClass arg0);
		jboolean registerGnssStatusCallback(__jni_impl::android::location::GnssStatus_Callback arg0, __jni_impl::android::os::Handler arg1);
		jboolean registerGnssStatusCallback(__jni_impl::android::location::GnssStatus_Callback arg0);
		void unregisterGnssStatusCallback(__jni_impl::android::location::GnssStatus_Callback arg0);
		jboolean addNmeaListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1);
		jboolean addNmeaListener(__jni_impl::__JniBaseClass arg0);
		void removeNmeaListener(__jni_impl::__JniBaseClass arg0);
		jboolean registerGnssMeasurementsCallback(__jni_impl::android::location::GnssMeasurementsEvent_Callback arg0, __jni_impl::android::os::Handler arg1);
		jboolean registerGnssMeasurementsCallback(__jni_impl::android::location::GnssMeasurementsEvent_Callback arg0);
		void unregisterGnssMeasurementsCallback(__jni_impl::android::location::GnssMeasurementsEvent_Callback arg0);
		jboolean registerGnssNavigationMessageCallback(__jni_impl::android::location::GnssNavigationMessage_Callback arg0, __jni_impl::android::os::Handler arg1);
		jboolean registerGnssNavigationMessageCallback(__jni_impl::android::location::GnssNavigationMessage_Callback arg0);
		void unregisterGnssNavigationMessageCallback(__jni_impl::android::location::GnssNavigationMessage_Callback arg0);
		QAndroidJniObject getGpsStatus(__jni_impl::android::location::GpsStatus arg0);
		jint getGnssYearOfHardware();
		jstring getGnssHardwareModelName();
		jboolean sendExtraCommand(jstring arg0, jstring arg1, __jni_impl::android::os::Bundle arg2);
		jboolean sendExtraCommand(const QString &arg0, const QString &arg1, __jni_impl::android::os::Bundle arg2);
	};
} // namespace __jni_impl::android::location

#include "LocationProvider.hpp"
#include "Criteria.hpp"
#include "../os/Looper.hpp"
#include "../app/PendingIntent.hpp"
#include "Location.hpp"
#include "../os/Bundle.hpp"
#include "GnssStatus_Callback.hpp"
#include "../os/Handler.hpp"
#include "GnssMeasurementsEvent_Callback.hpp"
#include "GnssNavigationMessage_Callback.hpp"
#include "GpsStatus.hpp"

namespace __jni_impl::android::location
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
	
	// Constructors
	void LocationManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.location.LocationManager",
			"(V)V");
	}
	
	// Methods
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
	QAndroidJniObject LocationManager::getProviders(__jni_impl::android::location::Criteria arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"getProviders",
			"(Landroid/location/Criteria;Z)Ljava/util/List;",
			arg0.__jniObject().object(),
			arg1
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
	QAndroidJniObject LocationManager::getAllProviders()
	{
		return __thiz.callObjectMethod(
			"getAllProviders",
			"()Ljava/util/List;"
		);
	}
	jstring LocationManager::getBestProvider(__jni_impl::android::location::Criteria arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"getBestProvider",
			"(Landroid/location/Criteria;Z)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1
		).object<jstring>();
	}
	void LocationManager::requestLocationUpdates(jlong arg0, jfloat arg1, __jni_impl::android::location::Criteria arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::android::os::Looper arg4)
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
	void LocationManager::requestLocationUpdates(jstring arg0, jlong arg1, jfloat arg2, __jni_impl::android::app::PendingIntent arg3)
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
	void LocationManager::requestLocationUpdates(const QString &arg0, jlong arg1, jfloat arg2, __jni_impl::android::app::PendingIntent arg3)
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
	void LocationManager::requestLocationUpdates(jlong arg0, jfloat arg1, __jni_impl::android::location::Criteria arg2, __jni_impl::android::app::PendingIntent arg3)
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
	void LocationManager::requestLocationUpdates(jstring arg0, jlong arg1, jfloat arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::android::os::Looper arg4)
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
	void LocationManager::requestLocationUpdates(const QString &arg0, jlong arg1, jfloat arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::android::os::Looper arg4)
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
	void LocationManager::requestLocationUpdates(jstring arg0, jlong arg1, jfloat arg2, __jni_impl::__JniBaseClass arg3)
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
	void LocationManager::requestLocationUpdates(const QString &arg0, jlong arg1, jfloat arg2, __jni_impl::__JniBaseClass arg3)
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
	void LocationManager::requestSingleUpdate(jstring arg0, __jni_impl::android::app::PendingIntent arg1)
	{
		__thiz.callMethod<void>(
			"requestSingleUpdate",
			"(Ljava/lang/String;Landroid/app/PendingIntent;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void LocationManager::requestSingleUpdate(const QString &arg0, __jni_impl::android::app::PendingIntent arg1)
	{
		__thiz.callMethod<void>(
			"requestSingleUpdate",
			"(Ljava/lang/String;Landroid/app/PendingIntent;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void LocationManager::requestSingleUpdate(__jni_impl::android::location::Criteria arg0, __jni_impl::android::app::PendingIntent arg1)
	{
		__thiz.callMethod<void>(
			"requestSingleUpdate",
			"(Landroid/location/Criteria;Landroid/app/PendingIntent;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void LocationManager::requestSingleUpdate(__jni_impl::android::location::Criteria arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::os::Looper arg2)
	{
		__thiz.callMethod<void>(
			"requestSingleUpdate",
			"(Landroid/location/Criteria;Landroid/location/LocationListener;Landroid/os/Looper;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void LocationManager::requestSingleUpdate(jstring arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::os::Looper arg2)
	{
		__thiz.callMethod<void>(
			"requestSingleUpdate",
			"(Ljava/lang/String;Landroid/location/LocationListener;Landroid/os/Looper;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void LocationManager::requestSingleUpdate(const QString &arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::os::Looper arg2)
	{
		__thiz.callMethod<void>(
			"requestSingleUpdate",
			"(Ljava/lang/String;Landroid/location/LocationListener;Landroid/os/Looper;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void LocationManager::removeUpdates(__jni_impl::android::app::PendingIntent arg0)
	{
		__thiz.callMethod<void>(
			"removeUpdates",
			"(Landroid/app/PendingIntent;)V",
			arg0.__jniObject().object()
		);
	}
	void LocationManager::removeUpdates(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeUpdates",
			"(Landroid/location/LocationListener;)V",
			arg0.__jniObject().object()
		);
	}
	void LocationManager::addProximityAlert(jdouble arg0, jdouble arg1, jfloat arg2, jlong arg3, __jni_impl::android::app::PendingIntent arg4)
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
	void LocationManager::removeProximityAlert(__jni_impl::android::app::PendingIntent arg0)
	{
		__thiz.callMethod<void>(
			"removeProximityAlert",
			"(Landroid/app/PendingIntent;)V",
			arg0.__jniObject().object()
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
	void LocationManager::setTestProviderLocation(jstring arg0, __jni_impl::android::location::Location arg1)
	{
		__thiz.callMethod<void>(
			"setTestProviderLocation",
			"(Ljava/lang/String;Landroid/location/Location;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void LocationManager::setTestProviderLocation(const QString &arg0, __jni_impl::android::location::Location arg1)
	{
		__thiz.callMethod<void>(
			"setTestProviderLocation",
			"(Ljava/lang/String;Landroid/location/Location;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
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
	void LocationManager::setTestProviderStatus(jstring arg0, jint arg1, __jni_impl::android::os::Bundle arg2, jlong arg3)
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
	void LocationManager::setTestProviderStatus(const QString &arg0, jint arg1, __jni_impl::android::os::Bundle arg2, jlong arg3)
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
	jboolean LocationManager::addGpsStatusListener(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"addGpsStatusListener",
			"(Landroid/location/GpsStatus$Listener;)Z",
			arg0.__jniObject().object()
		);
	}
	void LocationManager::removeGpsStatusListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeGpsStatusListener",
			"(Landroid/location/GpsStatus$Listener;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean LocationManager::registerGnssStatusCallback(__jni_impl::android::location::GnssStatus_Callback arg0, __jni_impl::android::os::Handler arg1)
	{
		return __thiz.callMethod<jboolean>(
			"registerGnssStatusCallback",
			"(Landroid/location/GnssStatus$Callback;Landroid/os/Handler;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean LocationManager::registerGnssStatusCallback(__jni_impl::android::location::GnssStatus_Callback arg0)
	{
		return __thiz.callMethod<jboolean>(
			"registerGnssStatusCallback",
			"(Landroid/location/GnssStatus$Callback;)Z",
			arg0.__jniObject().object()
		);
	}
	void LocationManager::unregisterGnssStatusCallback(__jni_impl::android::location::GnssStatus_Callback arg0)
	{
		__thiz.callMethod<void>(
			"unregisterGnssStatusCallback",
			"(Landroid/location/GnssStatus$Callback;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean LocationManager::addNmeaListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1)
	{
		return __thiz.callMethod<jboolean>(
			"addNmeaListener",
			"(Landroid/location/OnNmeaMessageListener;Landroid/os/Handler;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean LocationManager::addNmeaListener(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"addNmeaListener",
			"(Landroid/location/OnNmeaMessageListener;)Z",
			arg0.__jniObject().object()
		);
	}
	void LocationManager::removeNmeaListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeNmeaListener",
			"(Landroid/location/OnNmeaMessageListener;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean LocationManager::registerGnssMeasurementsCallback(__jni_impl::android::location::GnssMeasurementsEvent_Callback arg0, __jni_impl::android::os::Handler arg1)
	{
		return __thiz.callMethod<jboolean>(
			"registerGnssMeasurementsCallback",
			"(Landroid/location/GnssMeasurementsEvent$Callback;Landroid/os/Handler;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean LocationManager::registerGnssMeasurementsCallback(__jni_impl::android::location::GnssMeasurementsEvent_Callback arg0)
	{
		return __thiz.callMethod<jboolean>(
			"registerGnssMeasurementsCallback",
			"(Landroid/location/GnssMeasurementsEvent$Callback;)Z",
			arg0.__jniObject().object()
		);
	}
	void LocationManager::unregisterGnssMeasurementsCallback(__jni_impl::android::location::GnssMeasurementsEvent_Callback arg0)
	{
		__thiz.callMethod<void>(
			"unregisterGnssMeasurementsCallback",
			"(Landroid/location/GnssMeasurementsEvent$Callback;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean LocationManager::registerGnssNavigationMessageCallback(__jni_impl::android::location::GnssNavigationMessage_Callback arg0, __jni_impl::android::os::Handler arg1)
	{
		return __thiz.callMethod<jboolean>(
			"registerGnssNavigationMessageCallback",
			"(Landroid/location/GnssNavigationMessage$Callback;Landroid/os/Handler;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean LocationManager::registerGnssNavigationMessageCallback(__jni_impl::android::location::GnssNavigationMessage_Callback arg0)
	{
		return __thiz.callMethod<jboolean>(
			"registerGnssNavigationMessageCallback",
			"(Landroid/location/GnssNavigationMessage$Callback;)Z",
			arg0.__jniObject().object()
		);
	}
	void LocationManager::unregisterGnssNavigationMessageCallback(__jni_impl::android::location::GnssNavigationMessage_Callback arg0)
	{
		__thiz.callMethod<void>(
			"unregisterGnssNavigationMessageCallback",
			"(Landroid/location/GnssNavigationMessage$Callback;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LocationManager::getGpsStatus(__jni_impl::android::location::GpsStatus arg0)
	{
		return __thiz.callObjectMethod(
			"getGpsStatus",
			"(Landroid/location/GpsStatus;)Landroid/location/GpsStatus;",
			arg0.__jniObject().object()
		);
	}
	jint LocationManager::getGnssYearOfHardware()
	{
		return __thiz.callMethod<jint>(
			"getGnssYearOfHardware",
			"()I"
		);
	}
	jstring LocationManager::getGnssHardwareModelName()
	{
		return __thiz.callObjectMethod(
			"getGnssHardwareModelName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean LocationManager::sendExtraCommand(jstring arg0, jstring arg1, __jni_impl::android::os::Bundle arg2)
	{
		return __thiz.callMethod<jboolean>(
			"sendExtraCommand",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Z",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jboolean LocationManager::sendExtraCommand(const QString &arg0, const QString &arg1, __jni_impl::android::os::Bundle arg2)
	{
		return __thiz.callMethod<jboolean>(
			"sendExtraCommand",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::location

namespace android::location
{
	class LocationManager : public __jni_impl::android::location::LocationManager
	{
	public:
		LocationManager(QAndroidJniObject obj) { __thiz = obj; }
		LocationManager()
		{
			__constructor();
		}
	};
} // namespace android::location

#endif // ANDROID_LOCATION_LOCATIONMANAGER

