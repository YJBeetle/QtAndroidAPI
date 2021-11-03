#include "./ChildSaProposal.hpp"
#include "./IkeTrafficSelector.hpp"
#include "./TunnelModeChildSessionParams.hpp"
#include "../../../../java/net/Inet4Address.hpp"
#include "../../../../java/net/Inet6Address.hpp"
#include "./TunnelModeChildSessionParams_Builder.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	
	// QJniObject forward
	TunnelModeChildSessionParams_Builder::TunnelModeChildSessionParams_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	TunnelModeChildSessionParams_Builder::TunnelModeChildSessionParams_Builder()
		: JObject(
			"android.net.ipsec.ike.TunnelModeChildSessionParams$Builder",
			"()V"
		) {}
	TunnelModeChildSessionParams_Builder::TunnelModeChildSessionParams_Builder(android::net::ipsec::ike::TunnelModeChildSessionParams arg0)
		: JObject(
			"android.net.ipsec.ike.TunnelModeChildSessionParams$Builder",
			"(Landroid/net/ipsec/ike/TunnelModeChildSessionParams;)V",
			arg0.object()
		) {}
	
	// Methods
	android::net::ipsec::ike::TunnelModeChildSessionParams_Builder TunnelModeChildSessionParams_Builder::addChildSaProposal(android::net::ipsec::ike::ChildSaProposal arg0)
	{
		return callObjectMethod(
			"addChildSaProposal",
			"(Landroid/net/ipsec/ike/ChildSaProposal;)Landroid/net/ipsec/ike/TunnelModeChildSessionParams$Builder;",
			arg0.object()
		);
	}
	android::net::ipsec::ike::TunnelModeChildSessionParams_Builder TunnelModeChildSessionParams_Builder::addInboundTrafficSelectors(android::net::ipsec::ike::IkeTrafficSelector arg0)
	{
		return callObjectMethod(
			"addInboundTrafficSelectors",
			"(Landroid/net/ipsec/ike/IkeTrafficSelector;)Landroid/net/ipsec/ike/TunnelModeChildSessionParams$Builder;",
			arg0.object()
		);
	}
	android::net::ipsec::ike::TunnelModeChildSessionParams_Builder TunnelModeChildSessionParams_Builder::addInternalAddressRequest(jint arg0)
	{
		return callObjectMethod(
			"addInternalAddressRequest",
			"(I)Landroid/net/ipsec/ike/TunnelModeChildSessionParams$Builder;",
			arg0
		);
	}
	android::net::ipsec::ike::TunnelModeChildSessionParams_Builder TunnelModeChildSessionParams_Builder::addInternalAddressRequest(java::net::Inet4Address arg0)
	{
		return callObjectMethod(
			"addInternalAddressRequest",
			"(Ljava/net/Inet4Address;)Landroid/net/ipsec/ike/TunnelModeChildSessionParams$Builder;",
			arg0.object()
		);
	}
	android::net::ipsec::ike::TunnelModeChildSessionParams_Builder TunnelModeChildSessionParams_Builder::addInternalAddressRequest(java::net::Inet6Address arg0, jint arg1)
	{
		return callObjectMethod(
			"addInternalAddressRequest",
			"(Ljava/net/Inet6Address;I)Landroid/net/ipsec/ike/TunnelModeChildSessionParams$Builder;",
			arg0.object(),
			arg1
		);
	}
	android::net::ipsec::ike::TunnelModeChildSessionParams_Builder TunnelModeChildSessionParams_Builder::addInternalDhcpServerRequest(jint arg0)
	{
		return callObjectMethod(
			"addInternalDhcpServerRequest",
			"(I)Landroid/net/ipsec/ike/TunnelModeChildSessionParams$Builder;",
			arg0
		);
	}
	android::net::ipsec::ike::TunnelModeChildSessionParams_Builder TunnelModeChildSessionParams_Builder::addInternalDnsServerRequest(jint arg0)
	{
		return callObjectMethod(
			"addInternalDnsServerRequest",
			"(I)Landroid/net/ipsec/ike/TunnelModeChildSessionParams$Builder;",
			arg0
		);
	}
	android::net::ipsec::ike::TunnelModeChildSessionParams_Builder TunnelModeChildSessionParams_Builder::addOutboundTrafficSelectors(android::net::ipsec::ike::IkeTrafficSelector arg0)
	{
		return callObjectMethod(
			"addOutboundTrafficSelectors",
			"(Landroid/net/ipsec/ike/IkeTrafficSelector;)Landroid/net/ipsec/ike/TunnelModeChildSessionParams$Builder;",
			arg0.object()
		);
	}
	android::net::ipsec::ike::TunnelModeChildSessionParams TunnelModeChildSessionParams_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/ipsec/ike/TunnelModeChildSessionParams;"
		);
	}
	android::net::ipsec::ike::TunnelModeChildSessionParams_Builder TunnelModeChildSessionParams_Builder::setLifetimeSeconds(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"setLifetimeSeconds",
			"(II)Landroid/net/ipsec/ike/TunnelModeChildSessionParams$Builder;",
			arg0,
			arg1
		);
	}
} // namespace android::net::ipsec::ike

