#include "./NoSuchFileException.hpp"

namespace java::nio::file
{
	// Fields
	
	// QJniObject forward
	NoSuchFileException::NoSuchFileException(QJniObject obj) : java::nio::file::FileSystemException(obj) {}
	
	// Constructors
	NoSuchFileException::NoSuchFileException(jstring arg0)
		: java::nio::file::FileSystemException(
			"java.nio.file.NoSuchFileException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	NoSuchFileException::NoSuchFileException(jstring arg0, jstring arg1, jstring arg2)
		: java::nio::file::FileSystemException(
			"java.nio.file.NoSuchFileException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
} // namespace java::nio::file

