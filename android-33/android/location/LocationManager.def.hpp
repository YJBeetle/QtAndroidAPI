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
	class GnssCapabilities;
}
namespace android::location
{
	class GnssMeasurementRequest;
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
namespace android::location
{
	class LocationRequest;
}
namespace android::location::provider
{
	class ProviderProperties;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class CancellationSignal;
}
namespace android::os
{
	class Handler;
}
namespace android::os
{
	class Looper;
}
class JString;

namespace android::location
{
	class LocationManager : public JObject
	{
	public:
		// Fields
		static JString ACTION_GNSS_CAPABILITIES_CHANGED();
		static JString EXTRA_GNSS_CAPABILITIES();
		static JString EXTRA_LOCATION_ENABLED();
		static JString EXTRA_PROVIDER_ENABLED();
		static JString EXTRA_PROVIDER_NAME();
		static JString FUSED_PROVIDER();
		static JString GPS_PROVIDER();
		static JString KEY_FLUSH_COMPLETE();
		static JString KEY_LOCATIONS();
		static JString KEY_LOCATION_CHANGED();
		static JString KEY_PROVIDER_ENABLED();
		static JString KEY_PROXIMITY_ENTERING();
		static JString KEY_STATUS_CHANGED();
		static JString MODE_CHANGED_ACTION();
		static JString NETWORK_PROVIDER();
		static JString PASSIVE_PROVIDER();
		static JString PROVIDERS_CHANGED_ACTION();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LocationManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LocationManager(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean addGpsStatusListener(JObject arg0) const;
		jboolean addNmeaListener(JObject arg0) const;
		jboolean addNmeaListener(JObject arg0, android::os::Handler arg1) const;
		jboolean addNmeaListener(JObject arg0, JObject arg1) const;
		void addProximityAlert(jdouble arg0, jdouble arg1, jfloat arg2, jlong arg3, android::app::PendingIntent arg4) const;
		void addTestProvider(JString arg0, android::location::provider::ProviderProperties arg1) const;
		void addTestProvider(JString arg0, android::location::provider::ProviderProperties arg1, JObject arg2) const;
		void addTestProvider(JString arg0, jboolean arg1, jboolean arg2, jboolean arg3, jboolean arg4, jboolean arg5, jboolean arg6, jboolean arg7, jint arg8, jint arg9) const;
		void clearTestProviderEnabled(JString arg0) const;
		void clearTestProviderLocation(JString arg0) const;
		void clearTestProviderStatus(JString arg0) const;
		JObject getAllProviders() const;
		JString getBestProvider(android::location::Criteria arg0, jboolean arg1) const;
		void getCurrentLocation(JString arg0, android::os::CancellationSignal arg1, JObject arg2, JObject arg3) const;
		void getCurrentLocation(JString arg0, android::location::LocationRequest arg1, android::os::CancellationSignal arg2, JObject arg3, JObject arg4) const;
		JObject getGnssAntennaInfos() const;
		android::location::GnssCapabilities getGnssCapabilities() const;
		JString getGnssHardwareModelName() const;
		jint getGnssYearOfHardware() const;
		android::location::GpsStatus getGpsStatus(android::location::GpsStatus arg0) const;
		android::location::Location getLastKnownLocation(JString arg0) const;
		android::location::LocationProvider getProvider(JString arg0) const;
		android::location::provider::ProviderProperties getProviderProperties(JString arg0) const;
		JObject getProviders(jboolean arg0) const;
		JObject getProviders(android::location::Criteria arg0, jboolean arg1) const;
		jboolean hasProvider(JString arg0) const;
		jboolean isLocationEnabled() const;
		jboolean isProviderEnabled(JString arg0) const;
		jboolean registerAntennaInfoListener(JObject arg0, JObject arg1) const;
		jboolean registerGnssMeasurementsCallback(android::location::GnssMeasurementsEvent_Callback arg0) const;
		jboolean registerGnssMeasurementsCallback(android::location::GnssMeasurementsEvent_Callback arg0, android::os::Handler arg1) const;
		jboolean registerGnssMeasurementsCallback(JObject arg0, android::location::GnssMeasurementsEvent_Callback arg1) const;
		jboolean registerGnssMeasurementsCallback(android::location::GnssMeasurementRequest arg0, JObject arg1, android::location::GnssMeasurementsEvent_Callback arg2) const;
		jboolean registerGnssNavigationMessageCallback(android::location::GnssNavigationMessage_Callback arg0) const;
		jboolean registerGnssNavigationMessageCallback(android::location::GnssNavigationMessage_Callback arg0, android::os::Handler arg1) const;
		jboolean registerGnssNavigationMessageCallback(JObject arg0, android::location::GnssNavigationMessage_Callback arg1) const;
		jboolean registerGnssStatusCallback(android::location::GnssStatus_Callback arg0) const;
		jboolean registerGnssStatusCallback(android::location::GnssStatus_Callback arg0, android::os::Handler arg1) const;
		jboolean registerGnssStatusCallback(JObject arg0, android::location::GnssStatus_Callback arg1) const;
		void removeGpsStatusListener(JObject arg0) const;
		void removeNmeaListener(JObject arg0) const;
		void removeProximityAlert(android::app::PendingIntent arg0) const;
		void removeTestProvider(JString arg0) const;
		void removeUpdates(android::app::PendingIntent arg0) const;
		void removeUpdates(JObject arg0) const;
		void requestFlush(JString arg0, android::app::PendingIntent arg1, jint arg2) const;
		void requestFlush(JString arg0, JObject arg1, jint arg2) const;
		void requestLocationUpdates(JString arg0, android::location::LocationRequest arg1, android::app::PendingIntent arg2) const;
		void requestLocationUpdates(JString arg0, android::location::LocationRequest arg1, JObject arg2, JObject arg3) const;
		void requestLocationUpdates(JString arg0, jlong arg1, jfloat arg2, android::app::PendingIntent arg3) const;
		void requestLocationUpdates(JString arg0, jlong arg1, jfloat arg2, JObject arg3) const;
		void requestLocationUpdates(jlong arg0, jfloat arg1, android::location::Criteria arg2, android::app::PendingIntent arg3) const;
		void requestLocationUpdates(JString arg0, jlong arg1, jfloat arg2, JObject arg3, android::os::Looper arg4) const;
		void requestLocationUpdates(JString arg0, jlong arg1, jfloat arg2, JObject arg3, JObject arg4) const;
		void requestLocationUpdates(jlong arg0, jfloat arg1, android::location::Criteria arg2, JObject arg3, android::os::Looper arg4) const;
		void requestLocationUpdates(jlong arg0, jfloat arg1, android::location::Criteria arg2, JObject arg3, JObject arg4) const;
		void requestSingleUpdate(android::location::Criteria arg0, android::app::PendingIntent arg1) const;
		void requestSingleUpdate(JString arg0, android::app::PendingIntent arg1) const;
		void requestSingleUpdate(android::location::Criteria arg0, JObject arg1, android::os::Looper arg2) const;
		void requestSingleUpdate(JString arg0, JObject arg1, android::os::Looper arg2) const;
		jboolean sendExtraCommand(JString arg0, JString arg1, android::os::Bundle arg2) const;
		void setTestProviderEnabled(JString arg0, jboolean arg1) const;
		void setTestProviderLocation(JString arg0, android::location::Location arg1) const;
		void setTestProviderStatus(JString arg0, jint arg1, android::os::Bundle arg2, jlong arg3) const;
		void unregisterAntennaInfoListener(JObject arg0) const;
		void unregisterGnssMeasurementsCallback(android::location::GnssMeasurementsEvent_Callback arg0) const;
		void unregisterGnssNavigationMessageCallback(android::location::GnssNavigationMessage_Callback arg0) const;
		void unregisterGnssStatusCallback(android::location::GnssStatus_Callback arg0) const;
	};
} // namespace android::location

