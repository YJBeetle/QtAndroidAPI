#pragma once

#include "../content/Context.def.hpp"
#include "./IpSecAlgorithm.def.hpp"
#include "./IpSecManager_SecurityParameterIndex.def.hpp"
#include "./IpSecManager_UdpEncapsulationSocket.def.hpp"
#include "./IpSecTransform.def.hpp"
#include "../../java/net/InetAddress.def.hpp"
#include "./IpSecTransform_Builder.def.hpp"

namespace android::net
{
	// Fields
	
	// Constructors
	inline IpSecTransform_Builder::IpSecTransform_Builder(android::content::Context arg0)
		: JObject(
			"android.net.IpSecTransform$Builder",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::net::IpSecTransform IpSecTransform_Builder::buildTransportModeTransform(java::net::InetAddress arg0, android::net::IpSecManager_SecurityParameterIndex arg1) const
	{
		return callObjectMethod(
			"buildTransportModeTransform",
			"(Ljava/net/InetAddress;Landroid/net/IpSecManager$SecurityParameterIndex;)Landroid/net/IpSecTransform;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::net::IpSecTransform_Builder IpSecTransform_Builder::setAuthenticatedEncryption(android::net::IpSecAlgorithm arg0) const
	{
		return callObjectMethod(
			"setAuthenticatedEncryption",
			"(Landroid/net/IpSecAlgorithm;)Landroid/net/IpSecTransform$Builder;",
			arg0.object()
		);
	}
	inline android::net::IpSecTransform_Builder IpSecTransform_Builder::setAuthentication(android::net::IpSecAlgorithm arg0) const
	{
		return callObjectMethod(
			"setAuthentication",
			"(Landroid/net/IpSecAlgorithm;)Landroid/net/IpSecTransform$Builder;",
			arg0.object()
		);
	}
	inline android::net::IpSecTransform_Builder IpSecTransform_Builder::setEncryption(android::net::IpSecAlgorithm arg0) const
	{
		return callObjectMethod(
			"setEncryption",
			"(Landroid/net/IpSecAlgorithm;)Landroid/net/IpSecTransform$Builder;",
			arg0.object()
		);
	}
	inline android::net::IpSecTransform_Builder IpSecTransform_Builder::setIpv4Encapsulation(android::net::IpSecManager_UdpEncapsulationSocket arg0, jint arg1) const
	{
		return callObjectMethod(
			"setIpv4Encapsulation",
			"(Landroid/net/IpSecManager$UdpEncapsulationSocket;I)Landroid/net/IpSecTransform$Builder;",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net

// Base class headers

