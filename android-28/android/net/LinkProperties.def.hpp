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
		LinkProperties(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JObject getDnsServers() const;
		JString getDomains() const;
		android::net::ProxyInfo getHttpProxy() const;
		JString getInterfaceName() const;
		JObject getLinkAddresses() const;
		JString getPrivateDnsServerName() const;
		JObject getRoutes() const;
		jint hashCode() const;
		jboolean isPrivateDnsActive() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net

