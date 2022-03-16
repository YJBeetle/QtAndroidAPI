#include "./OverlappingFileLockException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	OverlappingFileLockException::OverlappingFileLockException()
		: java::lang::IllegalStateException(
			"java.nio.channels.OverlappingFileLockException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

