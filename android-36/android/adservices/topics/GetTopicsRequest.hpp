#pragma once

#include "../../../JString.hpp"
#include "./GetTopicsRequest.def.hpp"

namespace android::adservices::topics
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JString GetTopicsRequest::getAdsSdkName() const
	{
		return callObjectMethod(
			"getAdsSdkName",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean GetTopicsRequest::shouldRecordObservation() const
	{
		return callMethod<jboolean>(
			"shouldRecordObservation",
			"()Z"
		);
	}
} // namespace android::adservices::topics

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::topics;
#endif
