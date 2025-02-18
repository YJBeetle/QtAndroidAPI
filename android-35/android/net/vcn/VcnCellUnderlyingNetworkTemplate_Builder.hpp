#pragma once

#include "./VcnCellUnderlyingNetworkTemplate.def.hpp"
#include "./VcnCellUnderlyingNetworkTemplate_Builder.def.hpp"

namespace android::net::vcn
{
	// Fields
	
	// Constructors
	inline VcnCellUnderlyingNetworkTemplate_Builder::VcnCellUnderlyingNetworkTemplate_Builder()
		: JObject(
			"android.net.vcn.VcnCellUnderlyingNetworkTemplate$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::net::vcn::VcnCellUnderlyingNetworkTemplate VcnCellUnderlyingNetworkTemplate_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/vcn/VcnCellUnderlyingNetworkTemplate;"
		);
	}
	inline android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder VcnCellUnderlyingNetworkTemplate_Builder::setCbs(jint arg0) const
	{
		return callObjectMethod(
			"setCbs",
			"(I)Landroid/net/vcn/VcnCellUnderlyingNetworkTemplate$Builder;",
			arg0
		);
	}
	inline android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder VcnCellUnderlyingNetworkTemplate_Builder::setDun(jint arg0) const
	{
		return callObjectMethod(
			"setDun",
			"(I)Landroid/net/vcn/VcnCellUnderlyingNetworkTemplate$Builder;",
			arg0
		);
	}
	inline android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder VcnCellUnderlyingNetworkTemplate_Builder::setIms(jint arg0) const
	{
		return callObjectMethod(
			"setIms",
			"(I)Landroid/net/vcn/VcnCellUnderlyingNetworkTemplate$Builder;",
			arg0
		);
	}
	inline android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder VcnCellUnderlyingNetworkTemplate_Builder::setInternet(jint arg0) const
	{
		return callObjectMethod(
			"setInternet",
			"(I)Landroid/net/vcn/VcnCellUnderlyingNetworkTemplate$Builder;",
			arg0
		);
	}
	inline android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder VcnCellUnderlyingNetworkTemplate_Builder::setMetered(jint arg0) const
	{
		return callObjectMethod(
			"setMetered",
			"(I)Landroid/net/vcn/VcnCellUnderlyingNetworkTemplate$Builder;",
			arg0
		);
	}
	inline android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder VcnCellUnderlyingNetworkTemplate_Builder::setMinDownstreamBandwidthKbps(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"setMinDownstreamBandwidthKbps",
			"(II)Landroid/net/vcn/VcnCellUnderlyingNetworkTemplate$Builder;",
			arg0,
			arg1
		);
	}
	inline android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder VcnCellUnderlyingNetworkTemplate_Builder::setMinUpstreamBandwidthKbps(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"setMinUpstreamBandwidthKbps",
			"(II)Landroid/net/vcn/VcnCellUnderlyingNetworkTemplate$Builder;",
			arg0,
			arg1
		);
	}
	inline android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder VcnCellUnderlyingNetworkTemplate_Builder::setMms(jint arg0) const
	{
		return callObjectMethod(
			"setMms",
			"(I)Landroid/net/vcn/VcnCellUnderlyingNetworkTemplate$Builder;",
			arg0
		);
	}
	inline android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder VcnCellUnderlyingNetworkTemplate_Builder::setOperatorPlmnIds(JObject arg0) const
	{
		return callObjectMethod(
			"setOperatorPlmnIds",
			"(Ljava/util/Set;)Landroid/net/vcn/VcnCellUnderlyingNetworkTemplate$Builder;",
			arg0.object()
		);
	}
	inline android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder VcnCellUnderlyingNetworkTemplate_Builder::setOpportunistic(jint arg0) const
	{
		return callObjectMethod(
			"setOpportunistic",
			"(I)Landroid/net/vcn/VcnCellUnderlyingNetworkTemplate$Builder;",
			arg0
		);
	}
	inline android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder VcnCellUnderlyingNetworkTemplate_Builder::setRcs(jint arg0) const
	{
		return callObjectMethod(
			"setRcs",
			"(I)Landroid/net/vcn/VcnCellUnderlyingNetworkTemplate$Builder;",
			arg0
		);
	}
	inline android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder VcnCellUnderlyingNetworkTemplate_Builder::setRoaming(jint arg0) const
	{
		return callObjectMethod(
			"setRoaming",
			"(I)Landroid/net/vcn/VcnCellUnderlyingNetworkTemplate$Builder;",
			arg0
		);
	}
	inline android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder VcnCellUnderlyingNetworkTemplate_Builder::setSimSpecificCarrierIds(JObject arg0) const
	{
		return callObjectMethod(
			"setSimSpecificCarrierIds",
			"(Ljava/util/Set;)Landroid/net/vcn/VcnCellUnderlyingNetworkTemplate$Builder;",
			arg0.object()
		);
	}
} // namespace android::net::vcn

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::vcn;
#endif
