#include "./MbmsErrors.hpp"

namespace android::telephony::mbms
{
	// Fields
	jint MbmsErrors::ERROR_MIDDLEWARE_LOST()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors",
			"ERROR_MIDDLEWARE_LOST"
		);
	}
	jint MbmsErrors::ERROR_MIDDLEWARE_NOT_BOUND()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors",
			"ERROR_MIDDLEWARE_NOT_BOUND"
		);
	}
	jint MbmsErrors::ERROR_NO_UNIQUE_MIDDLEWARE()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors",
			"ERROR_NO_UNIQUE_MIDDLEWARE"
		);
	}
	jint MbmsErrors::SUCCESS()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors",
			"SUCCESS"
		);
	}
	jint MbmsErrors::UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors",
			"UNKNOWN"
		);
	}
	
	// QJniObject forward
	MbmsErrors::MbmsErrors(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::telephony::mbms

