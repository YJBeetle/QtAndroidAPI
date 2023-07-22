#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::telephony
{
	class CarrierConfigManager_ImsWfc : public JObject
	{
	public:
		// Fields
		static JString KEY_EMERGENCY_CALL_OVER_EMERGENCY_PDN_BOOL();
		static JString KEY_PIDF_SHORT_CODE_STRING_ARRAY();
		static JString KEY_PREFIX();
		
		// QJniObject forward
		template<typename ...Ts> explicit CarrierConfigManager_ImsWfc(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CarrierConfigManager_ImsWfc(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::telephony

