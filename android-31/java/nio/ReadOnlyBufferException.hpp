#pragma once

#include "./ReadOnlyBufferException.def.hpp"

namespace java::nio
{
	// Fields
	
	// Constructors
	inline ReadOnlyBufferException::ReadOnlyBufferException()
		: java::lang::UnsupportedOperationException(
			"java.nio.ReadOnlyBufferException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio

// Base class headers
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
#include "../lang/UnsupportedOperationException.hpp"

