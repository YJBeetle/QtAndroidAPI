#pragma once

#include "./AdServicesState.def.hpp"

namespace android::adservices
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean AdServicesState::isAdServicesStateEnabled()
	{
		return callStaticMethod<jboolean>(
			"android.adservices.AdServicesState",
			"isAdServicesStateEnabled",
			"()Z"
		);
	}
} // namespace android::adservices

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices;
#endif
