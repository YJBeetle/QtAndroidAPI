#include "./InputMismatchException.hpp"

namespace java::util
{
	// Fields
	
	InputMismatchException::InputMismatchException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	InputMismatchException::InputMismatchException()
	{
		__thiz = QAndroidJniObject(
			"java.util.InputMismatchException",
			"()V"
		);
	}
	InputMismatchException::InputMismatchException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.InputMismatchException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	InputMismatchException::InputMismatchException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.InputMismatchException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::util

