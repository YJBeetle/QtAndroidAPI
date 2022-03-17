#pragma once

#include "./PorterDuff.def.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	inline PorterDuff::PorterDuff()
		: JObject(
			"android.graphics.PorterDuff",
			"()V"
		) {}
	
	// Methods
} // namespace android::graphics

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics;
#endif
