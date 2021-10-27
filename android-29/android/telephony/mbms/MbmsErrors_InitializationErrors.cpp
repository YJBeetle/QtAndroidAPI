#include "./MbmsErrors_InitializationErrors.hpp"

namespace android::telephony::mbms
{
	// Fields
	jint MbmsErrors_InitializationErrors::ERROR_APP_PERMISSIONS_NOT_GRANTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$InitializationErrors",
			"ERROR_APP_PERMISSIONS_NOT_GRANTED"
		);
	}
	jint MbmsErrors_InitializationErrors::ERROR_DUPLICATE_INITIALIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$InitializationErrors",
			"ERROR_DUPLICATE_INITIALIZE"
		);
	}
	jint MbmsErrors_InitializationErrors::ERROR_UNABLE_TO_INITIALIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$InitializationErrors",
			"ERROR_UNABLE_TO_INITIALIZE"
		);
	}
	
	MbmsErrors_InitializationErrors::MbmsErrors_InitializationErrors(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace android::telephony::mbms

