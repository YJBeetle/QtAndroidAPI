#pragma once

#include "./OverlappingFileLockException.def.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	inline OverlappingFileLockException::OverlappingFileLockException()
		: java::lang::IllegalStateException(
			"java.nio.channels.OverlappingFileLockException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

// Base class headers
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalStateException.hpp"

