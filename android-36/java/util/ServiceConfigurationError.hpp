#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./ServiceConfigurationError.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	inline ServiceConfigurationError::ServiceConfigurationError(JString arg0)
		: java::lang::Error(
			"java.util.ServiceConfigurationError",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline ServiceConfigurationError::ServiceConfigurationError(JString arg0, JThrowable arg1)
		: java::lang::Error(
			"java.util.ServiceConfigurationError",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::util

// Base class headers
#include "../lang/Error.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util;
#endif
