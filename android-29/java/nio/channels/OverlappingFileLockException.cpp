#include "./OverlappingFileLockException.hpp"

namespace java::nio::channels
{
	// Fields
	
	OverlappingFileLockException::OverlappingFileLockException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	OverlappingFileLockException::OverlappingFileLockException()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.OverlappingFileLockException",
			"()V"
		);
	}
	
	// Methods
} // namespace java::nio::channels

