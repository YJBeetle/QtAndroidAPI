#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::telephony
{
	class CarrierConfigManager_Gps : public JObject
	{
	public:
		// Fields
		static JString KEY_PERSIST_LPP_MODE_BOOL();
		static JString KEY_PREFIX();
		
		// QJniObject forward
		template<typename ...Ts> explicit CarrierConfigManager_Gps(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CarrierConfigManager_Gps(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::telephony

