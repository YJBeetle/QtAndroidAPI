#pragma once

#include "./ClosedChannelException.def.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	inline ClosedChannelException::ClosedChannelException()
		: java::io::IOException(
			"java.nio.channels.ClosedChannelException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

// Base class headers
#include "../../lang/Exception.hpp"
#include "../../io/IOException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::nio::channels;
#endif
