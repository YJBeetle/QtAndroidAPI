#pragma once

#include "../../../../JObject.hpp"
#include "./TunnelModeChildSessionParams.def.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean TunnelModeChildSessionParams::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject TunnelModeChildSessionParams::getConfigurationRequests() const
	{
		return callObjectMethod(
			"getConfigurationRequests",
			"()Ljava/util/List;"
		);
	}
	inline jint TunnelModeChildSessionParams::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::ipsec::ike

// Base class headers
#include "./ChildSessionParams.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::ipsec::ike;
#endif
