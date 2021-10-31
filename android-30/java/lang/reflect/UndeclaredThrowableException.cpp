#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"
#include "./UndeclaredThrowableException.hpp"

namespace java::lang::reflect
{
	// Fields
	
	// QJniObject forward
	UndeclaredThrowableException::UndeclaredThrowableException(QJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	UndeclaredThrowableException::UndeclaredThrowableException(jthrowable arg0)
		: java::lang::RuntimeException(
			"java.lang.reflect.UndeclaredThrowableException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	UndeclaredThrowableException::UndeclaredThrowableException(jthrowable arg0, jstring arg1)
		: java::lang::RuntimeException(
			"java.lang.reflect.UndeclaredThrowableException",
			"(Ljava/lang/Throwable;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jthrowable UndeclaredThrowableException::getUndeclaredThrowable()
	{
		return callObjectMethod(
			"getUndeclaredThrowable",
			"()Ljava/lang/Throwable;"
		).object<jthrowable>();
	}
} // namespace java::lang::reflect

