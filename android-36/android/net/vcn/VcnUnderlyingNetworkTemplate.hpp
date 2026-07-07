#pragma once

#include "../../../JObject.hpp"
#include "./VcnUnderlyingNetworkTemplate.def.hpp"

namespace android::net::vcn
{
	// Fields
	inline jint VcnUnderlyingNetworkTemplate::MATCH_ANY()
	{
		return getStaticField<jint>(
			"android.net.vcn.VcnUnderlyingNetworkTemplate",
			"MATCH_ANY"
		);
	}
	inline jint VcnUnderlyingNetworkTemplate::MATCH_FORBIDDEN()
	{
		return getStaticField<jint>(
			"android.net.vcn.VcnUnderlyingNetworkTemplate",
			"MATCH_FORBIDDEN"
		);
	}
	inline jint VcnUnderlyingNetworkTemplate::MATCH_REQUIRED()
	{
		return getStaticField<jint>(
			"android.net.vcn.VcnUnderlyingNetworkTemplate",
			"MATCH_REQUIRED"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean VcnUnderlyingNetworkTemplate::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint VcnUnderlyingNetworkTemplate::getMetered() const
	{
		return callMethod<jint>(
			"getMetered",
			"()I"
		);
	}
	inline jint VcnUnderlyingNetworkTemplate::getMinEntryDownstreamBandwidthKbps() const
	{
		return callMethod<jint>(
			"getMinEntryDownstreamBandwidthKbps",
			"()I"
		);
	}
	inline jint VcnUnderlyingNetworkTemplate::getMinEntryUpstreamBandwidthKbps() const
	{
		return callMethod<jint>(
			"getMinEntryUpstreamBandwidthKbps",
			"()I"
		);
	}
	inline jint VcnUnderlyingNetworkTemplate::getMinExitDownstreamBandwidthKbps() const
	{
		return callMethod<jint>(
			"getMinExitDownstreamBandwidthKbps",
			"()I"
		);
	}
	inline jint VcnUnderlyingNetworkTemplate::getMinExitUpstreamBandwidthKbps() const
	{
		return callMethod<jint>(
			"getMinExitUpstreamBandwidthKbps",
			"()I"
		);
	}
	inline jint VcnUnderlyingNetworkTemplate::hashCode() const
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
