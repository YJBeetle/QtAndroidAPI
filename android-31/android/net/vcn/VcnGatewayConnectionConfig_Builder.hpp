#pragma once

#include "../../../JObject.hpp"

namespace android::net::ipsec::ike
{
	class IkeTunnelConnectionParams;
}
namespace android::net::vcn
{
	class VcnGatewayConnectionConfig;
}

namespace android::net::vcn
{
	class VcnGatewayConnectionConfig_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VcnGatewayConnectionConfig_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VcnGatewayConnectionConfig_Builder(QAndroidJniObject obj);
		
		// Constructors
		VcnGatewayConnectionConfig_Builder(jstring arg0, android::net::ipsec::ike::IkeTunnelConnectionParams arg1);
		
		// Methods
		android::net::vcn::VcnGatewayConnectionConfig_Builder addExposedCapability(jint arg0);
		android::net::vcn::VcnGatewayConnectionConfig build();
		android::net::vcn::VcnGatewayConnectionConfig_Builder removeExposedCapability(jint arg0);
		android::net::vcn::VcnGatewayConnectionConfig_Builder setMaxMtu(jint arg0);
		android::net::vcn::VcnGatewayConnectionConfig_Builder setRetryIntervalsMillis(jlongArray arg0);
	};
} // namespace android::net::vcn

