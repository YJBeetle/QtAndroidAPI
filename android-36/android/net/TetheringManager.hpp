#pragma once

#include "./TetheringManager_TetheringRequest.def.hpp"
#include "./TetheringManager.def.hpp"

namespace android::net
{
	// Fields
	inline jint TetheringManager::CONNECTIVITY_SCOPE_GLOBAL()
	{
		return getStaticField<jint>(
			"android.net.TetheringManager",
			"CONNECTIVITY_SCOPE_GLOBAL"
		);
	}
	inline jint TetheringManager::TETHERING_WIFI()
	{
		return getStaticField<jint>(
			"android.net.TetheringManager",
			"TETHERING_WIFI"
		);
	}
	inline jint TetheringManager::TETHER_ERROR_DHCPSERVER_ERROR()
	{
		return getStaticField<jint>(
			"android.net.TetheringManager",
			"TETHER_ERROR_DHCPSERVER_ERROR"
		);
	}
	inline jint TetheringManager::TETHER_ERROR_DISABLE_FORWARDING_ERROR()
	{
		return getStaticField<jint>(
			"android.net.TetheringManager",
			"TETHER_ERROR_DISABLE_FORWARDING_ERROR"
		);
	}
	inline jint TetheringManager::TETHER_ERROR_DUPLICATE_REQUEST()
	{
		return getStaticField<jint>(
			"android.net.TetheringManager",
			"TETHER_ERROR_DUPLICATE_REQUEST"
		);
	}
	inline jint TetheringManager::TETHER_ERROR_ENABLE_FORWARDING_ERROR()
	{
		return getStaticField<jint>(
			"android.net.TetheringManager",
			"TETHER_ERROR_ENABLE_FORWARDING_ERROR"
		);
	}
	inline jint TetheringManager::TETHER_ERROR_ENTITLEMENT_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.net.TetheringManager",
			"TETHER_ERROR_ENTITLEMENT_UNKNOWN"
		);
	}
	inline jint TetheringManager::TETHER_ERROR_IFACE_CFG_ERROR()
	{
		return getStaticField<jint>(
			"android.net.TetheringManager",
			"TETHER_ERROR_IFACE_CFG_ERROR"
		);
	}
	inline jint TetheringManager::TETHER_ERROR_INTERNAL_ERROR()
	{
		return getStaticField<jint>(
			"android.net.TetheringManager",
			"TETHER_ERROR_INTERNAL_ERROR"
		);
	}
	inline jint TetheringManager::TETHER_ERROR_NO_ACCESS_TETHERING_PERMISSION()
	{
		return getStaticField<jint>(
			"android.net.TetheringManager",
			"TETHER_ERROR_NO_ACCESS_TETHERING_PERMISSION"
		);
	}
	inline jint TetheringManager::TETHER_ERROR_NO_CHANGE_TETHERING_PERMISSION()
	{
		return getStaticField<jint>(
			"android.net.TetheringManager",
			"TETHER_ERROR_NO_CHANGE_TETHERING_PERMISSION"
		);
	}
	inline jint TetheringManager::TETHER_ERROR_NO_ERROR()
	{
		return getStaticField<jint>(
			"android.net.TetheringManager",
			"TETHER_ERROR_NO_ERROR"
		);
	}
	inline jint TetheringManager::TETHER_ERROR_PROVISIONING_FAILED()
	{
		return getStaticField<jint>(
			"android.net.TetheringManager",
			"TETHER_ERROR_PROVISIONING_FAILED"
		);
	}
	inline jint TetheringManager::TETHER_ERROR_SERVICE_UNAVAIL()
	{
		return getStaticField<jint>(
			"android.net.TetheringManager",
			"TETHER_ERROR_SERVICE_UNAVAIL"
		);
	}
	inline jint TetheringManager::TETHER_ERROR_TETHER_IFACE_ERROR()
	{
		return getStaticField<jint>(
			"android.net.TetheringManager",
			"TETHER_ERROR_TETHER_IFACE_ERROR"
		);
	}
	inline jint TetheringManager::TETHER_ERROR_UNAVAIL_IFACE()
	{
		return getStaticField<jint>(
			"android.net.TetheringManager",
			"TETHER_ERROR_UNAVAIL_IFACE"
		);
	}
	inline jint TetheringManager::TETHER_ERROR_UNKNOWN_IFACE()
	{
		return getStaticField<jint>(
			"android.net.TetheringManager",
			"TETHER_ERROR_UNKNOWN_IFACE"
		);
	}
	inline jint TetheringManager::TETHER_ERROR_UNKNOWN_REQUEST()
	{
		return getStaticField<jint>(
			"android.net.TetheringManager",
			"TETHER_ERROR_UNKNOWN_REQUEST"
		);
	}
	inline jint TetheringManager::TETHER_ERROR_UNKNOWN_TYPE()
	{
		return getStaticField<jint>(
			"android.net.TetheringManager",
			"TETHER_ERROR_UNKNOWN_TYPE"
		);
	}
	inline jint TetheringManager::TETHER_ERROR_UNSUPPORTED()
	{
		return getStaticField<jint>(
			"android.net.TetheringManager",
			"TETHER_ERROR_UNSUPPORTED"
		);
	}
	inline jint TetheringManager::TETHER_ERROR_UNTETHER_IFACE_ERROR()
	{
		return getStaticField<jint>(
			"android.net.TetheringManager",
			"TETHER_ERROR_UNTETHER_IFACE_ERROR"
		);
	}
	
	// Constructors
	
	// Methods
	inline void TetheringManager::registerTetheringEventCallback(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"registerTetheringEventCallback",
			"(Ljava/util/concurrent/Executor;Landroid/net/TetheringManager$TetheringEventCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void TetheringManager::startTethering(android::net::TetheringManager_TetheringRequest arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"startTethering",
			"(Landroid/net/TetheringManager$TetheringRequest;Ljava/util/concurrent/Executor;Landroid/net/TetheringManager$StartTetheringCallback;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void TetheringManager::stopTethering(android::net::TetheringManager_TetheringRequest arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"stopTethering",
			"(Landroid/net/TetheringManager$TetheringRequest;Ljava/util/concurrent/Executor;Landroid/net/TetheringManager$StopTetheringCallback;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void TetheringManager::unregisterTetheringEventCallback(JObject arg0) const
	{
		callMethod<void>(
			"unregisterTetheringEventCallback",
			"(Landroid/net/TetheringManager$TetheringEventCallback;)V",
			arg0.object()
		);
	}
} // namespace android::net

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net;
#endif
