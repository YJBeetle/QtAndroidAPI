#pragma once

#include "./MediaRouter2_ScanRequest.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean MediaRouter2_ScanRequest::isScreenOffScan() const
	{
		return callMethod<jboolean>(
			"isScreenOffScan",
			"()Z"
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
