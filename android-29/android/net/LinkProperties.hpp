#pragma once

#include "../../JObject.hpp"

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

namespace android::net
{
	class LinkProperties : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit LinkProperties(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LinkProperties(QJniObject obj);
		
		// Constructors
		LinkProperties();
		
		// Methods
		jboolean addRoute(android::net::RouteInfo arg0) const;
		void clear() const;
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JObject getDnsServers() const;
		JString getDomains() const;
		android::net::ProxyInfo getHttpProxy() const;
		JString getInterfaceName() const;
		JObject getLinkAddresses() const;
		jint getMtu() const;
		JString getPrivateDnsServerName() const;
		JObject getRoutes() const;
		jint hashCode() const;
		jboolean isPrivateDnsActive() const;
		void setDnsServers(JObject arg0) const;
		void setDomains(JString arg0) const;
		void setHttpProxy(android::net::ProxyInfo arg0) const;
		void setInterfaceName(JString arg0) const;
		void setLinkAddresses(JObject arg0) const;
		void setMtu(jint arg0) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net

