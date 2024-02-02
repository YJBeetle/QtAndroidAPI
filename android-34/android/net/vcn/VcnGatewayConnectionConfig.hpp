#pragma once

#include "../../../JIntArray.hpp"
#include "../../../JLongArray.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./VcnGatewayConnectionConfig.def.hpp"

namespace android::net::vcn
{
	// Fields
	inline jint VcnGatewayConnectionConfig::VCN_GATEWAY_OPTION_ENABLE_DATA_STALL_RECOVERY_WITH_MOBILITY()
	{
		return getStaticField<jint>(
			"android.net.vcn.VcnGatewayConnectionConfig",
			"VCN_GATEWAY_OPTION_ENABLE_DATA_STALL_RECOVERY_WITH_MOBILITY"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean VcnGatewayConnectionConfig::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JIntArray VcnGatewayConnectionConfig::getExposedCapabilities() const
	{
		return callObjectMethod(
			"getExposedCapabilities",
			"()[I"
		);
	}
	inline JString VcnGatewayConnectionConfig::getGatewayConnectionName() const
	{
		return callObjectMethod(
			"getGatewayConnectionName",
			"()Ljava/lang/String;"
		);
	}
	inline jint VcnGatewayConnectionConfig::getMaxMtu() const
	{
		return callMethod<jint>(
			"getMaxMtu",
			"()I"
		);
	}
	inline jint VcnGatewayConnectionConfig::getMinUdpPort4500NatTimeoutSeconds() const
	{
		return callMethod<jint>(
			"getMinUdpPort4500NatTimeoutSeconds",
			"()I"
		);
	}
	inline JLongArray VcnGatewayConnectionConfig::getRetryIntervalsMillis() const
	{
		return callObjectMethod(
			"getRetryIntervalsMillis",
			"()[J"
		);
	}
	inline JObject VcnGatewayConnectionConfig::getVcnUnderlyingNetworkPriorities() const
	{
		return callObjectMethod(
			"getVcnUnderlyingNetworkPriorities",
			"()Ljava/util/List;"
		);
	}
	inline jboolean VcnGatewayConnectionConfig::hasGatewayOption(jint arg0) const
	{
		return callMethod<jboolean>(
			"hasGatewayOption",
			"(I)Z",
			arg0
		);
	}
	inline jint VcnGatewayConnectionConfig::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::vcn

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::vcn;
#endif
