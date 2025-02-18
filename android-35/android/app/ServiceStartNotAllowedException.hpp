#pragma once

#include "../../JThrowable.hpp"
#include "./ServiceStartNotAllowedException.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JThrowable ServiceStartNotAllowedException::getCause() const
	{
		return callObjectMethod(
			"getCause",
			"()Ljava/lang/Throwable;"
		);
	}
} // namespace android::app

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"
#include "../../java/lang/IllegalStateException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
