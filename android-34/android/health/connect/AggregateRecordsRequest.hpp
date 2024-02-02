#pragma once

#include "./AggregateRecordsRequest.def.hpp"

namespace android::health::connect
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject AggregateRecordsRequest::getAggregationTypes() const
	{
		return callObjectMethod(
			"getAggregationTypes",
			"()Ljava/util/Set;"
		);
	}
	inline JObject AggregateRecordsRequest::getDataOriginsFilters() const
	{
		return callObjectMethod(
			"getDataOriginsFilters",
			"()Ljava/util/Set;"
		);
	}
	inline JObject AggregateRecordsRequest::getTimeRangeFilter() const
	{
		return callObjectMethod(
			"getTimeRangeFilter",
			"()Landroid/health/connect/TimeRangeFilter;"
		);
	}
} // namespace android::health::connect

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect;
#endif
