#pragma once

#include "./MbmsErrors.def.hpp"

namespace android::telephony::mbms
{
	// Fields
	inline jint MbmsErrors::ERROR_MIDDLEWARE_LOST()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors",
			"ERROR_MIDDLEWARE_LOST"
		);
	}
	inline jint MbmsErrors::ERROR_MIDDLEWARE_NOT_BOUND()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors",
			"ERROR_MIDDLEWARE_NOT_BOUND"
		);
	}
	inline jint MbmsErrors::ERROR_NO_UNIQUE_MIDDLEWARE()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors",
			"ERROR_NO_UNIQUE_MIDDLEWARE"
		);
	}
	inline jint MbmsErrors::SUCCESS()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors",
			"SUCCESS"
		);
	}
	inline jint MbmsErrors::UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors",
			"UNKNOWN"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::telephony::mbms

// Base class headers

