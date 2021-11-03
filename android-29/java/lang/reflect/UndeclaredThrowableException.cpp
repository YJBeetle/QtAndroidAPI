#include "../../../JArray.hpp"
#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"
#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./UndeclaredThrowableException.hpp"

namespace java::lang::reflect
{
	// Fields
	
	// QAndroidJniObject forward
	UndeclaredThrowableException::UndeclaredThrowableException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	UndeclaredThrowableException::UndeclaredThrowableException(JThrowable arg0)
		: java::lang::RuntimeException(
			"java.lang.reflect.UndeclaredThrowableException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	UndeclaredThrowableException::UndeclaredThrowableException(JThrowable arg0, JString arg1)
		: java::lang::RuntimeException(
			"java.lang.reflect.UndeclaredThrowableException",
			"(Ljava/lang/Throwable;Ljava/lang/String;)V",
			arg0.object<jthrowable>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	JThrowable UndeclaredThrowableException::getUndeclaredThrowable()
	{
		return callObjectMethod(
			"getUndeclaredThrowable",
			"()Ljava/lang/Throwable;"
		);
	}
} // namespace java::lang::reflect

