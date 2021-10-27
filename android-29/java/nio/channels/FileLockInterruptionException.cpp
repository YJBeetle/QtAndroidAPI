#include "./FileLockInterruptionException.hpp"

namespace java::nio::channels
{
	// Fields
	
	FileLockInterruptionException::FileLockInterruptionException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	FileLockInterruptionException::FileLockInterruptionException()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.FileLockInterruptionException",
			"()V"
		);
	}
	
	// Methods
} // namespace java::nio::channels

