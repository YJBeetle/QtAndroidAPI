#include "./ImsMmTelManager_CapabilityCallback.hpp"
#include "./RegistrationManager_RegistrationCallback.hpp"
#include "./ImsMmTelManager.hpp"

namespace android::telephony::ims
{
	// Fields
	jint ImsMmTelManager::WIFI_MODE_CELLULAR_PREFERRED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsMmTelManager",
			"WIFI_MODE_CELLULAR_PREFERRED"
		);
	}
	jint ImsMmTelManager::WIFI_MODE_WIFI_ONLY()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsMmTelManager",
			"WIFI_MODE_WIFI_ONLY"
		);
	}
	jint ImsMmTelManager::WIFI_MODE_WIFI_PREFERRED()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsMmTelManager",
			"WIFI_MODE_WIFI_PREFERRED"
		);
	}
	
	// QJniObject forward
	ImsMmTelManager::ImsMmTelManager(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void ImsMmTelManager::getRegistrationState(JObject arg0, JObject arg1)
	{
		callMethod<void>(
			"getRegistrationState",
			"(Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ImsMmTelManager::getRegistrationTransportType(JObject arg0, JObject arg1)
	{
		callMethod<void>(
			"getRegistrationTransportType",
			"(Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jint ImsMmTelManager::getVoWiFiModeSetting()
	{
		return callMethod<jint>(
			"getVoWiFiModeSetting",
			"()I"
		);
	}
	jboolean ImsMmTelManager::isAdvancedCallingSettingEnabled()
	{
		return callMethod<jboolean>(
			"isAdvancedCallingSettingEnabled",
			"()Z"
		);
	}
	jboolean ImsMmTelManager::isCrossSimCallingEnabled()
	{
		return callMethod<jboolean>(
			"isCrossSimCallingEnabled",
			"()Z"
		);
	}
	jboolean ImsMmTelManager::isTtyOverVolteEnabled()
	{
		return callMethod<jboolean>(
			"isTtyOverVolteEnabled",
			"()Z"
		);
	}
	jboolean ImsMmTelManager::isVoWiFiRoamingSettingEnabled()
	{
		return callMethod<jboolean>(
			"isVoWiFiRoamingSettingEnabled",
			"()Z"
		);
	}
	jboolean ImsMmTelManager::isVoWiFiSettingEnabled()
	{
		return callMethod<jboolean>(
			"isVoWiFiSettingEnabled",
			"()Z"
		);
	}
	jboolean ImsMmTelManager::isVtSettingEnabled()
	{
		return callMethod<jboolean>(
			"isVtSettingEnabled",
			"()Z"
		);
	}
	void ImsMmTelManager::registerImsRegistrationCallback(JObject arg0, android::telephony::ims::RegistrationManager_RegistrationCallback arg1)
	{
		callMethod<void>(
			"registerImsRegistrationCallback",
			"(Ljava/util/concurrent/Executor;Landroid/telephony/ims/RegistrationManager$RegistrationCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ImsMmTelManager::registerMmTelCapabilityCallback(JObject arg0, android::telephony::ims::ImsMmTelManager_CapabilityCallback arg1)
	{
		callMethod<void>(
			"registerMmTelCapabilityCallback",
			"(Ljava/util/concurrent/Executor;Landroid/telephony/ims/ImsMmTelManager$CapabilityCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ImsMmTelManager::unregisterImsRegistrationCallback(android::telephony::ims::RegistrationManager_RegistrationCallback arg0)
	{
		callMethod<void>(
			"unregisterImsRegistrationCallback",
			"(Landroid/telephony/ims/RegistrationManager$RegistrationCallback;)V",
			arg0.object()
		);
	}
	void ImsMmTelManager::unregisterMmTelCapabilityCallback(android::telephony::ims::ImsMmTelManager_CapabilityCallback arg0)
	{
		callMethod<void>(
			"unregisterMmTelCapabilityCallback",
			"(Landroid/telephony/ims/ImsMmTelManager$CapabilityCallback;)V",
			arg0.object()
		);
	}
} // namespace android::telephony::ims

