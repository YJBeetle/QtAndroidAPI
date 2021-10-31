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
		static QAndroidJniObject CREATOR();
		
		LinkProperties(QAndroidJniObject obj);
		// Constructors
		LinkProperties();
		
		// Methods
		jboolean addRoute(android::net::RouteInfo arg0);
		void clear();
		jint describeContents();
		jboolean equals(jobject arg0);
		QAndroidJniObject getDnsServers();
		jstring getDomains();
		QAndroidJniObject getHttpProxy();
		jstring getInterfaceName();
		QAndroidJniObject getLinkAddresses();
		jint getMtu();
		jstring getPrivateDnsServerName();
		QAndroidJniObject getRoutes();
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

