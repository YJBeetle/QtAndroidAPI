#pragma once

#include "./InsertRecordsResponse.def.hpp"

namespace android::health::connect
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject InsertRecordsResponse::getRecords() const
	{
		return callObjectMethod(
			"getRecords",
			"()Ljava/util/List;"
		);
	}
} // namespace android::health::connect

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect;
#endif
