#include "./MbmsErrors_GroupCallErrors.hpp"

namespace android::telephony::mbms
{
	// Fields
	jint MbmsErrors_GroupCallErrors::ERROR_DUPLICATE_START_GROUP_CALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$GroupCallErrors",
			"ERROR_DUPLICATE_START_GROUP_CALL"
		);
	}
	jint MbmsErrors_GroupCallErrors::ERROR_UNABLE_TO_START_SERVICE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$GroupCallErrors",
			"ERROR_UNABLE_TO_START_SERVICE"
		);
	}
	
	MbmsErrors_GroupCallErrors::MbmsErrors_GroupCallErrors(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace android::telephony::mbms

