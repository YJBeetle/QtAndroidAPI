#include "./FileLockInterruptionException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QJniObject forward
	FileLockInterruptionException::FileLockInterruptionException(QJniObject obj) : java::io::IOException(obj) {}
	
	// Constructors
	FileLockInterruptionException::FileLockInterruptionException()
		: java::io::IOException(
			"java.nio.channels.FileLockInterruptionException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

