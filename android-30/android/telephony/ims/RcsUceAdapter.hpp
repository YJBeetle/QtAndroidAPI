#pragma once

#include "./RcsUceAdapter.def.hpp"

namespace android::telephony::ims
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean RcsUceAdapter::isUceSettingEnabled() const
	{
		return callMethod<jboolean>(
			"isUceSettingEnabled",
			"()Z"
		);
	}
} // namespace android::telephony::ims

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony::ims;
#endif
