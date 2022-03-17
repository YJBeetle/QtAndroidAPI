#pragma once

#include "./TelephonyManager.def.hpp"
#include "./TelephonyManager_TimeoutException.def.hpp"

namespace android::telephony
{
	// Fields
	
	// Constructors
	
	// Methods
} // namespace android::telephony

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "./TelephonyManager_NetworkSlicingException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony;
#endif
