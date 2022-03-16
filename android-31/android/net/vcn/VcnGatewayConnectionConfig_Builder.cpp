#include "../../../JLongArray.hpp"
#include "../ipsec/ike/IkeTunnelConnectionParams.hpp"
#include "./VcnGatewayConnectionConfig.hpp"
#include "../../../JString.hpp"
#include "./VcnGatewayConnectionConfig_Builder.hpp"

namespace android::net::vcn
{
	// Fields
	
	// Constructors
	VcnGatewayConnectionConfig_Builder::VcnGatewayConnectionConfig_Builder(JString arg0, android::net::ipsec::ike::IkeTunnelConnectionParams arg1)
		: JObject(
			"android.net.vcn.VcnGatewayConnectionConfig$Builder",
			"(Ljava/lang/String;Landroid/net/ipsec/ike/IkeTunnelConnectionParams;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
	android::net::vcn::VcnGatewayConnectionConfig_Builder VcnGatewayConnectionConfig_Builder::addExposedCapability(jint arg0) const
	{
		return callObjectMethod(
			"addExposedCapability",
			"(I)Landroid/net/vcn/VcnGatewayConnectionConfig$Builder;",
			arg0
		);
	}
	android::net::vcn::VcnGatewayConnectionConfig VcnGatewayConnectionConfig_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/vcn/VcnGatewayConnectionConfig;"
		);
	}
	android::net::vcn::VcnGatewayConnectionConfig_Builder VcnGatewayConnectionConfig_Builder::removeExposedCapability(jint arg0) const
	{
		return callObjectMethod(
			"removeExposedCapability",
			"(I)Landroid/net/vcn/VcnGatewayConnectionConfig$Builder;",
			arg0
		);
	}
	android::net::vcn::VcnGatewayConnectionConfig_Builder VcnGatewayConnectionConfig_Builder::setMaxMtu(jint arg0) const
	{
		return callObjectMethod(
			"setMaxMtu",
			"(I)Landroid/net/vcn/VcnGatewayConnectionConfig$Builder;",
			arg0
		);
	}
	android::net::vcn::VcnGatewayConnectionConfig_Builder VcnGatewayConnectionConfig_Builder::setRetryIntervalsMillis(JLongArray arg0) const
	{
		return callObjectMethod(
			"setRetryIntervalsMillis",
			"([J)Landroid/net/vcn/VcnGatewayConnectionConfig$Builder;",
			arg0.object<jlongArray>()
		);
	}
} // namespace android::net::vcn

