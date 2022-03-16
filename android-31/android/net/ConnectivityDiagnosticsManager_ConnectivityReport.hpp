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
	class ConnectivityDiagnosticsManager_ConnectivityReport : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static JString KEY_NETWORK_PROBES_ATTEMPTED_BITMASK();
		static JString KEY_NETWORK_PROBES_SUCCEEDED_BITMASK();
		static JString KEY_NETWORK_VALIDATION_RESULT();
		static jint NETWORK_PROBE_DNS();
		static jint NETWORK_PROBE_FALLBACK();
		static jint NETWORK_PROBE_HTTP();
		static jint NETWORK_PROBE_HTTPS();
		static jint NETWORK_PROBE_PRIVATE_DNS();
		static jint NETWORK_VALIDATION_RESULT_INVALID();
		static jint NETWORK_VALIDATION_RESULT_PARTIALLY_VALID();
		static jint NETWORK_VALIDATION_RESULT_SKIPPED();
		static jint NETWORK_VALIDATION_RESULT_VALID();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ConnectivityDiagnosticsManager_ConnectivityReport(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ConnectivityDiagnosticsManager_ConnectivityReport(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		ConnectivityDiagnosticsManager_ConnectivityReport(android::net::Network arg0, jlong arg1, android::net::LinkProperties arg2, android::net::NetworkCapabilities arg3, android::os::PersistableBundle arg4);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::os::PersistableBundle getAdditionalInfo() const;
		android::net::LinkProperties getLinkProperties() const;
		android::net::Network getNetwork() const;
		android::net::NetworkCapabilities getNetworkCapabilities() const;
		jlong getReportTimestamp() const;
		jint hashCode() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net

