#include "../ipsec/ike/IkeTunnelConnectionParams.hpp"
#include "./VcnGatewayConnectionConfig.hpp"
#include "./VcnGatewayConnectionConfig_Builder.hpp"

namespace android::net::vcn
{
	// Fields
	
	// QJniObject forward
	VcnGatewayConnectionConfig_Builder::VcnGatewayConnectionConfig_Builder(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	VcnGatewayConnectionConfig_Builder::VcnGatewayConnectionConfig_Builder(jstring arg0, android::net::ipsec::ike::IkeTunnelConnectionParams arg1)
		: __JniBaseClass(
			"android.net.vcn.VcnGatewayConnectionConfig$Builder",
			"(Ljava/lang/String;Landroid/net/ipsec/ike/IkeTunnelConnectionParams;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	android::net::vcn::VcnGatewayConnectionConfig_Builder VcnGatewayConnectionConfig_Builder::addExposedCapability(jint arg0)
	{
		return callObjectMethod(
			"addExposedCapability",
			"(I)Landroid/net/vcn/VcnGatewayConnectionConfig$Builder;",
			arg0
		);
	}
	android::net::vcn::VcnGatewayConnectionConfig VcnGatewayConnectionConfig_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/vcn/VcnGatewayConnectionConfig;"
		);
	}
	android::net::vcn::VcnGatewayConnectionConfig_Builder VcnGatewayConnectionConfig_Builder::removeExposedCapability(jint arg0)
	{
		return callObjectMethod(
			"removeExposedCapability",
			"(I)Landroid/net/vcn/VcnGatewayConnectionConfig$Builder;",
			arg0
		);
	}
	android::net::vcn::VcnGatewayConnectionConfig_Builder VcnGatewayConnectionConfig_Builder::setMaxMtu(jint arg0)
	{
		return callObjectMethod(
			"setMaxMtu",
			"(I)Landroid/net/vcn/VcnGatewayConnectionConfig$Builder;",
			arg0
		);
	}
	android::net::vcn::VcnGatewayConnectionConfig_Builder VcnGatewayConnectionConfig_Builder::setRetryIntervalsMillis(jlongArray arg0)
	{
		return callObjectMethod(
			"setRetryIntervalsMillis",
			"([J)Landroid/net/vcn/VcnGatewayConnectionConfig$Builder;",
			arg0
		);
	}
} // namespace android::net::vcn

