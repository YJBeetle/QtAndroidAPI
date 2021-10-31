#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::telephony
{
	class CarrierConfigManager_Apn : public __JniBaseClass
	{
	public:
		// Fields
		static jstring KEY_PREFIX();
		static jstring KEY_SETTINGS_DEFAULT_PROTOCOL_STRING();
		static jstring KEY_SETTINGS_DEFAULT_ROAMING_PROTOCOL_STRING();
		static jstring PROTOCOL_IPV4();
		static jstring PROTOCOL_IPV4V6();
		static jstring PROTOCOL_IPV6();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CarrierConfigManager_Apn(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CarrierConfigManager_Apn(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::telephony

