#pragma once

#include "./InterruptedByTimeoutException.def.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	inline InterruptedByTimeoutException::InterruptedByTimeoutException()
		: java::io::IOException(
			"java.nio.channels.InterruptedByTimeoutException",
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
