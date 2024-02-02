#pragma once

#include "../../../JObject.hpp"

namespace android::net::vcn
{
	class VcnCellUnderlyingNetworkTemplate;
}

namespace android::net::vcn
{
	class VcnCellUnderlyingNetworkTemplate_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit VcnCellUnderlyingNetworkTemplate_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VcnCellUnderlyingNetworkTemplate_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		VcnCellUnderlyingNetworkTemplate_Builder();
		
		// Methods
		android::net::vcn::VcnCellUnderlyingNetworkTemplate build() const;
		android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder setCbs(jint arg0) const;
		android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder setDun(jint arg0) const;
		android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder setIms(jint arg0) const;
		android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder setInternet(jint arg0) const;
		android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder setMetered(jint arg0) const;
		android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder setMinDownstreamBandwidthKbps(jint arg0, jint arg1) const;
		android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder setMinUpstreamBandwidthKbps(jint arg0, jint arg1) const;
		android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder setMms(jint arg0) const;
		android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder setOperatorPlmnIds(JObject arg0) const;
		android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder setOpportunistic(jint arg0) const;
		android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder setRcs(jint arg0) const;
		android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder setRoaming(jint arg0) const;
		android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder setSimSpecificCarrierIds(JObject arg0) const;
	};
} // namespace android::net::vcn

