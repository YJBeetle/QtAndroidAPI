#include "./AtomicMoveNotSupportedException.hpp"

namespace java::nio::file
{
	// Fields
	
	// QJniObject forward
	AtomicMoveNotSupportedException::AtomicMoveNotSupportedException(QJniObject obj) : java::nio::file::FileSystemException(obj) {}
	
	// Constructors
	AtomicMoveNotSupportedException::AtomicMoveNotSupportedException(jstring arg0, jstring arg1, jstring arg2)
		: java::nio::file::FileSystemException(
			"java.nio.file.AtomicMoveNotSupportedException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
} // namespace java::nio::file

