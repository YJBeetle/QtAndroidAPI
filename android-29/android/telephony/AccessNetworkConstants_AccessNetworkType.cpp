#include "./AccessNetworkConstants_AccessNetworkType.hpp"

namespace android::telephony
{
	// Fields
	jint AccessNetworkConstants_AccessNetworkType::CDMA2000()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$AccessNetworkType",
			"CDMA2000"
		);
	}
	jint AccessNetworkConstants_AccessNetworkType::EUTRAN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$AccessNetworkType",
			"EUTRAN"
		);
	}
	jint AccessNetworkConstants_AccessNetworkType::GERAN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$AccessNetworkType",
			"GERAN"
		);
	}
	jint AccessNetworkConstants_AccessNetworkType::IWLAN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$AccessNetworkType",
			"IWLAN"
		);
	}
	jint AccessNetworkConstants_AccessNetworkType::UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$AccessNetworkType",
			"UNKNOWN"
		);
	}
	jint AccessNetworkConstants_AccessNetworkType::UTRAN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.AccessNetworkConstants$AccessNetworkType",
			"UTRAN"
		);
	}
	
	AccessNetworkConstants_AccessNetworkType::AccessNetworkConstants_AccessNetworkType(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace android::telephony

