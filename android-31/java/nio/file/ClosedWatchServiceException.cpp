#include "./ClosedWatchServiceException.hpp"

namespace java::nio::file
{
	// Fields
	
	// QAndroidJniObject forward
	ClosedWatchServiceException::ClosedWatchServiceException(QAndroidJniObject obj) : java::lang::IllegalStateException(obj) {}
	
	// Constructors
	ClosedWatchServiceException::ClosedWatchServiceException()
		: java::lang::IllegalStateException(
			"java.nio.file.ClosedWatchServiceException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::file

