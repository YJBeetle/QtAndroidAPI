#pragma once

#include "./IllegalChannelGroupException.def.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	inline IllegalChannelGroupException::IllegalChannelGroupException()
		: java::lang::IllegalArgumentException(
			"java.nio.channels.IllegalChannelGroupException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

// Base class headers
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalArgumentException.hpp"

