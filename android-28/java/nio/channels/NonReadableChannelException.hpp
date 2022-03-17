#pragma once

#include "./NonReadableChannelException.def.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	inline NonReadableChannelException::NonReadableChannelException()
		: java::lang::IllegalStateException(
			"java.nio.channels.NonReadableChannelException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

// Base class headers
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalStateException.hpp"

