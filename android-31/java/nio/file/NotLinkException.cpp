#include "./NotLinkException.hpp"

namespace java::nio::file
{
	// Fields
	
	// QJniObject forward
	NotLinkException::NotLinkException(QJniObject obj) : java::nio::file::FileSystemException(obj) {}
	
	// Constructors
	NotLinkException::NotLinkException(jstring arg0)
		: java::nio::file::FileSystemException(
			"java.nio.file.NotLinkException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	NotLinkException::NotLinkException(jstring arg0, jstring arg1, jstring arg2)
		: java::nio::file::FileSystemException(
			"java.nio.file.NotLinkException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
} // namespace java::nio::file

