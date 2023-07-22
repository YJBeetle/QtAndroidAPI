#pragma once

#include "./ShutdownChannelGroupException.def.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	inline ShutdownChannelGroupException::ShutdownChannelGroupException()
		: java::lang::IllegalStateException(
			"java.nio.channels.ShutdownChannelGroupException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

// Base class headers
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalStateException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::nio::channels;
#endif
