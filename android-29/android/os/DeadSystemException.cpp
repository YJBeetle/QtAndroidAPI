#include "./DeadSystemException.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	DeadSystemException::DeadSystemException()
		: android::os::DeadObjectException(
			"android.os.DeadSystemException",
			"()V"
		) {}
	
	// Methods
} // namespace android::os

