#include "./IllegalAccessException.hpp"

namespace java::lang
{
	// Fields
	
	IllegalAccessException::IllegalAccessException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	IllegalAccessException::IllegalAccessException()
	{
		__thiz = QAndroidJniObject(
			"java.lang.IllegalAccessException",
			"()V"
		);
	}
	IllegalAccessException::IllegalAccessException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.IllegalAccessException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace java::lang

