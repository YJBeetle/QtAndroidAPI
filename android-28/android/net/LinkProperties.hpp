#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class ProxyInfo;
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
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		__JniBaseClass getDnsServers();
		jstring getDomains();
		android::net::ProxyInfo getHttpProxy();
		jstring getInterfaceName();
		__JniBaseClass getLinkAddresses();
		jstring getPrivateDnsServerName();
		__JniBaseClass getRoutes();
		jint hashCode();
		jboolean isPrivateDnsActive();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net

