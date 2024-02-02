#pragma once

#include "../../../JClass.hpp"
#include "./ReadRecordsRequest.def.hpp"

namespace android::health::connect
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JClass ReadRecordsRequest::getRecordType() const
	{
		return callObjectMethod(
			"getRecordType",
			"()Ljava/lang/Class;"
		);
	}
} // namespace android::health::connect

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect;
#endif
