#include "../../../JString.hpp"
#include "./NoSuchFileException.hpp"

namespace java::nio::file
{
	// Fields
	
	// QAndroidJniObject forward
	NoSuchFileException::NoSuchFileException(QAndroidJniObject obj) : java::nio::file::FileSystemException(obj) {}
	
	// Constructors
	NoSuchFileException::NoSuchFileException(JString arg0)
		: java::nio::file::FileSystemException(
			"java.nio.file.NoSuchFileException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	NoSuchFileException::NoSuchFileException(JString arg0, JString arg1, JString arg2)
		: java::nio::file::FileSystemException(
			"java.nio.file.NoSuchFileException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		) {}
	
	// Methods
} // namespace java::nio::file

