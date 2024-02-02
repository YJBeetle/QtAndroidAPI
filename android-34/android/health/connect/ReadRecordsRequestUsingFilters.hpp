#pragma once

#include "./ReadRecordsRequestUsingFilters.def.hpp"

namespace android::health::connect
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject ReadRecordsRequestUsingFilters::getDataOrigins() const
	{
		return callObjectMethod(
			"getDataOrigins",
			"()Ljava/util/Set;"
		);
	}
	inline jint ReadRecordsRequestUsingFilters::getPageSize() const
	{
		return callMethod<jint>(
			"getPageSize",
			"()I"
		);
	}
	inline jlong ReadRecordsRequestUsingFilters::getPageToken() const
	{
		return callMethod<jlong>(
			"getPageToken",
			"()J"
		);
	}
	inline JObject ReadRecordsRequestUsingFilters::getTimeRangeFilter() const
	{
		return callObjectMethod(
			"getTimeRangeFilter",
			"()Landroid/health/connect/TimeRangeFilter;"
		);
	}
	inline jboolean ReadRecordsRequestUsingFilters::isAscending() const
	{
		return callMethod<jboolean>(
			"isAscending",
			"()Z"
		);
	}
} // namespace android::health::connect

// Base class headers
#include "./ReadRecordsRequest.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect;
#endif
