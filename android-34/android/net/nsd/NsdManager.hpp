#pragma once

#include "../Network.def.hpp"
#include "../NetworkRequest.def.hpp"
#include "./NsdServiceInfo.def.hpp"
#include "../../../JString.hpp"
#include "./NsdManager.def.hpp"

namespace android::net::nsd
{
	// Fields
	inline JString NsdManager::ACTION_NSD_STATE_CHANGED()
	{
		return getStaticObjectField(
			"android.net.nsd.NsdManager",
			"ACTION_NSD_STATE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString NsdManager::EXTRA_NSD_STATE()
	{
		return getStaticObjectField(
			"android.net.nsd.NsdManager",
			"EXTRA_NSD_STATE",
			"Ljava/lang/String;"
		);
	}
	inline jint NsdManager::FAILURE_ALREADY_ACTIVE()
	{
		return getStaticField<jint>(
			"android.net.nsd.NsdManager",
			"FAILURE_ALREADY_ACTIVE"
		);
	}
	inline jint NsdManager::FAILURE_BAD_PARAMETERS()
	{
		return getStaticField<jint>(
			"android.net.nsd.NsdManager",
			"FAILURE_BAD_PARAMETERS"
		);
	}
	inline jint NsdManager::FAILURE_INTERNAL_ERROR()
	{
		return getStaticField<jint>(
			"android.net.nsd.NsdManager",
			"FAILURE_INTERNAL_ERROR"
		);
	}
	inline jint NsdManager::FAILURE_MAX_LIMIT()
	{
		return getStaticField<jint>(
			"android.net.nsd.NsdManager",
			"FAILURE_MAX_LIMIT"
		);
	}
	inline jint NsdManager::FAILURE_OPERATION_NOT_RUNNING()
	{
		return getStaticField<jint>(
			"android.net.nsd.NsdManager",
			"FAILURE_OPERATION_NOT_RUNNING"
		);
	}
	inline jint NsdManager::NSD_STATE_DISABLED()
	{
		return getStaticField<jint>(
			"android.net.nsd.NsdManager",
			"NSD_STATE_DISABLED"
		);
	}
	inline jint NsdManager::NSD_STATE_ENABLED()
	{
		return getStaticField<jint>(
			"android.net.nsd.NsdManager",
			"NSD_STATE_ENABLED"
		);
	}
	inline jint NsdManager::PROTOCOL_DNS_SD()
	{
		return getStaticField<jint>(
			"android.net.nsd.NsdManager",
			"PROTOCOL_DNS_SD"
		);
	}
	
	// Constructors
	
	// Methods
	inline void NsdManager::discoverServices(JString arg0, jint arg1, JObject arg2) const
	{
		callMethod<void>(
			"discoverServices",
			"(Ljava/lang/String;ILandroid/net/nsd/NsdManager$DiscoveryListener;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object()
		);
	}
	inline void NsdManager::discoverServices(JString arg0, jint arg1, android::net::Network arg2, JObject arg3, JObject arg4) const
	{
		callMethod<void>(
			"discoverServices",
			"(Ljava/lang/String;ILandroid/net/Network;Ljava/util/concurrent/Executor;Landroid/net/nsd/NsdManager$DiscoveryListener;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object(),
			arg3.object(),
			arg4.object()
		);
	}
	inline void NsdManager::discoverServices(JString arg0, jint arg1, android::net::NetworkRequest arg2, JObject arg3, JObject arg4) const
	{
		callMethod<void>(
			"discoverServices",
			"(Ljava/lang/String;ILandroid/net/NetworkRequest;Ljava/util/concurrent/Executor;Landroid/net/nsd/NsdManager$DiscoveryListener;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object(),
			arg3.object(),
			arg4.object()
		);
	}
	inline void NsdManager::registerService(android::net::nsd::NsdServiceInfo arg0, jint arg1, JObject arg2) const
	{
		callMethod<void>(
			"registerService",
			"(Landroid/net/nsd/NsdServiceInfo;ILandroid/net/nsd/NsdManager$RegistrationListener;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline void NsdManager::registerService(android::net::nsd::NsdServiceInfo arg0, jint arg1, JObject arg2, JObject arg3) const
	{
		callMethod<void>(
			"registerService",
			"(Landroid/net/nsd/NsdServiceInfo;ILjava/util/concurrent/Executor;Landroid/net/nsd/NsdManager$RegistrationListener;)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3.object()
		);
	}
	inline void NsdManager::registerServiceInfoCallback(android::net::nsd::NsdServiceInfo arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"registerServiceInfoCallback",
			"(Landroid/net/nsd/NsdServiceInfo;Ljava/util/concurrent/Executor;Landroid/net/nsd/NsdManager$ServiceInfoCallback;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void NsdManager::resolveService(android::net::nsd::NsdServiceInfo arg0, JObject arg1) const
	{
		callMethod<void>(
			"resolveService",
			"(Landroid/net/nsd/NsdServiceInfo;Landroid/net/nsd/NsdManager$ResolveListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void NsdManager::resolveService(android::net::nsd::NsdServiceInfo arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"resolveService",
			"(Landroid/net/nsd/NsdServiceInfo;Ljava/util/concurrent/Executor;Landroid/net/nsd/NsdManager$ResolveListener;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void NsdManager::stopServiceDiscovery(JObject arg0) const
	{
		callMethod<void>(
			"stopServiceDiscovery",
			"(Landroid/net/nsd/NsdManager$DiscoveryListener;)V",
			arg0.object()
		);
	}
	inline void NsdManager::stopServiceResolution(JObject arg0) const
	{
		callMethod<void>(
			"stopServiceResolution",
			"(Landroid/net/nsd/NsdManager$ResolveListener;)V",
			arg0.object()
		);
	}
	inline void NsdManager::unregisterService(JObject arg0) const
	{
		callMethod<void>(
			"unregisterService",
			"(Landroid/net/nsd/NsdManager$RegistrationListener;)V",
			arg0.object()
		);
	}
	inline void NsdManager::unregisterServiceInfoCallback(JObject arg0) const
	{
		callMethod<void>(
			"unregisterServiceInfoCallback",
			"(Landroid/net/nsd/NsdManager$ServiceInfoCallback;)V",
			arg0.object()
		);
	}
} // namespace android::net::nsd

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::nsd;
#endif
