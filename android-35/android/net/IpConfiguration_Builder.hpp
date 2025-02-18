#pragma once

#include "./IpConfiguration.def.hpp"
#include "./ProxyInfo.def.hpp"
#include "./StaticIpConfiguration.def.hpp"
#include "./IpConfiguration_Builder.def.hpp"

namespace android::net
{
	// Fields
	
	// Constructors
	inline IpConfiguration_Builder::IpConfiguration_Builder()
		: JObject(
			"android.net.IpConfiguration$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::net::IpConfiguration IpConfiguration_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/IpConfiguration;"
		);
	}
	inline android::net::IpConfiguration_Builder IpConfiguration_Builder::setHttpProxy(android::net::ProxyInfo arg0) const
	{
		return callObjectMethod(
			"setHttpProxy",
			"(Landroid/net/ProxyInfo;)Landroid/net/IpConfiguration$Builder;",
			arg0.object()
		);
	}
	inline android::net::IpConfiguration_Builder IpConfiguration_Builder::setStaticIpConfiguration(android::net::StaticIpConfiguration arg0) const
	{
		return callObjectMethod(
			"setStaticIpConfiguration",
			"(Landroid/net/StaticIpConfiguration;)Landroid/net/IpConfiguration$Builder;",
			arg0.object()
		);
	}
} // namespace android::net

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net;
#endif
