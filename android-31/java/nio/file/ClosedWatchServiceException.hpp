#pragma once

#include "./ClosedWatchServiceException.def.hpp"

namespace java::nio::file
{
	// Fields
	
	// Constructors
	inline ClosedWatchServiceException::ClosedWatchServiceException()
		: java::lang::IllegalStateException(
			"java.nio.file.ClosedWatchServiceException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::file

// Base class headers
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalStateException.hpp"

