#pragma once

#include "./ReadRecordsRequestUsingIds.def.hpp"

namespace android::health::connect
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject ReadRecordsRequestUsingIds::getRecordIdFilters() const
	{
		return callObjectMethod(
			"getRecordIdFilters",
			"()Ljava/util/List;"
		);
	}
} // namespace android::health::connect

// Base class headers
#include "./ReadRecordsRequest.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect;
#endif
