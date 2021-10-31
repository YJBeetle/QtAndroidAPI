#include "./NotLinkException.hpp"

namespace java::nio::file
{
	// Fields
	
	NotLinkException::NotLinkException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	NotLinkException::NotLinkException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.NotLinkException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	NotLinkException::NotLinkException(jstring arg0, jstring arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.NotLinkException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
} // namespace java::nio::file

