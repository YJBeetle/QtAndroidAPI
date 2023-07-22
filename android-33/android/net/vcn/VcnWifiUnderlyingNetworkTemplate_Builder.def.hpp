#pragma once

#include "../../../JObject.hpp"

namespace android::net::vcn
{
	class VcnWifiUnderlyingNetworkTemplate;
}

namespace android::net::vcn
{
	class VcnWifiUnderlyingNetworkTemplate_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VcnWifiUnderlyingNetworkTemplate_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VcnWifiUnderlyingNetworkTemplate_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		VcnWifiUnderlyingNetworkTemplate_Builder();
		
		// Methods
		android::net::vcn::VcnWifiUnderlyingNetworkTemplate build() const;
		android::net::vcn::VcnWifiUnderlyingNetworkTemplate_Builder setMetered(jint arg0) const;
		android::net::vcn::VcnWifiUnderlyingNetworkTemplate_Builder setMinDownstreamBandwidthKbps(jint arg0, jint arg1) const;
		android::net::vcn::VcnWifiUnderlyingNetworkTemplate_Builder setMinUpstreamBandwidthKbps(jint arg0, jint arg1) const;
		android::net::vcn::VcnWifiUnderlyingNetworkTemplate_Builder setSsids(JObject arg0) const;
	};
} // namespace android::net::vcn

