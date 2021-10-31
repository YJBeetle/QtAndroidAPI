#include "./NoSuchFileException.hpp"

namespace java::nio::file
{
	// Fields
	
	NoSuchFileException::NoSuchFileException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	NoSuchFileException::NoSuchFileException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.NoSuchFileException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	NoSuchFileException::NoSuchFileException(jstring arg0, jstring arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.NoSuchFileException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
} // namespace java::nio::file

