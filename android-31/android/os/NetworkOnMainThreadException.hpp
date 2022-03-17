#pragma once

#include "./NetworkOnMainThreadException.def.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	inline NetworkOnMainThreadException::NetworkOnMainThreadException()
		: java::lang::RuntimeException(
			"android.os.NetworkOnMainThreadException",
			"()V"
		) {}
	
	// Methods
} // namespace android::os

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"

