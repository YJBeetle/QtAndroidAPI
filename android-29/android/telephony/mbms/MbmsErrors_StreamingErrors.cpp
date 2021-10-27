#include "./MbmsErrors_StreamingErrors.hpp"

namespace android::telephony::mbms
{
	// Fields
	jint MbmsErrors_StreamingErrors::ERROR_CONCURRENT_SERVICE_LIMIT_REACHED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$StreamingErrors",
			"ERROR_CONCURRENT_SERVICE_LIMIT_REACHED"
		);
	}
	jint MbmsErrors_StreamingErrors::ERROR_DUPLICATE_START_STREAM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$StreamingErrors",
			"ERROR_DUPLICATE_START_STREAM"
		);
	}
	jint MbmsErrors_StreamingErrors::ERROR_UNABLE_TO_START_SERVICE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$StreamingErrors",
			"ERROR_UNABLE_TO_START_SERVICE"
		);
	}
	
	MbmsErrors_StreamingErrors::MbmsErrors_StreamingErrors(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace android::telephony::mbms

