#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class LinkProperties;
}
namespace android::net
{
	class Network;
}
namespace android::net
{
	class NetworkCapabilities;
}
namespace android::os
{
	class Parcel;
}
namespace android::os
{
	class PersistableBundle;
}
class JObject;
class JString;

namespace android::net
{
	class ConnectivityDiagnosticsManager_DataStallReport : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint DETECTION_METHOD_DNS_EVENTS();
		static jint DETECTION_METHOD_TCP_METRICS();
		static JString KEY_DNS_CONSECUTIVE_TIMEOUTS();
		static JString KEY_TCP_METRICS_COLLECTION_PERIOD_MILLIS();
		static JString KEY_TCP_PACKET_FAIL_RATE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ConnectivityDiagnosticsManager_DataStallReport(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ConnectivityDiagnosticsManager_DataStallReport(QAndroidJniObject obj);
		
		// Constructors
		ConnectivityDiagnosticsManager_DataStallReport(android::net::Network arg0, jlong arg1, jint arg2, android::net::LinkProperties arg3, android::net::NetworkCapabilities arg4, android::os::PersistableBundle arg5);
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		jint getDetectionMethod();
		android::net::LinkProperties getLinkProperties();
		android::net::Network getNetwork();
		android::net::NetworkCapabilities getNetworkCapabilities();
		jlong getReportTimestamp();
		android::os::PersistableBundle getStallDetails();
		jint hashCode();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net

