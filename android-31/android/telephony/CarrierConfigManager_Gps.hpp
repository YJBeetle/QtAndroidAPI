#pragma once

#include "../../JObject.hpp"


namespace android::telephony
{
	class CarrierConfigManager_Gps : public JObject
	{
	public:
		// Fields
		static jstring KEY_PERSIST_LPP_MODE_BOOL();
		static jstring KEY_PREFIX();
		
		// QJniObject forward
		template<typename ...Ts> explicit CarrierConfigManager_Gps(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CarrierConfigManager_Gps(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::telephony

