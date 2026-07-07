#pragma once

#include "./FileLockInterruptionException.def.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	inline FileLockInterruptionException::FileLockInterruptionException()
		: java::io::IOException(
			"java.nio.channels.FileLockInterruptionException",
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
