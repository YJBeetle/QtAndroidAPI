#include "./ClosedFileSystemException.hpp"

namespace java::nio::file
{
	// Fields
	
	// QAndroidJniObject forward
	ClosedFileSystemException::ClosedFileSystemException(QAndroidJniObject obj) : java::lang::IllegalStateException(obj) {}
	
	// Constructors
	ClosedFileSystemException::ClosedFileSystemException()
		: java::lang::IllegalStateException(
			"java.nio.file.ClosedFileSystemException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::file

