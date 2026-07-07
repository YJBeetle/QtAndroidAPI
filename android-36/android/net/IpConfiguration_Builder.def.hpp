#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class IpConfiguration;
}
namespace android::net
{
	class ProxyInfo;
}
namespace android::net
{
	class StaticIpConfiguration;
}

namespace android::net
{
	class IpConfiguration_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IpConfiguration_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IpConfiguration_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		IpConfiguration_Builder();
		
		// Methods
		android::net::IpConfiguration build() const;
		android::net::IpConfiguration_Builder setHttpProxy(android::net::ProxyInfo arg0) const;
		android::net::IpConfiguration_Builder setStaticIpConfiguration(android::net::StaticIpConfiguration arg0) const;
	};
} // namespace android::net

