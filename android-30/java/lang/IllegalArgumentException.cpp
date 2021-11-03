#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./IllegalArgumentException.hpp"

namespace java::lang
{
	// Fields
	
	// QJniObject forward
	IllegalArgumentException::IllegalArgumentException(QJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	IllegalArgumentException::IllegalArgumentException()
		: java::lang::RuntimeException(
			"java.lang.IllegalArgumentException",
			"()V"
		) {}
	IllegalArgumentException::IllegalArgumentException(JString arg0)
		: java::lang::RuntimeException(
			"java.lang.IllegalArgumentException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	IllegalArgumentException::IllegalArgumentException(JThrowable arg0)
		: java::lang::RuntimeException(
			"java.lang.IllegalArgumentException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	IllegalArgumentException::IllegalArgumentException(JString arg0, JThrowable arg1)
		: java::lang::RuntimeException(
			"java.lang.IllegalArgumentException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::lang

