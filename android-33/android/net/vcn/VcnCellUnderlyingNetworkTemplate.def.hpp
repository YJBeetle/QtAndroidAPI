#pragma once

#include "./VcnUnderlyingNetworkTemplate.def.hpp"

class JObject;

namespace android::net::vcn
{
	class VcnCellUnderlyingNetworkTemplate : public android::net::vcn::VcnUnderlyingNetworkTemplate
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit VcnCellUnderlyingNetworkTemplate(const char *className, const char *sig, Ts...agv) : android::net::vcn::VcnUnderlyingNetworkTemplate(className, sig, std::forward<Ts>(agv)...) {}
		VcnCellUnderlyingNetworkTemplate(QJniObject obj) : android::net::vcn::VcnUnderlyingNetworkTemplate(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		JObject getOperatorPlmnIds() const;
		jint getOpportunistic() const;
		jint getRoaming() const;
		JObject getSimSpecificCarrierIds() const;
		jint hashCode() const;
	};
} // namespace android::net::vcn

