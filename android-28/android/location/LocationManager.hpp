#pragma once

#include "../../JObject.hpp"

namespace android::app
{
	class PendingIntent;
}
namespace android::location
{
	class Criteria;
}
namespace android::location
{
	class GnssMeasurementsEvent_Callback;
}
namespace android::location
{
	class GnssNavigationMessage_Callback;
}
namespace android::location
{
	class GnssStatus_Callback;
}
namespace android::location
{
	class GpsStatus;
}
namespace android::location
{
	class Location;
}
namespace android::location
{
	class LocationProvider;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Handler;
}
namespace android::os
{
	class Looper;
}

namespace android::location
{
	class LocationManager : public JObject
	{
	public:
		// Fields
		static jstring GPS_PROVIDER();
		static jstring KEY_LOCATION_CHANGED();
		static jstring KEY_PROVIDER_ENABLED();
		static jstring KEY_PROXIMITY_ENTERING();
		static jstring KEY_STATUS_CHANGED();
		static jstring MODE_CHANGED_ACTION();
		static jstring NETWORK_PROVIDER();
		static jstring PASSIVE_PROVIDER();
		static jstring PROVIDERS_CHANGED_ACTION();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LocationManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LocationManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean addGpsStatusListener(JObject arg0);
		jboolean addNmeaListener(JObject arg0);
		jboolean addNmeaListener(JObject arg0, android::os::Handler arg1);
		void addProximityAlert(jdouble arg0, jdouble arg1, jfloat arg2, jlong arg3, android::app::PendingIntent arg4);
		void addTestProvider(jstring arg0, jboolean arg1, jboolean arg2, jboolean arg3, jboolean arg4, jboolean arg5, jboolean arg6, jboolean arg7, jint arg8, jint arg9);
		void clearTestProviderEnabled(jstring arg0);
		void clearTestProviderLocation(jstring arg0);
		void clearTestProviderStatus(jstring arg0);
		JObject getAllProviders();
		jstring getBestProvider(android::location::Criteria arg0, jboolean arg1);
		jstring getGnssHardwareModelName();
		jint getGnssYearOfHardware();
		android::location::GpsStatus getGpsStatus(android::location::GpsStatus arg0);
		android::location::Location getLastKnownLocation(jstring arg0);
		android::location::LocationProvider getProvider(jstring arg0);
		JObject getProviders(jboolean arg0);
		JObject getProviders(android::location::Criteria arg0, jboolean arg1);
		jboolean isLocationEnabled();
		jboolean isProviderEnabled(jstring arg0);
		jboolean registerGnssMeasurementsCallback(android::location::GnssMeasurementsEvent_Callback arg0);
		jboolean registerGnssMeasurementsCallback(android::location::GnssMeasurementsEvent_Callback arg0, android::os::Handler arg1);
		jboolean registerGnssNavigationMessageCallback(android::location::GnssNavigationMessage_Callback arg0);
		jboolean registerGnssNavigationMessageCallback(android::location::GnssNavigationMessage_Callback arg0, android::os::Handler arg1);
		jboolean registerGnssStatusCallback(android::location::GnssStatus_Callback arg0);
		jboolean registerGnssStatusCallback(android::location::GnssStatus_Callback arg0, android::os::Handler arg1);
		void removeGpsStatusListener(JObject arg0);
		void removeNmeaListener(JObject arg0);
		void removeProximityAlert(android::app::PendingIntent arg0);
		void removeTestProvider(jstring arg0);
		void removeUpdates(android::app::PendingIntent arg0);
		void removeUpdates(JObject arg0);
		void requestLocationUpdates(jstring arg0, jlong arg1, jfloat arg2, android::app::PendingIntent arg3);
		void requestLocationUpdates(jstring arg0, jlong arg1, jfloat arg2, JObject arg3);
		void requestLocationUpdates(jlong arg0, jfloat arg1, android::location::Criteria arg2, android::app::PendingIntent arg3);
		void requestLocationUpdates(jstring arg0, jlong arg1, jfloat arg2, JObject arg3, android::os::Looper arg4);
		void requestLocationUpdates(jlong arg0, jfloat arg1, android::location::Criteria arg2, JObject arg3, android::os::Looper arg4);
		void requestSingleUpdate(android::location::Criteria arg0, android::app::PendingIntent arg1);
		void requestSingleUpdate(jstring arg0, android::app::PendingIntent arg1);
		void requestSingleUpdate(android::location::Criteria arg0, JObject arg1, android::os::Looper arg2);
		void requestSingleUpdate(jstring arg0, JObject arg1, android::os::Looper arg2);
		jboolean sendExtraCommand(jstring arg0, jstring arg1, android::os::Bundle arg2);
		void setTestProviderEnabled(jstring arg0, jboolean arg1);
		void setTestProviderLocation(jstring arg0, android::location::Location arg1);
		void setTestProviderStatus(jstring arg0, jint arg1, android::os::Bundle arg2, jlong arg3);
		void unregisterGnssMeasurementsCallback(android::location::GnssMeasurementsEvent_Callback arg0);
		void unregisterGnssNavigationMessageCallback(android::location::GnssNavigationMessage_Callback arg0);
		void unregisterGnssStatusCallback(android::location::GnssStatus_Callback arg0);
	};
} // namespace android::location

