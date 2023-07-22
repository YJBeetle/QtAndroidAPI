#pragma once

#include "./LinkAddress.def.hpp"
#include "./StaticIpConfiguration.def.hpp"
#include "../../JString.hpp"
#include "../../java/net/InetAddress.def.hpp"
#include "./StaticIpConfiguration_Builder.def.hpp"

namespace android::net
{
	// Fields
	
	// Constructors
	inline StaticIpConfiguration_Builder::StaticIpConfiguration_Builder()
		: JObject(
			"android.net.StaticIpConfiguration$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::net::StaticIpConfiguration StaticIpConfiguration_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/StaticIpConfiguration;"
		);
	}
	inline android::net::StaticIpConfiguration_Builder StaticIpConfiguration_Builder::setDnsServers(JObject arg0) const
	{
		return callObjectMethod(
			"setDnsServers",
			"(Ljava/lang/Iterable;)Landroid/net/StaticIpConfiguration$Builder;",
			arg0.object()
		);
	}
	inline android::net::StaticIpConfiguration_Builder StaticIpConfiguration_Builder::setDomains(JString arg0) const
	{
		return callObjectMethod(
			"setDomains",
			"(Ljava/lang/String;)Landroid/net/StaticIpConfiguration$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::net::StaticIpConfiguration_Builder StaticIpConfiguration_Builder::setGateway(java::net::InetAddress arg0) const
	{
		return callObjectMethod(
			"setGateway",
			"(Ljava/net/InetAddress;)Landroid/net/StaticIpConfiguration$Builder;",
			arg0.object()
		);
	}
	inline android::net::StaticIpConfiguration_Builder StaticIpConfiguration_Builder::setIpAddress(android::net::LinkAddress arg0) const
	{
		return callObjectMethod(
			"setIpAddress",
			"(Landroid/net/LinkAddress;)Landroid/net/StaticIpConfiguration$Builder;",
			arg0.object()
		);
	}
} // namespace android::net

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net;
#endif
