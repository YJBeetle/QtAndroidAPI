#pragma once

#include "../../../JObject.hpp"

class JIntArray;
class JLongArray;
class JObject;
class JString;

namespace android::net::vcn
{
	class VcnGatewayConnectionConfig : public JObject
	{
	public:
		// Fields
		static jint VCN_GATEWAY_OPTION_ENABLE_DATA_STALL_RECOVERY_WITH_MOBILITY();
		
		// QJniObject forward
		template<typename ...Ts> explicit VcnGatewayConnectionConfig(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VcnGatewayConnectionConfig(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		JIntArray getExposedCapabilities() const;
		JString getGatewayConnectionName() const;
		jint getMaxMtu() const;
		jint getMinUdpPort4500NatTimeoutSeconds() const;
		JLongArray getRetryIntervalsMillis() const;
		JObject getVcnUnderlyingNetworkPriorities() const;
		jboolean hasGatewayOption(jint arg0) const;
		jint hashCode() const;
	};
} // namespace android::net::vcn

