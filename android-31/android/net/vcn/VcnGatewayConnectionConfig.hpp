#pragma once

#include "../../../JIntArray.hpp"
#include "../../../JLongArray.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./VcnGatewayConnectionConfig.def.hpp"

namespace android::net::vcn
{
	// Fields
	
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
	inline JLongArray VcnGatewayConnectionConfig::getRetryIntervalsMillis() const
	{
		return callObjectMethod(
			"getRetryIntervalsMillis",
			"()[J"
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

