#pragma once

#include "../../../JString.hpp"
#include "./AppSearchManager_SearchContext.def.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JString AppSearchManager_SearchContext::getDatabaseName() const
	{
		return callObjectMethod(
			"getDatabaseName",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::app::appsearch

// Base class headers

