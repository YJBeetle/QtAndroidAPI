#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::telephony
{
	class CarrierConfigManager_Ims : public __JniBaseClass
	{
	public:
		// Fields
		static jstring KEY_ENABLE_PRESENCE_CAPABILITY_EXCHANGE_BOOL();
		static jstring KEY_ENABLE_PRESENCE_GROUP_SUBSCRIBE_BOOL();
		static jstring KEY_ENABLE_PRESENCE_PUBLISH_BOOL();
		static jstring KEY_IMS_SINGLE_REGISTRATION_REQUIRED_BOOL();
		static jstring KEY_NON_RCS_CAPABILITIES_CACHE_EXPIRATION_SEC_INT();
		static jstring KEY_PREFIX();
		static jstring KEY_RCS_BULK_CAPABILITY_EXCHANGE_BOOL();
		static jstring KEY_RCS_FEATURE_TAG_ALLOWED_STRING_ARRAY();
		static jstring KEY_WIFI_OFF_DEFERRING_TIME_MILLIS_INT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CarrierConfigManager_Ims(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CarrierConfigManager_Ims(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::telephony

