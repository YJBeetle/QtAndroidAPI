#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::telephony
{
	class CarrierConfigManager_Apn : public JObject
	{
	public:
		// Fields
		static JString KEY_PREFIX();
		static JString KEY_SETTINGS_DEFAULT_PROTOCOL_STRING();
		static JString KEY_SETTINGS_DEFAULT_ROAMING_PROTOCOL_STRING();
		static JString PROTOCOL_IPV4();
		static JString PROTOCOL_IPV4V6();
		static JString PROTOCOL_IPV6();
		
		// QJniObject forward
		template<typename ...Ts> explicit CarrierConfigManager_Apn(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CarrierConfigManager_Apn(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::telephony

