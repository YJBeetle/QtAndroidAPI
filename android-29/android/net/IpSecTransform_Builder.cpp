#include "../content/Context.hpp"
#include "./IpSecAlgorithm.hpp"
#include "./IpSecManager_SecurityParameterIndex.hpp"
#include "./IpSecManager_UdpEncapsulationSocket.hpp"
#include "./IpSecTransform.hpp"
#include "../../java/net/InetAddress.hpp"
#include "./IpSecTransform_Builder.hpp"

namespace android::net
{
	// Fields
	
	// QAndroidJniObject forward
	IpSecTransform_Builder::IpSecTransform_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	IpSecTransform_Builder::IpSecTransform_Builder(android::content::Context arg0)
		: JObject(
			"android.net.IpSecTransform$Builder",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	android::net::IpSecTransform IpSecTransform_Builder::buildTransportModeTransform(java::net::InetAddress arg0, android::net::IpSecManager_SecurityParameterIndex arg1)
	{
		return callObjectMethod(
			"buildTransportModeTransform",
			"(Ljava/net/InetAddress;Landroid/net/IpSecManager$SecurityParameterIndex;)Landroid/net/IpSecTransform;",
			arg0.object(),
			arg1.object()
		);
	}
	android::net::IpSecTransform_Builder IpSecTransform_Builder::setAuthenticatedEncryption(android::net::IpSecAlgorithm arg0)
	{
		return callObjectMethod(
			"setAuthenticatedEncryption",
			"(Landroid/net/IpSecAlgorithm;)Landroid/net/IpSecTransform$Builder;",
			arg0.object()
		);
	}
	android::net::IpSecTransform_Builder IpSecTransform_Builder::setAuthentication(android::net::IpSecAlgorithm arg0)
	{
		return callObjectMethod(
			"setAuthentication",
			"(Landroid/net/IpSecAlgorithm;)Landroid/net/IpSecTransform$Builder;",
			arg0.object()
		);
	}
	android::net::IpSecTransform_Builder IpSecTransform_Builder::setEncryption(android::net::IpSecAlgorithm arg0)
	{
		return callObjectMethod(
			"setEncryption",
			"(Landroid/net/IpSecAlgorithm;)Landroid/net/IpSecTransform$Builder;",
			arg0.object()
		);
	}
	android::net::IpSecTransform_Builder IpSecTransform_Builder::setIpv4Encapsulation(android::net::IpSecManager_UdpEncapsulationSocket arg0, jint arg1)
	{
		return callObjectMethod(
			"setIpv4Encapsulation",
			"(Landroid/net/IpSecManager$UdpEncapsulationSocket;I)Landroid/net/IpSecTransform$Builder;",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net

