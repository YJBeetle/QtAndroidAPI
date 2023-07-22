#pragma once

#include "./VcnUnderlyingNetworkTemplate.def.hpp"

class JObject;

namespace android::net::vcn
{
	class VcnWifiUnderlyingNetworkTemplate : public android::net::vcn::VcnUnderlyingNetworkTemplate
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VcnWifiUnderlyingNetworkTemplate(const char *className, const char *sig, Ts...agv) : android::net::vcn::VcnUnderlyingNetworkTemplate(className, sig, std::forward<Ts>(agv)...) {}
		VcnWifiUnderlyingNetworkTemplate(QAndroidJniObject obj) : android::net::vcn::VcnUnderlyingNetworkTemplate(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		JObject getSsids() const;
		jint hashCode() const;
	};
} // namespace android::net::vcn

