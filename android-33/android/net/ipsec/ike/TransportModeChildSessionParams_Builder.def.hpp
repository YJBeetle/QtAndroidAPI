#pragma once

#include "../../../../JObject.hpp"

namespace android::net::ipsec::ike
{
	class ChildSaProposal;
}
namespace android::net::ipsec::ike
{
	class IkeTrafficSelector;
}
namespace android::net::ipsec::ike
{
	class TransportModeChildSessionParams;
}

namespace android::net::ipsec::ike
{
	class TransportModeChildSessionParams_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TransportModeChildSessionParams_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TransportModeChildSessionParams_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		TransportModeChildSessionParams_Builder();
		TransportModeChildSessionParams_Builder(android::net::ipsec::ike::TransportModeChildSessionParams arg0);
		
		// Methods
		android::net::ipsec::ike::TransportModeChildSessionParams_Builder addChildSaProposal(android::net::ipsec::ike::ChildSaProposal arg0) const;
		android::net::ipsec::ike::TransportModeChildSessionParams_Builder addInboundTrafficSelectors(android::net::ipsec::ike::IkeTrafficSelector arg0) const;
		android::net::ipsec::ike::TransportModeChildSessionParams_Builder addOutboundTrafficSelectors(android::net::ipsec::ike::IkeTrafficSelector arg0) const;
		android::net::ipsec::ike::TransportModeChildSessionParams build() const;
		android::net::ipsec::ike::TransportModeChildSessionParams_Builder setLifetimeSeconds(jint arg0, jint arg1) const;
	};
} // namespace android::net::ipsec::ike

