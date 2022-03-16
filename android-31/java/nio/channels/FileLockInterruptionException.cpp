#include "./FileLockInterruptionException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	FileLockInterruptionException::FileLockInterruptionException()
		: java::io::IOException(
			"java.nio.channels.FileLockInterruptionException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

