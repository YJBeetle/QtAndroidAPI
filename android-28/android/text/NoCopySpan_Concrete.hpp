#pragma once

#include "./NoCopySpan_Concrete.def.hpp"

namespace android::text
{
	// Fields
	
	// Constructors
	inline NoCopySpan_Concrete::NoCopySpan_Concrete()
		: JObject(
			"android.text.NoCopySpan$Concrete",
			"()V"
		) {}
	
	// Methods
} // namespace android::text

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::text;
#endif
