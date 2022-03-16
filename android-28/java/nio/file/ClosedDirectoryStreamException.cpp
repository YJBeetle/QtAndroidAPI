#include "./ClosedDirectoryStreamException.hpp"

namespace java::nio::file
{
	// Fields
	
	// Constructors
	ClosedDirectoryStreamException::ClosedDirectoryStreamException()
		: java::lang::IllegalStateException(
			"java.nio.file.ClosedDirectoryStreamException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::file

