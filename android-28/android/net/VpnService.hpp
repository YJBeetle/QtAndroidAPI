#pragma once

#include "../../JArray.hpp"
#include "../content/Context.def.hpp"
#include "../content/Intent.def.hpp"
#include "../../JString.hpp"
#include "../../java/net/DatagramSocket.def.hpp"
#include "../../java/net/Socket.def.hpp"
#include "./VpnService.def.hpp"

namespace android::net
{
	// Fields
	inline JString VpnService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.net.VpnService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	inline JString VpnService::SERVICE_META_DATA_SUPPORTS_ALWAYS_ON()
	{
		return getStaticObjectField(
			"android.net.VpnService",
			"SERVICE_META_DATA_SUPPORTS_ALWAYS_ON",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline VpnService::VpnService()
		: android::app::Service(
			"android.net.VpnService",
			"()V"
		) {}
	
	// Methods
	inline android::content::Intent VpnService::prepare(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.net.VpnService",
			"prepare",
			"(Landroid/content/Context;)Landroid/content/Intent;",
			arg0.object()
		);
	}
	inline JObject VpnService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	inline void VpnService::onRevoke() const
	{
		callMethod<void>(
			"onRevoke",
			"()V"
		);
	}
	inline jboolean VpnService::protect(jint arg0) const
	{
		return callMethod<jboolean>(
			"protect",
			"(I)Z",
			arg0
		);
	}
	inline jboolean VpnService::protect(java::net::DatagramSocket arg0) const
	{
		return callMethod<jboolean>(
			"protect",
			"(Ljava/net/DatagramSocket;)Z",
			arg0.object()
		);
	}
	inline jboolean VpnService::protect(java::net::Socket arg0) const
	{
		return callMethod<jboolean>(
			"protect",
			"(Ljava/net/Socket;)Z",
			arg0.object()
		);
	}
	inline jboolean VpnService::setUnderlyingNetworks(JArray arg0) const
	{
		return callMethod<jboolean>(
			"setUnderlyingNetworks",
			"([Landroid/net/Network;)Z",
			arg0.object<jarray>()
		);
	}
} // namespace android::net

// Base class headers
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../app/Service.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net;
#endif
