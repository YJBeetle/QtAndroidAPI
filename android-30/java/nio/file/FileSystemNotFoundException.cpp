#include "./FileSystemNotFoundException.hpp"

namespace java::nio::file
{
	// Fields
	
	// QAndroidJniObject forward
	FileSystemNotFoundException::FileSystemNotFoundException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	FileSystemNotFoundException::FileSystemNotFoundException()
		: java::lang::RuntimeException(
			"java.nio.file.FileSystemNotFoundException",
			"()V"
		) {}
	FileSystemNotFoundException::FileSystemNotFoundException(jstring arg0)
		: java::lang::RuntimeException(
			"java.nio.file.FileSystemNotFoundException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::nio::file

