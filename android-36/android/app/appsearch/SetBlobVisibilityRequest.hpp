#pragma once

#include "./SetBlobVisibilityRequest.def.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject SetBlobVisibilityRequest::getNamespacesNotDisplayedBySystem() const
	{
		return callObjectMethod(
			"getNamespacesNotDisplayedBySystem",
			"()Ljava/util/Set;"
		);
	}
	inline JObject SetBlobVisibilityRequest::getNamespacesVisibleToConfigs() const
	{
		return callObjectMethod(
			"getNamespacesVisibleToConfigs",
			"()Ljava/util/Map;"
		);
	}
} // namespace android::app::appsearch

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::appsearch;
#endif
