#pragma once

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
	inline void NsdManager::resolveService(android::net::nsd::NsdServiceInfo arg0, JObject arg1) const
	{
		callMethod<void>(
			"resolveService",
			"(Landroid/net/nsd/NsdServiceInfo;Landroid/net/nsd/NsdManager$ResolveListener;)V",
			arg0.object(),
			arg1.object()
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
	inline void NsdManager::unregisterService(JObject arg0) const
	{
		callMethod<void>(
			"unregisterService",
			"(Landroid/net/nsd/NsdManager$RegistrationListener;)V",
			arg0.object()
		);
	}
} // namespace android::net::nsd

// Base class headers

