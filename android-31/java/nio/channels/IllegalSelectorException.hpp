#pragma once

#include "./IllegalSelectorException.def.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	inline IllegalSelectorException::IllegalSelectorException()
		: java::lang::IllegalArgumentException(
			"java.nio.channels.IllegalSelectorException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

// Base class headers
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalArgumentException.hpp"

