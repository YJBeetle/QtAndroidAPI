#pragma once

#include "../../../JString.hpp"
#include "./AppSearchBatchResult.def.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject AppSearchBatchResult::getAll() const
	{
		return callObjectMethod(
			"getAll",
			"()Ljava/util/Map;"
		);
	}
	inline JObject AppSearchBatchResult::getFailures() const
	{
		return callObjectMethod(
			"getFailures",
			"()Ljava/util/Map;"
		);
	}
	inline JObject AppSearchBatchResult::getSuccesses() const
	{
		return callObjectMethod(
			"getSuccesses",
			"()Ljava/util/Map;"
		);
	}
	inline jboolean AppSearchBatchResult::isSuccess() const
	{
		return callMethod<jboolean>(
			"isSuccess",
			"()Z"
		);
	}
	inline JString AppSearchBatchResult::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::app::appsearch

// Base class headers

