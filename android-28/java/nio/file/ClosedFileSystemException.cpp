#include "./ClosedFileSystemException.hpp"

namespace java::nio::file
{
	// Fields
	
	// Constructors
	ClosedFileSystemException::ClosedFileSystemException()
		: java::lang::IllegalStateException(
			"java.nio.file.ClosedFileSystemException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::file

