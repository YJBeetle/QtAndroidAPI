#include "./MbmsErrors_StreamingErrors.hpp"

namespace android::telephony::mbms
{
	// Fields
	jint MbmsErrors_StreamingErrors::ERROR_CONCURRENT_SERVICE_LIMIT_REACHED()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$StreamingErrors",
			"ERROR_CONCURRENT_SERVICE_LIMIT_REACHED"
		);
	}
	jint MbmsErrors_StreamingErrors::ERROR_DUPLICATE_START_STREAM()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$StreamingErrors",
			"ERROR_DUPLICATE_START_STREAM"
		);
	}
	jint MbmsErrors_StreamingErrors::ERROR_UNABLE_TO_START_SERVICE()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$StreamingErrors",
			"ERROR_UNABLE_TO_START_SERVICE"
		);
	}
	
	// QJniObject forward
	MbmsErrors_StreamingErrors::MbmsErrors_StreamingErrors(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::telephony::mbms

