#include "../app/PendingIntent.hpp"
#include "./ProxyInfo.hpp"
#include "./VpnService.hpp"
#include "../os/ParcelFileDescriptor.hpp"
#include "../../java/net/InetAddress.hpp"
#include "./VpnService_Builder.hpp"

namespace android::net
{
	// Fields
	
	// QAndroidJniObject forward
	VpnService_Builder::VpnService_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	VpnService_Builder::VpnService_Builder(android::net::VpnService arg0)
		: __JniBaseClass(
			"android.net.VpnService$Builder",
			"(Landroid/net/VpnService;)V",
			arg0.object()
		) {}
	
	// Methods
	QAndroidJniObject VpnService_Builder::addAddress(jstring arg0, jint arg1)
	{
		return callObjectMethod(
			"addAddress",
			"(Ljava/lang/String;I)Landroid/net/VpnService$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject VpnService_Builder::addAddress(java::net::InetAddress arg0, jint arg1)
	{
		return callObjectMethod(
			"addAddress",
			"(Ljava/net/InetAddress;I)Landroid/net/VpnService$Builder;",
			arg0.object(),
			arg1
		);
	}
	QAndroidJniObject VpnService_Builder::addAllowedApplication(jstring arg0)
	{
		return callObjectMethod(
			"addAllowedApplication",
			"(Ljava/lang/String;)Landroid/net/VpnService$Builder;",
			arg0
		);
	}
	QAndroidJniObject VpnService_Builder::addDisallowedApplication(jstring arg0)
	{
		return callObjectMethod(
			"addDisallowedApplication",
			"(Ljava/lang/String;)Landroid/net/VpnService$Builder;",
			arg0
		);
	}
	QAndroidJniObject VpnService_Builder::addDnsServer(jstring arg0)
	{
		return callObjectMethod(
			"addDnsServer",
			"(Ljava/lang/String;)Landroid/net/VpnService$Builder;",
			arg0
		);
	}
	QAndroidJniObject VpnService_Builder::addDnsServer(java::net::InetAddress arg0)
	{
		return callObjectMethod(
			"addDnsServer",
			"(Ljava/net/InetAddress;)Landroid/net/VpnService$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject VpnService_Builder::addRoute(jstring arg0, jint arg1)
	{
		return callObjectMethod(
			"addRoute",
			"(Ljava/lang/String;I)Landroid/net/VpnService$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject VpnService_Builder::addRoute(java::net::InetAddress arg0, jint arg1)
	{
		return callObjectMethod(
			"addRoute",
			"(Ljava/net/InetAddress;I)Landroid/net/VpnService$Builder;",
			arg0.object(),
			arg1
		);
	}
	QAndroidJniObject VpnService_Builder::addSearchDomain(jstring arg0)
	{
		return callObjectMethod(
			"addSearchDomain",
			"(Ljava/lang/String;)Landroid/net/VpnService$Builder;",
			arg0
		);
	}
	QAndroidJniObject VpnService_Builder::allowBypass()
	{
		return callObjectMethod(
			"allowBypass",
			"()Landroid/net/VpnService$Builder;"
		);
	}
	QAndroidJniObject VpnService_Builder::allowFamily(jint arg0)
	{
		return callObjectMethod(
			"allowFamily",
			"(I)Landroid/net/VpnService$Builder;",
			arg0
		);
	}
	QAndroidJniObject VpnService_Builder::establish()
	{
		return callObjectMethod(
			"establish",
			"()Landroid/os/ParcelFileDescriptor;"
		);
	}
	QAndroidJniObject VpnService_Builder::setBlocking(jboolean arg0)
	{
		return callObjectMethod(
			"setBlocking",
			"(Z)Landroid/net/VpnService$Builder;",
			arg0
		);
	}
	QAndroidJniObject VpnService_Builder::setConfigureIntent(android::app::PendingIntent arg0)
	{
		return callObjectMethod(
			"setConfigureIntent",
			"(Landroid/app/PendingIntent;)Landroid/net/VpnService$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject VpnService_Builder::setHttpProxy(android::net::ProxyInfo arg0)
	{
		return callObjectMethod(
			"setHttpProxy",
			"(Landroid/net/ProxyInfo;)Landroid/net/VpnService$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject VpnService_Builder::setMetered(jboolean arg0)
	{
		return callObjectMethod(
			"setMetered",
			"(Z)Landroid/net/VpnService$Builder;",
			arg0
		);
	}
	QAndroidJniObject VpnService_Builder::setMtu(jint arg0)
	{
		return callObjectMethod(
			"setMtu",
			"(I)Landroid/net/VpnService$Builder;",
			arg0
		);
	}
	QAndroidJniObject VpnService_Builder::setSession(jstring arg0)
	{
		return callObjectMethod(
			"setSession",
			"(Ljava/lang/String;)Landroid/net/VpnService$Builder;",
			arg0
		);
	}
	QAndroidJniObject VpnService_Builder::setUnderlyingNetworks(jarray arg0)
	{
		return callObjectMethod(
			"setUnderlyingNetworks",
			"([Landroid/net/Network;)Landroid/net/VpnService$Builder;",
			arg0
		);
	}
} // namespace android::net
