#pragma once

#include "../../../../JObject.hpp"
#include "./ChildSessionParams.def.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean ChildSessionParams::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject ChildSessionParams::getChildSaProposals() const
	{
		return callObjectMethod(
			"getChildSaProposals",
			"()Ljava/util/List;"
		);
	}
	inline jint ChildSessionParams::getHardLifetimeSeconds() const
	{
		return callMethod<jint>(
			"getHardLifetimeSeconds",
			"()I"
		);
	}
	inline JObject ChildSessionParams::getInboundTrafficSelectors() const
	{
		return callObjectMethod(
			"getInboundTrafficSelectors",
			"()Ljava/util/List;"
		);
	}
	inline JObject ChildSessionParams::getOutboundTrafficSelectors() const
	{
		return callObjectMethod(
			"getOutboundTrafficSelectors",
			"()Ljava/util/List;"
		);
	}
	inline jint ChildSessionParams::getSoftLifetimeSeconds() const
	{
		return callMethod<jint>(
			"getSoftLifetimeSeconds",
			"()I"
		);
	}
	inline jint ChildSessionParams::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::ipsec::ike

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::ipsec::ike;
#endif
