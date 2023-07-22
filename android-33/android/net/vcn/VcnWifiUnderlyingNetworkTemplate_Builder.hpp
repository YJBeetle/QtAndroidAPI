#pragma once

#include "./VcnWifiUnderlyingNetworkTemplate.def.hpp"
#include "./VcnWifiUnderlyingNetworkTemplate_Builder.def.hpp"

namespace android::net::vcn
{
	// Fields
	
	// Constructors
	inline VcnWifiUnderlyingNetworkTemplate_Builder::VcnWifiUnderlyingNetworkTemplate_Builder()
		: JObject(
			"android.net.vcn.VcnWifiUnderlyingNetworkTemplate$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::net::vcn::VcnWifiUnderlyingNetworkTemplate VcnWifiUnderlyingNetworkTemplate_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/vcn/VcnWifiUnderlyingNetworkTemplate;"
		);
	}
	inline android::net::vcn::VcnWifiUnderlyingNetworkTemplate_Builder VcnWifiUnderlyingNetworkTemplate_Builder::setMetered(jint arg0) const
	{
		return callObjectMethod(
			"setMetered",
			"(I)Landroid/net/vcn/VcnWifiUnderlyingNetworkTemplate$Builder;",
			arg0
		);
	}
	inline android::net::vcn::VcnWifiUnderlyingNetworkTemplate_Builder VcnWifiUnderlyingNetworkTemplate_Builder::setMinDownstreamBandwidthKbps(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"setMinDownstreamBandwidthKbps",
			"(II)Landroid/net/vcn/VcnWifiUnderlyingNetworkTemplate$Builder;",
			arg0,
			arg1
		);
	}
	inline android::net::vcn::VcnWifiUnderlyingNetworkTemplate_Builder VcnWifiUnderlyingNetworkTemplate_Builder::setMinUpstreamBandwidthKbps(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"setMinUpstreamBandwidthKbps",
			"(II)Landroid/net/vcn/VcnWifiUnderlyingNetworkTemplate$Builder;",
			arg0,
			arg1
		);
	}
	inline android::net::vcn::VcnWifiUnderlyingNetworkTemplate_Builder VcnWifiUnderlyingNetworkTemplate_Builder::setSsids(JObject arg0) const
	{
		return callObjectMethod(
			"setSsids",
			"(Ljava/util/Set;)Landroid/net/vcn/VcnWifiUnderlyingNetworkTemplate$Builder;",
			arg0.object()
		);
	}
} // namespace android::net::vcn

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::vcn;
#endif
