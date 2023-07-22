#pragma once

#include "../../JThrowable.hpp"
#include "./IOError.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	inline IOError::IOError(JThrowable arg0)
		: java::lang::Error(
			"java.io.IOError",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::io

// Base class headers
#include "../lang/Error.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::io;
#endif
