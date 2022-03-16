#pragma once

#include "./ClosedFileSystemException.def.hpp"

namespace java::nio::file
{
	// Fields
	
	// Constructors
	inline ClosedFileSystemException::ClosedFileSystemException()
		: java::lang::IllegalStateException(
			"java.nio.file.ClosedFileSystemException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::file

// Base class headers
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalStateException.hpp"

