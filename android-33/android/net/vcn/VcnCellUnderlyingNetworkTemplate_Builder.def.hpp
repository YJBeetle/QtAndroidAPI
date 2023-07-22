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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VcnCellUnderlyingNetworkTemplate_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VcnCellUnderlyingNetworkTemplate_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		VcnCellUnderlyingNetworkTemplate_Builder();
		
		// Methods
		android::net::vcn::VcnCellUnderlyingNetworkTemplate build() const;
		android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder setMetered(jint arg0) const;
		android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder setMinDownstreamBandwidthKbps(jint arg0, jint arg1) const;
		android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder setMinUpstreamBandwidthKbps(jint arg0, jint arg1) const;
		android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder setOperatorPlmnIds(JObject arg0) const;
		android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder setOpportunistic(jint arg0) const;
		android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder setRoaming(jint arg0) const;
		android::net::vcn::VcnCellUnderlyingNetworkTemplate_Builder setSimSpecificCarrierIds(JObject arg0) const;
	};
} // namespace android::net::vcn

