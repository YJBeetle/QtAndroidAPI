#pragma once

#include "./FormatterClosedException.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	inline FormatterClosedException::FormatterClosedException()
		: java::lang::IllegalStateException(
			"java.util.FormatterClosedException",
			"()V"
		) {}
	
	// Methods
} // namespace java::util

// Base class headers
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
#include "../lang/IllegalStateException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util;
#endif
