#include "./ClosedFileSystemException.hpp"

namespace java::nio::file
{
	// Fields
	
	// QJniObject forward
	ClosedFileSystemException::ClosedFileSystemException(QJniObject obj) : java::lang::IllegalStateException(obj) {}
	
	// Constructors
	ClosedFileSystemException::ClosedFileSystemException()
		: java::lang::IllegalStateException(
			"java.nio.file.ClosedFileSystemException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::file

