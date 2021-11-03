#pragma once

#include "../../../JObject.hpp"

namespace android::telephony::ims
{
	class ImsMmTelManager_CapabilityCallback;
}
namespace android::telephony::ims
{
	class RegistrationManager_RegistrationCallback;
}

namespace android::telephony::ims
{
	class ImsMmTelManager : public JObject
	{
	public:
		// Fields
		static jint WIFI_MODE_CELLULAR_PREFERRED();
		static jint WIFI_MODE_WIFI_ONLY();
		static jint WIFI_MODE_WIFI_PREFERRED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ImsMmTelManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ImsMmTelManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void getRegistrationState(JObject arg0, JObject arg1) const;
		void getRegistrationTransportType(JObject arg0, JObject arg1) const;
		jint getVoWiFiModeSetting() const;
		jboolean isAdvancedCallingSettingEnabled() const;
		jboolean isCrossSimCallingEnabled() const;
		jboolean isTtyOverVolteEnabled() const;
		jboolean isVoWiFiRoamingSettingEnabled() const;
		jboolean isVoWiFiSettingEnabled() const;
		jboolean isVtSettingEnabled() const;
		void registerImsRegistrationCallback(JObject arg0, android::telephony::ims::RegistrationManager_RegistrationCallback arg1) const;
		void registerMmTelCapabilityCallback(JObject arg0, android::telephony::ims::ImsMmTelManager_CapabilityCallback arg1) const;
		void unregisterImsRegistrationCallback(android::telephony::ims::RegistrationManager_RegistrationCallback arg0) const;
		void unregisterMmTelCapabilityCallback(android::telephony::ims::ImsMmTelManager_CapabilityCallback arg0) const;
	};
} // namespace android::telephony::ims

