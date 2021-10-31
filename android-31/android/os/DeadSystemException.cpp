#include "./DeadSystemException.hpp"

namespace android::os
{
	// Fields
	
	// QJniObject forward
	DeadSystemException::DeadSystemException(QJniObject obj) : android::os::DeadObjectException(obj) {}
	
	// Constructors
	DeadSystemException::DeadSystemException()
		: android::os::DeadObjectException(
			"android.os.DeadSystemException",
			"()V"
		) {}
	
	// Methods
} // namespace android::os

