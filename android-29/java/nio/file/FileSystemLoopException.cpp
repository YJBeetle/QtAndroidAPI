#include "./FileSystemLoopException.hpp"

namespace java::nio::file
{
	// Fields
	
	// QAndroidJniObject forward
	FileSystemLoopException::FileSystemLoopException(QAndroidJniObject obj) : java::nio::file::FileSystemException(obj) {}
	
	// Constructors
	FileSystemLoopException::FileSystemLoopException(jstring arg0)
		: java::nio::file::FileSystemException(
			"java.nio.file.FileSystemLoopException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::nio::file

