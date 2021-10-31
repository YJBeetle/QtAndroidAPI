#include "./MbmsErrors_GeneralErrors.hpp"

namespace android::telephony::mbms
{
	// Fields
	jint MbmsErrors_GeneralErrors::ERROR_CARRIER_CHANGE_NOT_ALLOWED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$GeneralErrors",
			"ERROR_CARRIER_CHANGE_NOT_ALLOWED"
		);
	}
	jint MbmsErrors_GeneralErrors::ERROR_IN_E911()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$GeneralErrors",
			"ERROR_IN_E911"
		);
	}
	jint MbmsErrors_GeneralErrors::ERROR_MIDDLEWARE_NOT_YET_READY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$GeneralErrors",
			"ERROR_MIDDLEWARE_NOT_YET_READY"
		);
	}
	jint MbmsErrors_GeneralErrors::ERROR_MIDDLEWARE_TEMPORARILY_UNAVAILABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$GeneralErrors",
			"ERROR_MIDDLEWARE_TEMPORARILY_UNAVAILABLE"
		);
	}
	jint MbmsErrors_GeneralErrors::ERROR_NOT_CONNECTED_TO_HOME_CARRIER_LTE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$GeneralErrors",
			"ERROR_NOT_CONNECTED_TO_HOME_CARRIER_LTE"
		);
	}
	jint MbmsErrors_GeneralErrors::ERROR_OUT_OF_MEMORY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$GeneralErrors",
			"ERROR_OUT_OF_MEMORY"
		);
	}
	jint MbmsErrors_GeneralErrors::ERROR_UNABLE_TO_READ_SIM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$GeneralErrors",
			"ERROR_UNABLE_TO_READ_SIM"
		);
	}
	
	// QAndroidJniObject forward
	MbmsErrors_GeneralErrors::MbmsErrors_GeneralErrors(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::telephony::mbms

