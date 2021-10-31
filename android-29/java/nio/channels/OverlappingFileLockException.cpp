#include "./OverlappingFileLockException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QAndroidJniObject forward
	OverlappingFileLockException::OverlappingFileLockException(QAndroidJniObject obj) : java::lang::IllegalStateException(obj) {}
	
	// Constructors
	OverlappingFileLockException::OverlappingFileLockException()
		: java::lang::IllegalStateException(
			"java.nio.channels.OverlappingFileLockException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

