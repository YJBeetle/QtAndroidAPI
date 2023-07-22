#pragma once

#include "./ReadPendingException.def.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	inline ReadPendingException::ReadPendingException()
		: java::lang::IllegalStateException(
			"java.nio.channels.ReadPendingException",
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
