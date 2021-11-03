#pragma once

#include "../../JObject.hpp"

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
	class LinkProperties : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit LinkProperties(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LinkProperties(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		JObject getDnsServers();
		jstring getDomains();
		android::net::ProxyInfo getHttpProxy();
		jstring getInterfaceName();
		JObject getLinkAddresses();
		jstring getPrivateDnsServerName();
		JObject getRoutes();
		jint hashCode();
		jboolean isPrivateDnsActive();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net

