#pragma once

#include "./AdServicesVersion.def.hpp"

namespace android::adservices
{
	// Fields
	inline jint AdServicesVersion::API_VERSION()
	{
		return getStaticField<jint>(
			"android.adservices.AdServicesVersion",
			"API_VERSION"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::adservices

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices;
#endif
