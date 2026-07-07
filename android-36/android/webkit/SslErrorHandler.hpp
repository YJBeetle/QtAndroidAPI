#pragma once

#include "./SslErrorHandler.def.hpp"

namespace android::webkit
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void SslErrorHandler::cancel() const
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	inline void SslErrorHandler::proceed() const
	{
		callMethod<void>(
			"proceed",
			"()V"
		);
	}
} // namespace android::webkit

// Base class headers
#include "../os/Handler.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::webkit;
#endif
