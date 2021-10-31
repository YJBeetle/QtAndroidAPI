#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::telephony
{
	class CarrierConfigManager_Gps : public __JniBaseClass
	{
	public:
		// Fields
		static jstring KEY_PERSIST_LPP_MODE_BOOL();
		static jstring KEY_PREFIX();
		
		// QJniObject forward
		template<typename ...Ts> explicit CarrierConfigManager_Gps(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CarrierConfigManager_Gps(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::telephony

