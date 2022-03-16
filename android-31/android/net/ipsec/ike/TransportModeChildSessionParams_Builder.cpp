#include "./ChildSaProposal.hpp"
#include "./IkeTrafficSelector.hpp"
#include "./TransportModeChildSessionParams.hpp"
#include "./TransportModeChildSessionParams_Builder.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	
	// Constructors
	TransportModeChildSessionParams_Builder::TransportModeChildSessionParams_Builder()
		: JObject(
			"android.net.ipsec.ike.TransportModeChildSessionParams$Builder",
			"()V"
		) {}
	TransportModeChildSessionParams_Builder::TransportModeChildSessionParams_Builder(android::net::ipsec::ike::TransportModeChildSessionParams arg0)
		: JObject(
			"android.net.ipsec.ike.TransportModeChildSessionParams$Builder",
			"(Landroid/net/ipsec/ike/TransportModeChildSessionParams;)V",
			arg0.object()
		) {}
	
	// Methods
	android::net::ipsec::ike::TransportModeChildSessionParams_Builder TransportModeChildSessionParams_Builder::addChildSaProposal(android::net::ipsec::ike::ChildSaProposal arg0) const
	{
		return callObjectMethod(
			"addChildSaProposal",
			"(Landroid/net/ipsec/ike/ChildSaProposal;)Landroid/net/ipsec/ike/TransportModeChildSessionParams$Builder;",
			arg0.object()
		);
	}
	android::net::ipsec::ike::TransportModeChildSessionParams_Builder TransportModeChildSessionParams_Builder::addInboundTrafficSelectors(android::net::ipsec::ike::IkeTrafficSelector arg0) const
	{
		return callObjectMethod(
			"addInboundTrafficSelectors",
			"(Landroid/net/ipsec/ike/IkeTrafficSelector;)Landroid/net/ipsec/ike/TransportModeChildSessionParams$Builder;",
			arg0.object()
		);
	}
	android::net::ipsec::ike::TransportModeChildSessionParams_Builder TransportModeChildSessionParams_Builder::addOutboundTrafficSelectors(android::net::ipsec::ike::IkeTrafficSelector arg0) const
	{
		return callObjectMethod(
			"addOutboundTrafficSelectors",
			"(Landroid/net/ipsec/ike/IkeTrafficSelector;)Landroid/net/ipsec/ike/TransportModeChildSessionParams$Builder;",
			arg0.object()
		);
	}
	android::net::ipsec::ike::TransportModeChildSessionParams TransportModeChildSessionParams_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/ipsec/ike/TransportModeChildSessionParams;"
		);
	}
	android::net::ipsec::ike::TransportModeChildSessionParams_Builder TransportModeChildSessionParams_Builder::setLifetimeSeconds(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"setLifetimeSeconds",
			"(II)Landroid/net/ipsec/ike/TransportModeChildSessionParams$Builder;",
			arg0,
			arg1
		);
	}
} // namespace android::net::ipsec::ike

