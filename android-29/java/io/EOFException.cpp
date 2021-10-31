#include "./EOFException.hpp"

namespace java::io
{
	// Fields
	
	EOFException::EOFException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	EOFException::EOFException()
	{
		__thiz = QAndroidJniObject(
			"java.io.EOFException",
			"()V"
		);
	}
	EOFException::EOFException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.EOFException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace java::io

