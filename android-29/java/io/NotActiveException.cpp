#include "./NotActiveException.hpp"

namespace java::io
{
	// Fields
	
	NotActiveException::NotActiveException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	NotActiveException::NotActiveException()
	{
		__thiz = QAndroidJniObject(
			"java.io.NotActiveException",
			"()V"
		);
	}
	NotActiveException::NotActiveException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.NotActiveException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace java::io

