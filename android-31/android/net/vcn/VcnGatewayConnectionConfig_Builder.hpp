#pragma once

#include "../../../JObject.hpp"

class JLongArray;
namespace android::net::ipsec::ike
{
	class IkeTunnelConnectionParams;
}
namespace android::net::vcn
{
	class VcnGatewayConnectionConfig;
}
class JString;

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
		VcnGatewayConnectionConfig_Builder(JString arg0, android::net::ipsec::ike::IkeTunnelConnectionParams arg1);
		
		// Methods
		android::net::vcn::VcnGatewayConnectionConfig_Builder addExposedCapability(jint arg0) const;
		android::net::vcn::VcnGatewayConnectionConfig build() const;
		android::net::vcn::VcnGatewayConnectionConfig_Builder removeExposedCapability(jint arg0) const;
		android::net::vcn::VcnGatewayConnectionConfig_Builder setMaxMtu(jint arg0) const;
		android::net::vcn::VcnGatewayConnectionConfig_Builder setRetryIntervalsMillis(JLongArray arg0) const;
	};
} // namespace android::net::vcn

