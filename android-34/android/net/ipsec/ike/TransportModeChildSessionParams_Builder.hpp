#pragma once

#include "./ChildSaProposal.def.hpp"
#include "./IkeTrafficSelector.def.hpp"
#include "./TransportModeChildSessionParams.def.hpp"
#include "./TransportModeChildSessionParams_Builder.def.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	
	// Constructors
	inline TransportModeChildSessionParams_Builder::TransportModeChildSessionParams_Builder()
		: JObject(
			"android.net.ipsec.ike.TransportModeChildSessionParams$Builder",
			"()V"
		) {}
	inline TransportModeChildSessionParams_Builder::TransportModeChildSessionParams_Builder(android::net::ipsec::ike::TransportModeChildSessionParams arg0)
		: JObject(
			"android.net.ipsec.ike.TransportModeChildSessionParams$Builder",
			"(Landroid/net/ipsec/ike/TransportModeChildSessionParams;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::net::ipsec::ike::TransportModeChildSessionParams_Builder TransportModeChildSessionParams_Builder::addChildSaProposal(android::net::ipsec::ike::ChildSaProposal arg0) const
	{
		return callObjectMethod(
			"addChildSaProposal",
			"(Landroid/net/ipsec/ike/ChildSaProposal;)Landroid/net/ipsec/ike/TransportModeChildSessionParams$Builder;",
			arg0.object()
		);
	}
	inline android::net::ipsec::ike::TransportModeChildSessionParams_Builder TransportModeChildSessionParams_Builder::addInboundTrafficSelectors(android::net::ipsec::ike::IkeTrafficSelector arg0) const
	{
		return callObjectMethod(
			"addInboundTrafficSelectors",
			"(Landroid/net/ipsec/ike/IkeTrafficSelector;)Landroid/net/ipsec/ike/TransportModeChildSessionParams$Builder;",
			arg0.object()
		);
	}
	inline android::net::ipsec::ike::TransportModeChildSessionParams_Builder TransportModeChildSessionParams_Builder::addOutboundTrafficSelectors(android::net::ipsec::ike::IkeTrafficSelector arg0) const
	{
		return callObjectMethod(
			"addOutboundTrafficSelectors",
			"(Landroid/net/ipsec/ike/IkeTrafficSelector;)Landroid/net/ipsec/ike/TransportModeChildSessionParams$Builder;",
			arg0.object()
		);
	}
	inline android::net::ipsec::ike::TransportModeChildSessionParams TransportModeChildSessionParams_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/ipsec/ike/TransportModeChildSessionParams;"
		);
	}
	inline android::net::ipsec::ike::TransportModeChildSessionParams_Builder TransportModeChildSessionParams_Builder::setLifetimeSeconds(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"setLifetimeSeconds",
			"(II)Landroid/net/ipsec/ike/TransportModeChildSessionParams$Builder;",
			arg0,
			arg1
		);
	}
} // namespace android::net::ipsec::ike

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::ipsec::ike;
#endif
