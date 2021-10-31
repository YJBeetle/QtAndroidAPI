#include "./DirectoryNotEmptyException.hpp"

namespace java::nio::file
{
	// Fields
	
	// QAndroidJniObject forward
	DirectoryNotEmptyException::DirectoryNotEmptyException(QAndroidJniObject obj) : java::nio::file::FileSystemException(obj) {}
	
	// Constructors
	DirectoryNotEmptyException::DirectoryNotEmptyException(jstring arg0)
		: java::nio::file::FileSystemException(
			"java.nio.file.DirectoryNotEmptyException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::nio::file

