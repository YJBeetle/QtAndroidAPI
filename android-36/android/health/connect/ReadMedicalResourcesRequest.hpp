#pragma once

#include "./ReadMedicalResourcesRequest.def.hpp"

namespace android::health::connect
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jint ReadMedicalResourcesRequest::getPageSize() const
	{
		return callMethod<jint>(
			"getPageSize",
			"()I"
		);
	}
} // namespace android::health::connect

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect;
#endif
