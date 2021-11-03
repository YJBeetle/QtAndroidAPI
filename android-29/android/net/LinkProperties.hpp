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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LinkProperties(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LinkProperties(QAndroidJniObject obj);
		
		// Constructors
		LinkProperties();
		
		// Methods
		jboolean addRoute(android::net::RouteInfo arg0);
		void clear();
		jint describeContents();
		jboolean equals(JObject arg0);
		JObject getDnsServers();
		JString getDomains();
		android::net::ProxyInfo getHttpProxy();
		JString getInterfaceName();
		JObject getLinkAddresses();
		jint getMtu();
		JString getPrivateDnsServerName();
		JObject getRoutes();
		jint hashCode();
		jboolean isPrivateDnsActive();
		void setDnsServers(JObject arg0);
		void setDomains(JString arg0);
		void setHttpProxy(android::net::ProxyInfo arg0);
		void setInterfaceName(JString arg0);
		void setLinkAddresses(JObject arg0);
		void setMtu(jint arg0);
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net

