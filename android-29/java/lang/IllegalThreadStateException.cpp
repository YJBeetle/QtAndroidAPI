#include "./IllegalThreadStateException.hpp"

namespace java::lang
{
	// Fields
	
	IllegalThreadStateException::IllegalThreadStateException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	IllegalThreadStateException::IllegalThreadStateException()
	{
		__thiz = QAndroidJniObject(
			"java.lang.IllegalThreadStateException",
			"()V"
		);
	}
	IllegalThreadStateException::IllegalThreadStateException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.IllegalThreadStateException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace java::lang

