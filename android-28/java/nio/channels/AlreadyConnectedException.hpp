#pragma once

#include "./AlreadyConnectedException.def.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	inline AlreadyConnectedException::AlreadyConnectedException()
		: java::lang::IllegalStateException(
			"java.nio.channels.AlreadyConnectedException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

// Base class headers
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalStateException.hpp"

