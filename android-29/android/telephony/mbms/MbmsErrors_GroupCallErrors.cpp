#include "./MbmsErrors_GroupCallErrors.hpp"

namespace android::telephony::mbms
{
	// Fields
	jint MbmsErrors_GroupCallErrors::ERROR_DUPLICATE_START_GROUP_CALL()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$GroupCallErrors",
			"ERROR_DUPLICATE_START_GROUP_CALL"
		);
	}
	jint MbmsErrors_GroupCallErrors::ERROR_UNABLE_TO_START_SERVICE()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$GroupCallErrors",
			"ERROR_UNABLE_TO_START_SERVICE"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::telephony::mbms

