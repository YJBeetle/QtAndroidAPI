#pragma once

#include "./MbmsErrors_StreamingErrors.def.hpp"

namespace android::telephony::mbms
{
	// Fields
	inline jint MbmsErrors_StreamingErrors::ERROR_CONCURRENT_SERVICE_LIMIT_REACHED()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$StreamingErrors",
			"ERROR_CONCURRENT_SERVICE_LIMIT_REACHED"
		);
	}
	inline jint MbmsErrors_StreamingErrors::ERROR_DUPLICATE_START_STREAM()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$StreamingErrors",
			"ERROR_DUPLICATE_START_STREAM"
		);
	}
	inline jint MbmsErrors_StreamingErrors::ERROR_UNABLE_TO_START_SERVICE()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$StreamingErrors",
			"ERROR_UNABLE_TO_START_SERVICE"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::telephony::mbms

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony::mbms;
#endif
