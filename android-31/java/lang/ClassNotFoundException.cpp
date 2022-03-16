#include "../../JArray.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./ClassNotFoundException.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	ClassNotFoundException::ClassNotFoundException()
		: java::lang::ReflectiveOperationException(
			"java.lang.ClassNotFoundException",
			"()V"
		) {}
	ClassNotFoundException::ClassNotFoundException(JString arg0)
		: java::lang::ReflectiveOperationException(
			"java.lang.ClassNotFoundException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	ClassNotFoundException::ClassNotFoundException(JString arg0, JThrowable arg1)
		: java::lang::ReflectiveOperationException(
			"java.lang.ClassNotFoundException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
	JThrowable ClassNotFoundException::getException() const
	{
		return callObjectMethod(
			"getException",
			"()Ljava/lang/Throwable;"
		);
	}
} // namespace java::lang

