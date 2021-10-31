#include "./NetworkOnMainThreadException.hpp"

namespace android::os
{
	// Fields
	
	// QAndroidJniObject forward
	NetworkOnMainThreadException::NetworkOnMainThreadException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	NetworkOnMainThreadException::NetworkOnMainThreadException()
		: java::lang::RuntimeException(
			"android.os.NetworkOnMainThreadException",
			"()V"
		) {}
	
	// Methods
} // namespace android::os

