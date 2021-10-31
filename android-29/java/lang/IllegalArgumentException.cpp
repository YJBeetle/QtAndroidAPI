#include "./IllegalArgumentException.hpp"

namespace java::lang
{
	// Fields
	
	IllegalArgumentException::IllegalArgumentException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	IllegalArgumentException::IllegalArgumentException()
	{
		__thiz = QAndroidJniObject(
			"java.lang.IllegalArgumentException",
			"()V"
		);
	}
	IllegalArgumentException::IllegalArgumentException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.IllegalArgumentException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	IllegalArgumentException::IllegalArgumentException(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.IllegalArgumentException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	IllegalArgumentException::IllegalArgumentException(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.IllegalArgumentException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace java::lang

