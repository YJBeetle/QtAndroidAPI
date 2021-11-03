#include "./CarrierConfigManager_Apn.hpp"

namespace android::telephony
{
	// Fields
	jstring CarrierConfigManager_Apn::KEY_PREFIX()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Apn",
			"KEY_PREFIX",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager_Apn::KEY_SETTINGS_DEFAULT_PROTOCOL_STRING()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Apn",
			"KEY_SETTINGS_DEFAULT_PROTOCOL_STRING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager_Apn::KEY_SETTINGS_DEFAULT_ROAMING_PROTOCOL_STRING()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Apn",
			"KEY_SETTINGS_DEFAULT_ROAMING_PROTOCOL_STRING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager_Apn::PROTOCOL_IPV4()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Apn",
			"PROTOCOL_IPV4",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager_Apn::PROTOCOL_IPV4V6()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Apn",
			"PROTOCOL_IPV4V6",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager_Apn::PROTOCOL_IPV6()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Apn",
			"PROTOCOL_IPV6",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	CarrierConfigManager_Apn::CarrierConfigManager_Apn(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::telephony

