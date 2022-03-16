#pragma once

#include "./IllegalBlockingModeException.def.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	inline IllegalBlockingModeException::IllegalBlockingModeException()
		: java::lang::IllegalStateException(
			"java.nio.channels.IllegalBlockingModeException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

// Base class headers
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalStateException.hpp"

