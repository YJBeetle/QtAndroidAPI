#pragma once

#include "./UnsupportedAddressTypeException.def.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	inline UnsupportedAddressTypeException::UnsupportedAddressTypeException()
		: java::lang::IllegalArgumentException(
			"java.nio.channels.UnsupportedAddressTypeException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

// Base class headers
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalArgumentException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::nio::channels;
#endif
