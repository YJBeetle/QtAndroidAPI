#include "./AccessNetworkConstants_AccessNetworkType.hpp"

namespace android::telephony
{
	// Fields
	jint AccessNetworkConstants_AccessNetworkType::CDMA2000()
	{
		return getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$AccessNetworkType",
			"CDMA2000"
		);
	}
	jint AccessNetworkConstants_AccessNetworkType::EUTRAN()
	{
		return getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$AccessNetworkType",
			"EUTRAN"
		);
	}
	jint AccessNetworkConstants_AccessNetworkType::GERAN()
	{
		return getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$AccessNetworkType",
			"GERAN"
		);
	}
	jint AccessNetworkConstants_AccessNetworkType::IWLAN()
	{
		return getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$AccessNetworkType",
			"IWLAN"
		);
	}
	jint AccessNetworkConstants_AccessNetworkType::UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$AccessNetworkType",
			"UNKNOWN"
		);
	}
	jint AccessNetworkConstants_AccessNetworkType::UTRAN()
	{
		return getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$AccessNetworkType",
			"UTRAN"
		);
	}
	
	// QAndroidJniObject forward
	AccessNetworkConstants_AccessNetworkType::AccessNetworkConstants_AccessNetworkType(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::telephony

