#pragma once

#include "../Network.def.hpp"
#include "./DiscoveryRequest.def.hpp"
#include "../../../JString.hpp"
#include "./DiscoveryRequest_Builder.def.hpp"

namespace android::net::nsd
{
	// Fields
	
	// Constructors
	inline DiscoveryRequest_Builder::DiscoveryRequest_Builder(JString arg0)
		: JObject(
			"android.net.nsd.DiscoveryRequest$Builder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline android::net::nsd::DiscoveryRequest DiscoveryRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/nsd/DiscoveryRequest;"
		);
	}
	inline android::net::nsd::DiscoveryRequest_Builder DiscoveryRequest_Builder::setNetwork(android::net::Network arg0) const
	{
		return callObjectMethod(
			"setNetwork",
			"(Landroid/net/Network;)Landroid/net/nsd/DiscoveryRequest$Builder;",
			arg0.object()
		);
	}
	inline android::net::nsd::DiscoveryRequest_Builder DiscoveryRequest_Builder::setSubtype(JString arg0) const
	{
		return callObjectMethod(
			"setSubtype",
			"(Ljava/lang/String;)Landroid/net/nsd/DiscoveryRequest$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::net::nsd

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::nsd;
#endif
