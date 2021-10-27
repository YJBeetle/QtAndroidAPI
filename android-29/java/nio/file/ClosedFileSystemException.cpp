#include "./ClosedFileSystemException.hpp"

namespace java::nio::file
{
	// Fields
	
	ClosedFileSystemException::ClosedFileSystemException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ClosedFileSystemException::ClosedFileSystemException()
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.ClosedFileSystemException",
			"()V"
		);
	}
	
	// Methods
} // namespace java::nio::file

