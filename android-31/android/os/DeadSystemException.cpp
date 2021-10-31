#include "./DeadSystemException.hpp"

namespace android::os
{
	// Fields
	
	// QAndroidJniObject forward
	DeadSystemException::DeadSystemException(QAndroidJniObject obj) : android::os::DeadObjectException(obj) {}
	
	// Constructors
	DeadSystemException::DeadSystemException()
		: android::os::DeadObjectException(
			"android.os.DeadSystemException",
			"()V"
		) {}
	
	// Methods
} // namespace android::os

