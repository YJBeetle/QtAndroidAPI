#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::telephony
{
	class CarrierConfigManager_Bsf : public JObject
	{
	public:
		// Fields
		static JString KEY_BSF_SERVER_FQDN_STRING();
		static JString KEY_BSF_SERVER_PORT_INT();
		static JString KEY_BSF_TRANSPORT_TYPE_INT();
		static JString KEY_PREFIX();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CarrierConfigManager_Bsf(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CarrierConfigManager_Bsf(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::telephony

