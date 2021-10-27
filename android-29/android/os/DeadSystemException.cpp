#include "./DeadSystemException.hpp"

namespace android::os
{
	// Fields
	
	DeadSystemException::DeadSystemException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DeadSystemException::DeadSystemException()
	{
		__thiz = QAndroidJniObject(
			"android.os.DeadSystemException",
			"()V"
		);
	}
	
	// Methods
} // namespace android::os

