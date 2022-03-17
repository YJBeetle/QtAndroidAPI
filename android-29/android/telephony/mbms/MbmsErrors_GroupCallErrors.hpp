#pragma once

#include "./MbmsErrors_GroupCallErrors.def.hpp"

namespace android::telephony::mbms
{
	// Fields
	inline jint MbmsErrors_GroupCallErrors::ERROR_DUPLICATE_START_GROUP_CALL()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$GroupCallErrors",
			"ERROR_DUPLICATE_START_GROUP_CALL"
		);
	}
	inline jint MbmsErrors_GroupCallErrors::ERROR_UNABLE_TO_START_SERVICE()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$GroupCallErrors",
			"ERROR_UNABLE_TO_START_SERVICE"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::telephony::mbms

// Base class headers

