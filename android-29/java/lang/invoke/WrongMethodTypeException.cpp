#include "./WrongMethodTypeException.hpp"

namespace java::lang::invoke
{
	// Fields
	
	WrongMethodTypeException::WrongMethodTypeException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	WrongMethodTypeException::WrongMethodTypeException()
	{
		__thiz = QAndroidJniObject(
			"java.lang.invoke.WrongMethodTypeException",
			"()V"
		);
	}
	WrongMethodTypeException::WrongMethodTypeException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.invoke.WrongMethodTypeException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	WrongMethodTypeException::WrongMethodTypeException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.invoke.WrongMethodTypeException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::lang::invoke

