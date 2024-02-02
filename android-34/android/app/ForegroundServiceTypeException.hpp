#pragma once

#include "../../JString.hpp"
#include "./ForegroundServiceTypeException.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline ForegroundServiceTypeException::ForegroundServiceTypeException(JString arg0)
		: android::app::ServiceStartNotAllowedException(
			"android.app.ForegroundServiceTypeException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::app

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"
#include "../../java/lang/IllegalStateException.hpp"
#include "./ServiceStartNotAllowedException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
