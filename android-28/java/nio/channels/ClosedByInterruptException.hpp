#pragma once

#include "./ClosedByInterruptException.def.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	inline ClosedByInterruptException::ClosedByInterruptException()
		: java::nio::channels::AsynchronousCloseException(
			"java.nio.channels.ClosedByInterruptException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

// Base class headers
#include "../../lang/Exception.hpp"
#include "../../io/IOException.hpp"
#include "./ClosedChannelException.hpp"
#include "./AsynchronousCloseException.hpp"

