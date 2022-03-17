#pragma once

#include "./ReadOnlyFileSystemException.def.hpp"

namespace java::nio::file
{
	// Fields
	
	// Constructors
	inline ReadOnlyFileSystemException::ReadOnlyFileSystemException()
		: java::lang::UnsupportedOperationException(
			"java.nio.file.ReadOnlyFileSystemException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::file

// Base class headers
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/UnsupportedOperationException.hpp"

