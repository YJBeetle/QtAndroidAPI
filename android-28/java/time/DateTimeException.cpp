#include "./DateTimeException.hpp"

namespace java::time
{
	// Fields
	
	// QJniObject forward
	DateTimeException::DateTimeException(QJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	DateTimeException::DateTimeException(jstring arg0)
		: java::lang::RuntimeException(
			"java.time.DateTimeException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	DateTimeException::DateTimeException(jstring arg0, jthrowable arg1)
		: java::lang::RuntimeException(
			"java.time.DateTimeException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace java::time

