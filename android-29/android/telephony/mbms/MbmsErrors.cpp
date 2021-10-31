#include "./MbmsErrors.hpp"

namespace android::telephony::mbms
{
	// Fields
	jint MbmsErrors::ERROR_MIDDLEWARE_LOST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors",
			"ERROR_MIDDLEWARE_LOST"
		);
	}
	jint MbmsErrors::ERROR_MIDDLEWARE_NOT_BOUND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors",
			"ERROR_MIDDLEWARE_NOT_BOUND"
		);
	}
	jint MbmsErrors::ERROR_NO_UNIQUE_MIDDLEWARE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors",
			"ERROR_NO_UNIQUE_MIDDLEWARE"
		);
	}
	jint MbmsErrors::SUCCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors",
			"SUCCESS"
		);
	}
	jint MbmsErrors::UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors",
			"UNKNOWN"
		);
	}
	
	// QAndroidJniObject forward
	MbmsErrors::MbmsErrors(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::telephony::mbms

