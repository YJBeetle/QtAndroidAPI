#include "./InterruptedByTimeoutException.hpp"

namespace java::nio::channels
{
	// Fields
	
	InterruptedByTimeoutException::InterruptedByTimeoutException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	InterruptedByTimeoutException::InterruptedByTimeoutException()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.InterruptedByTimeoutException",
			"()V"
		);
	}
	
	// Methods
} // namespace java::nio::channels

