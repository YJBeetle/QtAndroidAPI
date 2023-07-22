#pragma once

#include "./InvalidMarkException.def.hpp"

namespace java::nio
{
	// Fields
	
	// Constructors
	inline InvalidMarkException::InvalidMarkException()
		: java::lang::IllegalStateException(
			"java.nio.InvalidMarkException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio

// Base class headers
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
#include "../lang/IllegalStateException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::nio;
#endif
