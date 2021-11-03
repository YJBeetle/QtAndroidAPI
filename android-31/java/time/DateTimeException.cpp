#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./DateTimeException.hpp"

namespace java::time
{
	// Fields
	
	// QJniObject forward
	DateTimeException::DateTimeException(QJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	DateTimeException::DateTimeException(JString arg0)
		: java::lang::RuntimeException(
			"java.time.DateTimeException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	DateTimeException::DateTimeException(JString arg0, JThrowable arg1)
		: java::lang::RuntimeException(
			"java.time.DateTimeException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::time

