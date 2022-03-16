#include "./ClosedWatchServiceException.hpp"

namespace java::nio::file
{
	// Fields
	
	// Constructors
	ClosedWatchServiceException::ClosedWatchServiceException()
		: java::lang::IllegalStateException(
			"java.nio.file.ClosedWatchServiceException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::file

