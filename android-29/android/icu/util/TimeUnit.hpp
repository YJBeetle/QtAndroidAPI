#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./TimeUnit.def.hpp"

namespace android::icu::util
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JArray TimeUnit::values()
	{
		return callStaticObjectMethod(
			"android.icu.util.TimeUnit",
			"values",
			"()[Landroid/icu/util/TimeUnit;"
		);
	}
} // namespace android::icu::util

// Base class headers
#include "./MeasureUnit.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::util;
#endif
