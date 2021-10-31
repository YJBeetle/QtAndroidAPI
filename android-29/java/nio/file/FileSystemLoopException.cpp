#include "./FileSystemLoopException.hpp"

namespace java::nio::file
{
	// Fields
	
	FileSystemLoopException::FileSystemLoopException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	FileSystemLoopException::FileSystemLoopException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.FileSystemLoopException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace java::nio::file

