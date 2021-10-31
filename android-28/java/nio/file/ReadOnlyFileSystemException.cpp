#include "./ReadOnlyFileSystemException.hpp"

namespace java::nio::file
{
	// Fields
	
	// QAndroidJniObject forward
	ReadOnlyFileSystemException::ReadOnlyFileSystemException(QAndroidJniObject obj) : java::lang::UnsupportedOperationException(obj) {}
	
	// Constructors
	ReadOnlyFileSystemException::ReadOnlyFileSystemException()
		: java::lang::UnsupportedOperationException(
			"java.nio.file.ReadOnlyFileSystemException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::file

