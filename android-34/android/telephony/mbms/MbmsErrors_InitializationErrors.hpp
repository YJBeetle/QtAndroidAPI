#pragma once

#include "./MbmsErrors_InitializationErrors.def.hpp"

namespace android::telephony::mbms
{
	// Fields
	inline jint MbmsErrors_InitializationErrors::ERROR_APP_PERMISSIONS_NOT_GRANTED()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$InitializationErrors",
			"ERROR_APP_PERMISSIONS_NOT_GRANTED"
		);
	}
	inline jint MbmsErrors_InitializationErrors::ERROR_DUPLICATE_INITIALIZE()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$InitializationErrors",
			"ERROR_DUPLICATE_INITIALIZE"
		);
	}
	inline jint MbmsErrors_InitializationErrors::ERROR_UNABLE_TO_INITIALIZE()
	{
		return getStaticField<jint>(
			"android.telephony.mbms.MbmsErrors$InitializationErrors",
			"ERROR_UNABLE_TO_INITIALIZE"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::telephony::mbms

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony::mbms;
#endif
