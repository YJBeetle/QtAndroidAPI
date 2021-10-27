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
	ArithmeticException::ArithmeticException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ArithmeticException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	ArithmeticException::ArithmeticException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ArithmeticException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::lang

