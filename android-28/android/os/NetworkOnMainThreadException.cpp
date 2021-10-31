#include "./NetworkOnMainThreadException.hpp"

namespace android::os
{
	// Fields
	
	// QJniObject forward
	NetworkOnMainThreadException::NetworkOnMainThreadException(QJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	NetworkOnMainThreadException::NetworkOnMainThreadException()
		: java::lang::RuntimeException(
			"android.os.NetworkOnMainThreadException",
			"()V"
		) {}
	
	// Methods
} // namespace android::os

