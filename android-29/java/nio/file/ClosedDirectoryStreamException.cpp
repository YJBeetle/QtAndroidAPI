#include "./ClosedDirectoryStreamException.hpp"

namespace java::nio::file
{
	// Fields
	
	ClosedDirectoryStreamException::ClosedDirectoryStreamException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ClosedDirectoryStreamException::ClosedDirectoryStreamException()
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.ClosedDirectoryStreamException",
			"()V"
		);
	}
	
	// Methods
} // namespace java::nio::file

