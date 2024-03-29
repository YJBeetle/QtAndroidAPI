#pragma once

#include "./ChildSaProposal.def.hpp"
#include "./IkeTrafficSelector.def.hpp"
#include "./TunnelModeChildSessionParams.def.hpp"
#include "../../../../java/net/Inet4Address.def.hpp"
#include "../../../../java/net/Inet6Address.def.hpp"
#include "./TunnelModeChildSessionParams_Builder.def.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	
	// Constructors
	inline TunnelModeChildSessionParams_Builder::TunnelModeChildSessionParams_Builder()
		: JObject(
			"android.net.ipsec.ike.TunnelModeChildSessionParams$Builder",
			"()V"
		) {}
	inline TunnelModeChildSessionParams_Builder::TunnelModeChildSessionParams_Builder(android::net::ipsec::ike::TunnelModeChildSessionParams arg0)
		: JObject(
			"android.net.ipsec.ike.TunnelModeChildSessionParams$Builder",
			"(Landroid/net/ipsec/ike/TunnelModeChildSessionParams;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::net::ipsec::ike::TunnelModeChildSessionParams_Builder TunnelModeChildSessionParams_Builder::addChildSaProposal(android::net::ipsec::ike::ChildSaProposal arg0) const
	{
		return callObjectMethod(
			"addChildSaProposal",
			"(Landroid/net/ipsec/ike/ChildSaProposal;)Landroid/net/ipsec/ike/TunnelModeChildSessionParams$Builder;",
			arg0.object()
		);
	}
	inline android::net::ipsec::ike::TunnelModeChildSessionParams_Builder TunnelModeChildSessionParams_Builder::addInboundTrafficSelectors(android::net::ipsec::ike::IkeTrafficSelector arg0) const
	{
		return callObjectMethod(
			"addInboundTrafficSelectors",
			"(Landroid/net/ipsec/ike/IkeTrafficSelector;)Landroid/net/ipsec/ike/TunnelModeChildSessionParams$Builder;",
			arg0.object()
		);
	}
	inline android::net::ipsec::ike::TunnelModeChildSessionParams_Builder TunnelModeChildSessionParams_Builder::addInternalAddressRequest(jint arg0) const
	{
		return callObjectMethod(
			"addInternalAddressRequest",
			"(I)Landroid/net/ipsec/ike/TunnelModeChildSessionParams$Builder;",
			arg0
		);
	}
	inline android::net::ipsec::ike::TunnelModeChildSessionParams_Builder TunnelModeChildSessionParams_Builder::addInternalAddressRequest(java::net::Inet4Address arg0) const
	{
		return callObjectMethod(
			"addInternalAddressRequest",
			"(Ljava/net/Inet4Address;)Landroid/net/ipsec/ike/TunnelModeChildSessionParams$Builder;",
			arg0.object()
		);
	}
	inline android::net::ipsec::ike::TunnelModeChildSessionParams_Builder TunnelModeChildSessionParams_Builder::addInternalAddressRequest(java::net::Inet6Address arg0, jint arg1) const
	{
		return callObjectMethod(
			"addInternalAddressRequest",
			"(Ljava/net/Inet6Address;I)Landroid/net/ipsec/ike/TunnelModeChildSessionParams$Builder;",
			arg0.object(),
			arg1
		);
	}
	inline android::net::ipsec::ike::TunnelModeChildSessionParams_Builder TunnelModeChildSessionParams_Builder::addInternalDhcpServerRequest(jint arg0) const
	{
		return callObjectMethod(
			"addInternalDhcpServerRequest",
			"(I)Landroid/net/ipsec/ike/TunnelModeChildSessionParams$Builder;",
			arg0
		);
	}
	inline android::net::ipsec::ike::TunnelModeChildSessionParams_Builder TunnelModeChildSessionParams_Builder::addInternalDnsServerRequest(jint arg0) const
	{
		return callObjectMethod(
			"addInternalDnsServerRequest",
			"(I)Landroid/net/ipsec/ike/TunnelModeChildSessionParams$Builder;",
			arg0
		);
	}
	inline android::net::ipsec::ike::TunnelModeChildSessionParams_Builder TunnelModeChildSessionParams_Builder::addOutboundTrafficSelectors(android::net::ipsec::ike::IkeTrafficSelector arg0) const
	{
		return callObjectMethod(
			"addOutboundTrafficSelectors",
			"(Landroid/net/ipsec/ike/IkeTrafficSelector;)Landroid/net/ipsec/ike/TunnelModeChildSessionParams$Builder;",
			arg0.object()
		);
	}
	inline android::net::ipsec::ike::TunnelModeChildSessionParams TunnelModeChildSessionParams_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/ipsec/ike/TunnelModeChildSessionParams;"
		);
	}
	inline android::net::ipsec::ike::TunnelModeChildSessionParams_Builder TunnelModeChildSessionParams_Builder::setLifetimeSeconds(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"setLifetimeSeconds",
			"(II)Landroid/net/ipsec/ike/TunnelModeChildSessionParams$Builder;",
			arg0,
			arg1
		);
	}
} // namespace android::net::ipsec::ike

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::ipsec::ike;
#endif
