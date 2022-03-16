#pragma once

#include "./NotYetBoundException.def.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	inline NotYetBoundException::NotYetBoundException()
		: java::lang::IllegalStateException(
			"java.nio.channels.NotYetBoundException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

// Base class headers
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalStateException.hpp"

