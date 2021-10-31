#include "./FileLockInterruptionException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QAndroidJniObject forward
	FileLockInterruptionException::FileLockInterruptionException(QAndroidJniObject obj) : java::io::IOException(obj) {}
	
	// Constructors
	FileLockInterruptionException::FileLockInterruptionException()
		: java::io::IOException(
			"java.nio.channels.FileLockInterruptionException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

