#include "../content/Context.hpp"
#include "../content/Intent.hpp"
#include "../../java/net/DatagramSocket.hpp"
#include "../../java/net/Socket.hpp"
#include "./VpnService.hpp"

namespace android::net
{
	// Fields
	jstring VpnService::SERVICE_INTERFACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.VpnService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring VpnService::SERVICE_META_DATA_SUPPORTS_ALWAYS_ON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.VpnService",
			"SERVICE_META_DATA_SUPPORTS_ALWAYS_ON",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	VpnService::VpnService(QAndroidJniObject obj) : android::app::Service(obj) {}
	
	// Constructors
	VpnService::VpnService()
		: android::app::Service(
			"android.net.VpnService",
			"()V"
		) {}
	
	// Methods
	android::content::Intent VpnService::prepare(android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.VpnService",
			"prepare",
			"(Landroid/content/Context;)Landroid/content/Intent;",
			arg0.object()
		);
	}
	jboolean VpnService::isAlwaysOn()
	{
		return callMethod<jboolean>(
			"isAlwaysOn",
			"()Z"
		);
	}
	jboolean VpnService::isLockdownEnabled()
	{
		return callMethod<jboolean>(
			"isLockdownEnabled",
			"()Z"
		);
	}
	__JniBaseClass VpnService::onBind(android::content::Intent arg0)
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	void VpnService::onRevoke()
	{
		callMethod<void>(
			"onRevoke",
			"()V"
		);
	}
	jboolean VpnService::protect(jint arg0)
	{
		return callMethod<jboolean>(
			"protect",
			"(I)Z",
			arg0
		);
	}
	jboolean VpnService::protect(java::net::DatagramSocket arg0)
	{
		return callMethod<jboolean>(
			"protect",
			"(Ljava/net/DatagramSocket;)Z",
			arg0.object()
		);
	}
	jboolean VpnService::protect(java::net::Socket arg0)
	{
		return callMethod<jboolean>(
			"protect",
			"(Ljava/net/Socket;)Z",
			arg0.object()
		);
	}
	jboolean VpnService::setUnderlyingNetworks(jarray arg0)
	{
		return callMethod<jboolean>(
			"setUnderlyingNetworks",
			"([Landroid/net/Network;)Z",
			arg0
		);
	}
} // namespace android::net

