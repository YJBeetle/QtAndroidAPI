#pragma once

#include "../../JObject.hpp"

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
	class RouteInfo;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;
namespace java::net
{
	class Inet4Address;
}

namespace android::net
{
	class LinkProperties : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LinkProperties(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LinkProperties(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		LinkProperties();
		
		// Methods
		jboolean addRoute(android::net::RouteInfo arg0) const;
		void clear() const;
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		java::net::Inet4Address getDhcpServerAddress() const;
		JObject getDnsServers() const;
		JString getDomains() const;
		android::net::ProxyInfo getHttpProxy() const;
		JString getInterfaceName() const;
		JObject getLinkAddresses() const;
		jint getMtu() const;
		android::net::IpPrefix getNat64Prefix() const;
		JString getPrivateDnsServerName() const;
		JObject getRoutes() const;
		jint hashCode() const;
		jboolean isPrivateDnsActive() const;
		jboolean isWakeOnLanSupported() const;
		void setDhcpServerAddress(java::net::Inet4Address arg0) const;
		void setDnsServers(JObject arg0) const;
		void setDomains(JString arg0) const;
		void setHttpProxy(android::net::ProxyInfo arg0) const;
		void setInterfaceName(JString arg0) const;
		void setLinkAddresses(JObject arg0) const;
		void setMtu(jint arg0) const;
		void setNat64Prefix(android::net::IpPrefix arg0) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net

