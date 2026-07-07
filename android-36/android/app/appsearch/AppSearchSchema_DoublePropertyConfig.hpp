#pragma once

#include "./AppSearchSchema_DoublePropertyConfig.def.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean AppSearchSchema_DoublePropertyConfig::isScoringEnabled() const
	{
		return callMethod<jboolean>(
			"isScoringEnabled",
			"()Z"
		);
	}
} // namespace android::app::appsearch

// Base class headers
#include "./AppSearchSchema_PropertyConfig.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::appsearch;
#endif
