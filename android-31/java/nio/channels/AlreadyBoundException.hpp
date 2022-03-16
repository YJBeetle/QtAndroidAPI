#pragma once

#include "./AlreadyBoundException.def.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	inline AlreadyBoundException::AlreadyBoundException()
		: java::lang::IllegalStateException(
			"java.nio.channels.AlreadyBoundException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

// Base class headers
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalStateException.hpp"

