#include "../../JArray.hpp"
#include "../app/PendingIntent.hpp"
#include "./VpnService.hpp"
#include "../os/ParcelFileDescriptor.hpp"
#include "../../JString.hpp"
#include "../../java/net/InetAddress.hpp"
#include "./VpnService_Builder.hpp"

namespace android::net
{
	// Fields
	
	// QAndroidJniObject forward
	VpnService_Builder::VpnService_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	VpnService_Builder::VpnService_Builder(android::net::VpnService arg0)
		: JObject(
			"android.net.VpnService$Builder",
			"(Landroid/net/VpnService;)V",
			arg0.object()
		) {}
	
	// Methods
	android::net::VpnService_Builder VpnService_Builder::addAddress(JString arg0, jint arg1) const
	{
		return callObjectMethod(
			"addAddress",
			"(Ljava/lang/String;I)Landroid/net/VpnService$Builder;",
			arg0.object<jstring>(),
			arg1
		);
	}
	android::net::VpnService_Builder VpnService_Builder::addAddress(java::net::InetAddress arg0, jint arg1) const
	{
		return callObjectMethod(
			"addAddress",
			"(Ljava/net/InetAddress;I)Landroid/net/VpnService$Builder;",
			arg0.object(),
			arg1
		);
	}
	android::net::VpnService_Builder VpnService_Builder::addAllowedApplication(JString arg0) const
	{
		return callObjectMethod(
			"addAllowedApplication",
			"(Ljava/lang/String;)Landroid/net/VpnService$Builder;",
			arg0.object<jstring>()
		);
	}
	android::net::VpnService_Builder VpnService_Builder::addDisallowedApplication(JString arg0) const
	{
		return callObjectMethod(
			"addDisallowedApplication",
			"(Ljava/lang/String;)Landroid/net/VpnService$Builder;",
			arg0.object<jstring>()
		);
	}
	android::net::VpnService_Builder VpnService_Builder::addDnsServer(JString arg0) const
	{
		return callObjectMethod(
			"addDnsServer",
			"(Ljava/lang/String;)Landroid/net/VpnService$Builder;",
			arg0.object<jstring>()
		);
	}
	android::net::VpnService_Builder VpnService_Builder::addDnsServer(java::net::InetAddress arg0) const
	{
		return callObjectMethod(
			"addDnsServer",
			"(Ljava/net/InetAddress;)Landroid/net/VpnService$Builder;",
			arg0.object()
		);
	}
	android::net::VpnService_Builder VpnService_Builder::addRoute(JString arg0, jint arg1) const
	{
		return callObjectMethod(
			"addRoute",
			"(Ljava/lang/String;I)Landroid/net/VpnService$Builder;",
			arg0.object<jstring>(),
			arg1
		);
	}
	android::net::VpnService_Builder VpnService_Builder::addRoute(java::net::InetAddress arg0, jint arg1) const
	{
		return callObjectMethod(
			"addRoute",
			"(Ljava/net/InetAddress;I)Landroid/net/VpnService$Builder;",
			arg0.object(),
			arg1
		);
	}
	android::net::VpnService_Builder VpnService_Builder::addSearchDomain(JString arg0) const
	{
		return callObjectMethod(
			"addSearchDomain",
			"(Ljava/lang/String;)Landroid/net/VpnService$Builder;",
			arg0.object<jstring>()
		);
	}
	android::net::VpnService_Builder VpnService_Builder::allowBypass() const
	{
		return callObjectMethod(
			"allowBypass",
			"()Landroid/net/VpnService$Builder;"
		);
	}
	android::net::VpnService_Builder VpnService_Builder::allowFamily(jint arg0) const
	{
		return callObjectMethod(
			"allowFamily",
			"(I)Landroid/net/VpnService$Builder;",
			arg0
		);
	}
	android::os::ParcelFileDescriptor VpnService_Builder::establish() const
	{
		return callObjectMethod(
			"establish",
			"()Landroid/os/ParcelFileDescriptor;"
		);
	}
	android::net::VpnService_Builder VpnService_Builder::setBlocking(jboolean arg0) const
	{
		return callObjectMethod(
			"setBlocking",
			"(Z)Landroid/net/VpnService$Builder;",
			arg0
		);
	}
	android::net::VpnService_Builder VpnService_Builder::setConfigureIntent(android::app::PendingIntent arg0) const
	{
		return callObjectMethod(
			"setConfigureIntent",
			"(Landroid/app/PendingIntent;)Landroid/net/VpnService$Builder;",
			arg0.object()
		);
	}
	android::net::VpnService_Builder VpnService_Builder::setMtu(jint arg0) const
	{
		return callObjectMethod(
			"setMtu",
			"(I)Landroid/net/VpnService$Builder;",
			arg0
		);
	}
	android::net::VpnService_Builder VpnService_Builder::setSession(JString arg0) const
	{
		return callObjectMethod(
			"setSession",
			"(Ljava/lang/String;)Landroid/net/VpnService$Builder;",
			arg0.object<jstring>()
		);
	}
	android::net::VpnService_Builder VpnService_Builder::setUnderlyingNetworks(JArray arg0) const
	{
		return callObjectMethod(
			"setUnderlyingNetworks",
			"([Landroid/net/Network;)Landroid/net/VpnService$Builder;",
			arg0.object<jarray>()
		);
	}
} // namespace android::net

