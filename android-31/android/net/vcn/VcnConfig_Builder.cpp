#include "../../content/Context.hpp"
#include "./VcnConfig.hpp"
#include "./VcnGatewayConnectionConfig.hpp"
#include "./VcnConfig_Builder.hpp"

namespace android::net::vcn
{
	// Fields
	
	// QAndroidJniObject forward
	VcnConfig_Builder::VcnConfig_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	VcnConfig_Builder::VcnConfig_Builder(android::content::Context arg0)
		: JObject(
			"android.net.vcn.VcnConfig$Builder",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	android::net::vcn::VcnConfig_Builder VcnConfig_Builder::addGatewayConnectionConfig(android::net::vcn::VcnGatewayConnectionConfig arg0)
	{
		return callObjectMethod(
			"addGatewayConnectionConfig",
			"(Landroid/net/vcn/VcnGatewayConnectionConfig;)Landroid/net/vcn/VcnConfig$Builder;",
			arg0.object()
		);
	}
	android::net::vcn::VcnConfig VcnConfig_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/vcn/VcnConfig;"
		);
	}
} // namespace android::net::vcn

