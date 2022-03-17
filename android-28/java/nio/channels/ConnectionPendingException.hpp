#pragma once

#include "./ConnectionPendingException.def.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	inline ConnectionPendingException::ConnectionPendingException()
		: java::lang::IllegalStateException(
			"java.nio.channels.ConnectionPendingException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

// Base class headers
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalStateException.hpp"

