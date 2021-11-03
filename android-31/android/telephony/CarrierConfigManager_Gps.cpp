#include "./CarrierConfigManager_Gps.hpp"

namespace android::telephony
{
	// Fields
	jstring CarrierConfigManager_Gps::KEY_PERSIST_LPP_MODE_BOOL()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Gps",
			"KEY_PERSIST_LPP_MODE_BOOL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring CarrierConfigManager_Gps::KEY_PREFIX()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Gps",
			"KEY_PREFIX",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	CarrierConfigManager_Gps::CarrierConfigManager_Gps(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::telephony

