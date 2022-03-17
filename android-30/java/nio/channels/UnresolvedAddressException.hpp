#pragma once

#include "./UnresolvedAddressException.def.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	inline UnresolvedAddressException::UnresolvedAddressException()
		: java::lang::IllegalArgumentException(
			"java.nio.channels.UnresolvedAddressException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

// Base class headers
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalArgumentException.hpp"

