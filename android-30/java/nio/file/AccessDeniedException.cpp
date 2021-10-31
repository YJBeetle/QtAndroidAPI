#include "./AccessDeniedException.hpp"

namespace java::nio::file
{
	// Fields
	
	// QJniObject forward
	AccessDeniedException::AccessDeniedException(QJniObject obj) : java::nio::file::FileSystemException(obj) {}
	
	// Constructors
	AccessDeniedException::AccessDeniedException(jstring arg0)
		: java::nio::file::FileSystemException(
			"java.nio.file.AccessDeniedException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	AccessDeniedException::AccessDeniedException(jstring arg0, jstring arg1, jstring arg2)
		: java::nio::file::FileSystemException(
			"java.nio.file.AccessDeniedException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
} // namespace java::nio::file

