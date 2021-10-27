#include "./ClosedWatchServiceException.hpp"

namespace java::nio::file
{
	// Fields
	
	ClosedWatchServiceException::ClosedWatchServiceException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ClosedWatchServiceException::ClosedWatchServiceException()
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.ClosedWatchServiceException",
			"()V"
		);
	}
	
	// Methods
} // namespace java::nio::file

