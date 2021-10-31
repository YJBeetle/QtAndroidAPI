#pragma once

#include "../../__JniBaseClass.hpp"

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

namespace android::net
{
	class ConnectivityDiagnosticsManager_ConnectivityReport : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jstring KEY_NETWORK_PROBES_ATTEMPTED_BITMASK();
		static jstring KEY_NETWORK_PROBES_SUCCEEDED_BITMASK();
		static jstring KEY_NETWORK_VALIDATION_RESULT();
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
		template<typename ...Ts> explicit ConnectivityDiagnosticsManager_ConnectivityReport(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ConnectivityDiagnosticsManager_ConnectivityReport(QAndroidJniObject obj);
		
		// Constructors
		ConnectivityDiagnosticsManager_ConnectivityReport(android::net::Network arg0, jlong arg1, android::net::LinkProperties arg2, android::net::NetworkCapabilities arg3, android::os::PersistableBundle arg4);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		android::os::PersistableBundle getAdditionalInfo();
		android::net::LinkProperties getLinkProperties();
		android::net::Network getNetwork();
		android::net::NetworkCapabilities getNetworkCapabilities();
		jlong getReportTimestamp();
		jint hashCode();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net
