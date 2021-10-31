#include "./ClosedDirectoryStreamException.hpp"

namespace java::nio::file
{
	// Fields
	
	// QAndroidJniObject forward
	ClosedDirectoryStreamException::ClosedDirectoryStreamException(QAndroidJniObject obj) : java::lang::IllegalStateException(obj) {}
	
	// Constructors
	ClosedDirectoryStreamException::ClosedDirectoryStreamException()
		: java::lang::IllegalStateException(
			"java.nio.file.ClosedDirectoryStreamException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::file

