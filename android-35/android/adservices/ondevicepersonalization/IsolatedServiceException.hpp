#pragma once

#include "./IsolatedServiceException.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	// Fields
	
	// Constructors
	inline IsolatedServiceException::IsolatedServiceException(jint arg0)
		: java::lang::Exception(
			"android.adservices.ondevicepersonalization.IsolatedServiceException",
			"(I)V",
			arg0
		) {}
	
	// Methods
} // namespace android::adservices::ondevicepersonalization

// Base class headers
#include "../../../java/lang/Exception.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::ondevicepersonalization;
#endif
