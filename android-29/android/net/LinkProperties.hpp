#pragma once

#include "../../__JniBaseClass.hpp"

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

namespace android::net
{
	class LinkProperties : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit LinkProperties(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		LinkProperties(QJniObject obj);
		
		// Constructors
		LinkProperties();
		
		// Methods
		jboolean addRoute(android::net::RouteInfo arg0);
		void clear();
		jint describeContents();
		jboolean equals(jobject arg0);
		__JniBaseClass getDnsServers();
		jstring getDomains();
		android::net::ProxyInfo getHttpProxy();
		jstring getInterfaceName();
		__JniBaseClass getLinkAddresses();
		jint getMtu();
		jstring getPrivateDnsServerName();
		__JniBaseClass getRoutes();
		jint hashCode();
		jboolean isPrivateDnsActive();
		void setDnsServers(__JniBaseClass arg0);
		void setDomains(jstring arg0);
		void setHttpProxy(android::net::ProxyInfo arg0);
		void setInterfaceName(jstring arg0);
		void setLinkAddresses(__JniBaseClass arg0);
		void setMtu(jint arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net

