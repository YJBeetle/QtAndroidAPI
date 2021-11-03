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
		void getRegistrationState(JObject arg0, JObject arg1);
		void getRegistrationTransportType(JObject arg0, JObject arg1);
		jint getVoWiFiModeSetting();
		jboolean isAdvancedCallingSettingEnabled();
		jboolean isTtyOverVolteEnabled();
		jboolean isVoWiFiRoamingSettingEnabled();
		jboolean isVoWiFiSettingEnabled();
		jboolean isVtSettingEnabled();
		void registerImsRegistrationCallback(JObject arg0, android::telephony::ims::RegistrationManager_RegistrationCallback arg1);
		void registerMmTelCapabilityCallback(JObject arg0, android::telephony::ims::ImsMmTelManager_CapabilityCallback arg1);
		void unregisterImsRegistrationCallback(android::telephony::ims::RegistrationManager_RegistrationCallback arg0);
		void unregisterMmTelCapabilityCallback(android::telephony::ims::ImsMmTelManager_CapabilityCallback arg0);
	};
} // namespace android::telephony::ims

