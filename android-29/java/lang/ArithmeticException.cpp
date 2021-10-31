#include "./ArithmeticException.hpp"

namespace java::lang
{
	// Fields
	
	ArithmeticException::ArithmeticException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ArithmeticException::ArithmeticException()
	{
		__thiz = QAndroidJniObject(
			"java.lang.ArithmeticException",
			"()V"
		);
	}
	ArithmeticException::ArithmeticException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ArithmeticException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace java::lang

