#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"
#include "./UndeclaredThrowableException.hpp"

namespace java::lang::reflect
{
	// Fields
	
	UndeclaredThrowableException::UndeclaredThrowableException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	UndeclaredThrowableException::UndeclaredThrowableException(jthrowable &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.reflect.UndeclaredThrowableException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	UndeclaredThrowableException::UndeclaredThrowableException(jthrowable &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.reflect.UndeclaredThrowableException",
			"(Ljava/lang/Throwable;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	UndeclaredThrowableException::UndeclaredThrowableException(jthrowable &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.reflect.UndeclaredThrowableException",
			"(Ljava/lang/Throwable;Ljava/lang/String;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
	jthrowable UndeclaredThrowableException::getUndeclaredThrowable()
	{
		return __thiz.callObjectMethod(
			"getUndeclaredThrowable",
			"()Ljava/lang/Throwable;"
		).object<jthrowable>();
	}
} // namespace java::lang::reflect

