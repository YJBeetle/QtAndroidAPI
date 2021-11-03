#pragma once

#include "../../JObject.hpp"

namespace android::app
{
	class PendingIntent;
}
namespace android::net
{
	class ProxyInfo;
}
namespace android::net
{
	class VpnService;
}
namespace android::os
{
	class ParcelFileDescriptor;
}
namespace java::net
{
	class InetAddress;
}

namespace android::net
{
	class VpnService_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit VpnService_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VpnService_Builder(QJniObject obj);
		
		// Constructors
		VpnService_Builder(android::net::VpnService arg0);
		
		// Methods
		android::net::VpnService_Builder addAddress(jstring arg0, jint arg1);
		android::net::VpnService_Builder addAddress(java::net::InetAddress arg0, jint arg1);
		android::net::VpnService_Builder addAllowedApplication(jstring arg0);
		android::net::VpnService_Builder addDisallowedApplication(jstring arg0);
		android::net::VpnService_Builder addDnsServer(jstring arg0);
		android::net::VpnService_Builder addDnsServer(java::net::InetAddress arg0);
		android::net::VpnService_Builder addRoute(jstring arg0, jint arg1);
		android::net::VpnService_Builder addRoute(java::net::InetAddress arg0, jint arg1);
		android::net::VpnService_Builder addSearchDomain(jstring arg0);
		android::net::VpnService_Builder allowBypass();
		android::net::VpnService_Builder allowFamily(jint arg0);
		android::os::ParcelFileDescriptor establish();
		android::net::VpnService_Builder setBlocking(jboolean arg0);
		android::net::VpnService_Builder setConfigureIntent(android::app::PendingIntent arg0);
		android::net::VpnService_Builder setHttpProxy(android::net::ProxyInfo arg0);
		android::net::VpnService_Builder setMetered(jboolean arg0);
		android::net::VpnService_Builder setMtu(jint arg0);
		android::net::VpnService_Builder setSession(jstring arg0);
		android::net::VpnService_Builder setUnderlyingNetworks(jarray arg0);
	};
} // namespace android::net

