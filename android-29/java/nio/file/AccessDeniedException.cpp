#include "./AccessDeniedException.hpp"

namespace java::nio::file
{
	// Fields
	
	AccessDeniedException::AccessDeniedException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AccessDeniedException::AccessDeniedException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.AccessDeniedException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	AccessDeniedException::AccessDeniedException(jstring arg0, jstring arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.AccessDeniedException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
} // namespace java::nio::file

