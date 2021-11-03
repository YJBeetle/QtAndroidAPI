#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::telephony
{
	class CarrierConfigManager_Ims : public JObject
	{
	public:
		// Fields
		static JString KEY_PREFIX();
		static JString KEY_WIFI_OFF_DEFERRING_TIME_MILLIS_INT();
		
		// QJniObject forward
		template<typename ...Ts> explicit CarrierConfigManager_Ims(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CarrierConfigManager_Ims(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::telephony

