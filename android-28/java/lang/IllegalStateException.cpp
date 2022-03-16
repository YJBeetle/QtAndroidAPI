#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./IllegalStateException.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	IllegalStateException::IllegalStateException()
		: java::lang::RuntimeException(
			"java.lang.IllegalStateException",
			"()V"
		) {}
	IllegalStateException::IllegalStateException(JString arg0)
		: java::lang::RuntimeException(
			"java.lang.IllegalStateException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	IllegalStateException::IllegalStateException(JThrowable arg0)
		: java::lang::RuntimeException(
			"java.lang.IllegalStateException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	IllegalStateException::IllegalStateException(JString arg0, JThrowable arg1)
		: java::lang::RuntimeException(
			"java.lang.IllegalStateException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::lang

