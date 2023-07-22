#pragma once

#include "../../JObject.hpp"

class JArray;
namespace android::app
{
	class PendingIntent;
}
namespace android::net
{
	class IpPrefix;
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
class JString;
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VpnService_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VpnService_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		VpnService_Builder(android::net::VpnService arg0);
		
		// Methods
		android::net::VpnService_Builder addAddress(JString arg0, jint arg1) const;
		android::net::VpnService_Builder addAddress(java::net::InetAddress arg0, jint arg1) const;
		android::net::VpnService_Builder addAllowedApplication(JString arg0) const;
		android::net::VpnService_Builder addDisallowedApplication(JString arg0) const;
		android::net::VpnService_Builder addDnsServer(JString arg0) const;
		android::net::VpnService_Builder addDnsServer(java::net::InetAddress arg0) const;
		android::net::VpnService_Builder addRoute(android::net::IpPrefix arg0) const;
		android::net::VpnService_Builder addRoute(JString arg0, jint arg1) const;
		android::net::VpnService_Builder addRoute(java::net::InetAddress arg0, jint arg1) const;
		android::net::VpnService_Builder addSearchDomain(JString arg0) const;
		android::net::VpnService_Builder allowBypass() const;
		android::net::VpnService_Builder allowFamily(jint arg0) const;
		android::os::ParcelFileDescriptor establish() const;
		android::net::VpnService_Builder excludeRoute(android::net::IpPrefix arg0) const;
		android::net::VpnService_Builder setBlocking(jboolean arg0) const;
		android::net::VpnService_Builder setConfigureIntent(android::app::PendingIntent arg0) const;
		android::net::VpnService_Builder setHttpProxy(android::net::ProxyInfo arg0) const;
		android::net::VpnService_Builder setMetered(jboolean arg0) const;
		android::net::VpnService_Builder setMtu(jint arg0) const;
		android::net::VpnService_Builder setSession(JString arg0) const;
		android::net::VpnService_Builder setUnderlyingNetworks(JArray arg0) const;
	};
} // namespace android::net

