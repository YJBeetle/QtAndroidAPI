#pragma once

#include "./WritePendingException.def.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	inline WritePendingException::WritePendingException()
		: java::lang::IllegalStateException(
			"java.nio.channels.WritePendingException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

// Base class headers
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalStateException.hpp"

