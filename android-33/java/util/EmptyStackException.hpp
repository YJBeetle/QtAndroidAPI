#pragma once

#include "./EmptyStackException.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	inline EmptyStackException::EmptyStackException()
		: java::lang::RuntimeException(
			"java.util.EmptyStackException",
			"()V"
		) {}
	
	// Methods
} // namespace java::util

// Base class headers
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util;
#endif
