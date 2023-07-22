#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class LinkAddress;
}
namespace android::net
{
	class StaticIpConfiguration;
}
class JString;
namespace java::net
{
	class InetAddress;
}

namespace android::net
{
	class StaticIpConfiguration_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StaticIpConfiguration_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StaticIpConfiguration_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		StaticIpConfiguration_Builder();
		
		// Methods
		android::net::StaticIpConfiguration build() const;
		android::net::StaticIpConfiguration_Builder setDnsServers(JObject arg0) const;
		android::net::StaticIpConfiguration_Builder setDomains(JString arg0) const;
		android::net::StaticIpConfiguration_Builder setGateway(java::net::InetAddress arg0) const;
		android::net::StaticIpConfiguration_Builder setIpAddress(android::net::LinkAddress arg0) const;
	};
} // namespace android::net

