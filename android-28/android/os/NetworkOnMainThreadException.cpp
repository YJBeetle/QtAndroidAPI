#include "./NetworkOnMainThreadException.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	NetworkOnMainThreadException::NetworkOnMainThreadException()
		: java::lang::RuntimeException(
			"android.os.NetworkOnMainThreadException",
			"()V"
		) {}
	
	// Methods
} // namespace android::os

