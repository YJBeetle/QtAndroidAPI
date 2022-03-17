#pragma once

#include "./AsynchronousCloseException.def.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	inline AsynchronousCloseException::AsynchronousCloseException()
		: java::nio::channels::ClosedChannelException(
			"java.nio.channels.AsynchronousCloseException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

// Base class headers
#include "../../lang/Exception.hpp"
#include "../../io/IOException.hpp"
#include "./ClosedChannelException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::nio::channels;
#endif
