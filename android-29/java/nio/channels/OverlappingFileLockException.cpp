#include "./OverlappingFileLockException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QJniObject forward
	OverlappingFileLockException::OverlappingFileLockException(QJniObject obj) : java::lang::IllegalStateException(obj) {}
	
	// Constructors
	OverlappingFileLockException::OverlappingFileLockException()
		: java::lang::IllegalStateException(
			"java.nio.channels.OverlappingFileLockException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

