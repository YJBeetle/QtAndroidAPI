#include "./ReadOnlyFileSystemException.hpp"

namespace java::nio::file
{
	// Fields
	
	// Constructors
	ReadOnlyFileSystemException::ReadOnlyFileSystemException()
		: java::lang::UnsupportedOperationException(
			"java.nio.file.ReadOnlyFileSystemException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::file

