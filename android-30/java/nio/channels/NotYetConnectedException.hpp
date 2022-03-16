#pragma once

#include "./NotYetConnectedException.def.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	inline NotYetConnectedException::NotYetConnectedException()
		: java::lang::IllegalStateException(
			"java.nio.channels.NotYetConnectedException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

// Base class headers
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalStateException.hpp"

