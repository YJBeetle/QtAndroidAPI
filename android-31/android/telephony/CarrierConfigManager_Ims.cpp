#include "./CarrierConfigManager_Ims.hpp"

namespace android::telephony
{
	// Fields
	jstring CarrierConfigManager_Ims::KEY_ENABLE_PRESENCE_CAPABILITY_EXCHANGE_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_ENABLE_PRESENCE_CAPABILITY_EXCHANGE_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager_Ims::KEY_ENABLE_PRESENCE_GROUP_SUBSCRIBE_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_ENABLE_PRESENCE_GROUP_SUBSCRIBE_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager_Ims::KEY_ENABLE_PRESENCE_PUBLISH_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_ENABLE_PRESENCE_PUBLISH_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager_Ims::KEY_IMS_SINGLE_REGISTRATION_REQUIRED_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_IMS_SINGLE_REGISTRATION_REQUIRED_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager_Ims::KEY_NON_RCS_CAPABILITIES_CACHE_EXPIRATION_SEC_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_NON_RCS_CAPABILITIES_CACHE_EXPIRATION_SEC_INT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager_Ims::KEY_PREFIX()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_PREFIX",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager_Ims::KEY_RCS_BULK_CAPABILITY_EXCHANGE_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_RCS_BULK_CAPABILITY_EXCHANGE_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager_Ims::KEY_RCS_FEATURE_TAG_ALLOWED_STRING_ARRAY()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_RCS_FEATURE_TAG_ALLOWED_STRING_ARRAY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager_Ims::KEY_WIFI_OFF_DEFERRING_TIME_MILLIS_INT()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_WIFI_OFF_DEFERRING_TIME_MILLIS_INT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	CarrierConfigManager_Ims::CarrierConfigManager_Ims(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::telephony

