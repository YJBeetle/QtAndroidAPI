#include "./CarrierConfigManager_Ims.hpp"

namespace android::telephony
{
	// Fields
	jstring CarrierConfigManager_Ims::KEY_PREFIX()
	{
		return getStaticObjectField(
			"android.telephony.CarrierConfigManager$Ims",
			"KEY_PREFIX",
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
	CarrierConfigManager_Ims::CarrierConfigManager_Ims(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::telephony

