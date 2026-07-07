#pragma once

#include "../../../JObject.hpp"
#include "./VcnWifiUnderlyingNetworkTemplate.def.hpp"

namespace android::net::vcn
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean VcnWifiUnderlyingNetworkTemplate::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject VcnWifiUnderlyingNetworkTemplate::getSsids() const
	{
		return callObjectMethod(
			"getSsids",
			"()Ljava/util/Set;"
		);
	}
	inline jint VcnWifiUnderlyingNetworkTemplate::hashCode() const
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
