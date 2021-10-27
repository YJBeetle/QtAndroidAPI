#include "./NetworkOnMainThreadException.hpp"

namespace android::os
{
	// Fields
	
	NetworkOnMainThreadException::NetworkOnMainThreadException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	NetworkOnMainThreadException::NetworkOnMainThreadException()
	{
		__thiz = QAndroidJniObject(
			"android.os.NetworkOnMainThreadException",
			"()V"
		);
	}
	
	// Methods
} // namespace android::os

