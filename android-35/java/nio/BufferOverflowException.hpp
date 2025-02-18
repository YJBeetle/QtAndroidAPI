#pragma once

#include "./BufferOverflowException.def.hpp"

namespace java::nio
{
	// Fields
	
	// Constructors
	inline BufferOverflowException::BufferOverflowException()
		: java::lang::RuntimeException(
			"java.nio.BufferOverflowException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio

// Base class headers
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::nio;
#endif
