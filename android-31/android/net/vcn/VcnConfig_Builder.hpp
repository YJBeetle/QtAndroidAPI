#pragma once

#include "../../content/Context.def.hpp"
#include "./VcnConfig.def.hpp"
#include "./VcnGatewayConnectionConfig.def.hpp"
#include "./VcnConfig_Builder.def.hpp"

namespace android::net::vcn
{
	// Fields
	
	// Constructors
	inline VcnConfig_Builder::VcnConfig_Builder(android::content::Context arg0)
		: JObject(
			"android.net.vcn.VcnConfig$Builder",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::net::vcn::VcnConfig_Builder VcnConfig_Builder::addGatewayConnectionConfig(android::net::vcn::VcnGatewayConnectionConfig arg0) const
	{
		return callObjectMethod(
			"addGatewayConnectionConfig",
			"(Landroid/net/vcn/VcnGatewayConnectionConfig;)Landroid/net/vcn/VcnConfig$Builder;",
			arg0.object()
		);
	}
	inline android::net::vcn::VcnConfig VcnConfig_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/vcn/VcnConfig;"
		);
	}
} // namespace android::net::vcn

// Base class headers

