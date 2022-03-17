#pragma once

#include "./ClosedDirectoryStreamException.def.hpp"

namespace java::nio::file
{
	// Fields
	
	// Constructors
	inline ClosedDirectoryStreamException::ClosedDirectoryStreamException()
		: java::lang::IllegalStateException(
			"java.nio.file.ClosedDirectoryStreamException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::file

// Base class headers
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalStateException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::nio::file;
#endif
