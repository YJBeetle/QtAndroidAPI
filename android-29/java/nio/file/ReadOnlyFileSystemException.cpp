#include "./ReadOnlyFileSystemException.hpp"

namespace java::nio::file
{
	// Fields
	
	ReadOnlyFileSystemException::ReadOnlyFileSystemException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ReadOnlyFileSystemException::ReadOnlyFileSystemException()
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.ReadOnlyFileSystemException",
			"()V"
		);
	}
	
	// Methods
} // namespace java::nio::file

