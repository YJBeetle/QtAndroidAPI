#pragma once

#include "./ImsMmTelManager_CapabilityCallback.def.hpp"
#include "./RegistrationManager_RegistrationCallback.def.hpp"
#include "./ImsMmTelManager.def.hpp"

namespace android::telephony::ims
{
	// Fields
	inline jint ImsMmTelManager::WIFI_MODE_CELLULAR_PREFERRED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsMmTelManager",
			"WIFI_MODE_CELLULAR_PREFERRED"
		);
	}
	inline jint ImsMmTelManager::WIFI_MODE_WIFI_ONLY()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsMmTelManager",
			"WIFI_MODE_WIFI_ONLY"
		);
	}
	inline jint ImsMmTelManager::WIFI_MODE_WIFI_PREFERRED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsMmTelManager",
			"WIFI_MODE_WIFI_PREFERRED"
		);
	}
	
	// Constructors
	
	// Methods
	inline void ImsMmTelManager::getRegistrationState(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"getRegistrationState",
			"(Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void ImsMmTelManager::getRegistrationTransportType(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"getRegistrationTransportType",
			"(Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline jint ImsMmTelManager::getVoWiFiModeSetting() const
	{
		return callMethod<jint>(
			"getVoWiFiModeSetting",
			"()I"
		);
	}
	inline jboolean ImsMmTelManager::isAdvancedCallingSettingEnabled() const
	{
		return callMethod<jboolean>(
			"isAdvancedCallingSettingEnabled",
			"()Z"
		);
	}
	inline jboolean ImsMmTelManager::isTtyOverVolteEnabled() const
	{
		return callMethod<jboolean>(
			"isTtyOverVolteEnabled",
			"()Z"
		);
	}
	inline jboolean ImsMmTelManager::isVoWiFiRoamingSettingEnabled() const
	{
		return callMethod<jboolean>(
			"isVoWiFiRoamingSettingEnabled",
			"()Z"
		);
	}
	inline jboolean ImsMmTelManager::isVoWiFiSettingEnabled() const
	{
		return callMethod<jboolean>(
			"isVoWiFiSettingEnabled",
			"()Z"
		);
	}
	inline jboolean ImsMmTelManager::isVtSettingEnabled() const
	{
		return callMethod<jboolean>(
			"isVtSettingEnabled",
			"()Z"
		);
	}
	inline void ImsMmTelManager::registerImsRegistrationCallback(JObject arg0, android::telephony::ims::RegistrationManager_RegistrationCallback arg1) const
	{
		callMethod<void>(
			"registerImsRegistrationCallback",
			"(Ljava/util/concurrent/Executor;Landroid/telephony/ims/RegistrationManager$RegistrationCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void ImsMmTelManager::registerMmTelCapabilityCallback(JObject arg0, android::telephony::ims::ImsMmTelManager_CapabilityCallback arg1) const
	{
		callMethod<void>(
			"registerMmTelCapabilityCallback",
			"(Ljava/util/concurrent/Executor;Landroid/telephony/ims/ImsMmTelManager$CapabilityCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void ImsMmTelManager::unregisterImsRegistrationCallback(android::telephony::ims::RegistrationManager_RegistrationCallback arg0) const
	{
		callMethod<void>(
			"unregisterImsRegistrationCallback",
			"(Landroid/telephony/ims/RegistrationManager$RegistrationCallback;)V",
			arg0.object()
		);
	}
	inline void ImsMmTelManager::unregisterMmTelCapabilityCallback(android::telephony::ims::ImsMmTelManager_CapabilityCallback arg0) const
	{
		callMethod<void>(
			"unregisterMmTelCapabilityCallback",
			"(Landroid/telephony/ims/ImsMmTelManager$CapabilityCallback;)V",
			arg0.object()
		);
	}
} // namespace android::telephony::ims

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony::ims;
#endif
