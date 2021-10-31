#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::telephony
{
	class CarrierConfigManager_Ims : public __JniBaseClass
	{
	public:
		// Fields
		static jstring KEY_PREFIX();
		static jstring KEY_WIFI_OFF_DEFERRING_TIME_MILLIS_INT();
		
		// QJniObject forward
		template<typename ...Ts> explicit CarrierConfigManager_Ims(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CarrierConfigManager_Ims(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::telephony

