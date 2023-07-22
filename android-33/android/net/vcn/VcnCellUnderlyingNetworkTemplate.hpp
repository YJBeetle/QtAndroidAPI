#pragma once

#include "../../../JObject.hpp"
#include "./VcnCellUnderlyingNetworkTemplate.def.hpp"

namespace android::net::vcn
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean VcnCellUnderlyingNetworkTemplate::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject VcnCellUnderlyingNetworkTemplate::getOperatorPlmnIds() const
	{
		return callObjectMethod(
			"getOperatorPlmnIds",
			"()Ljava/util/Set;"
		);
	}
	inline jint VcnCellUnderlyingNetworkTemplate::getOpportunistic() const
	{
		return callMethod<jint>(
			"getOpportunistic",
			"()I"
		);
	}
	inline jint VcnCellUnderlyingNetworkTemplate::getRoaming() const
	{
		return callMethod<jint>(
			"getRoaming",
			"()I"
		);
	}
	inline JObject VcnCellUnderlyingNetworkTemplate::getSimSpecificCarrierIds() const
	{
		return callObjectMethod(
			"getSimSpecificCarrierIds",
			"()Ljava/util/Set;"
		);
	}
	inline jint VcnCellUnderlyingNetworkTemplate::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::vcn

// Base class headers
#include "./VcnUnderlyingNetworkTemplate.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::vcn;
#endif
