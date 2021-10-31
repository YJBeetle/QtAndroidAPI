#include "./UnsupportedOperationException.hpp"

namespace java::lang
{
	// Fields
	
	// QJniObject forward
	UnsupportedOperationException::UnsupportedOperationException(QJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	UnsupportedOperationException::UnsupportedOperationException()
		: java::lang::RuntimeException(
			"java.lang.UnsupportedOperationException",
			"()V"
		) {}
	UnsupportedOperationException::UnsupportedOperationException(jstring arg0)
		: java::lang::RuntimeException(
			"java.lang.UnsupportedOperationException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	UnsupportedOperationException::UnsupportedOperationException(jthrowable arg0)
		: java::lang::RuntimeException(
			"java.lang.UnsupportedOperationException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	UnsupportedOperationException::UnsupportedOperationException(jstring arg0, jthrowable arg1)
		: java::lang::RuntimeException(
			"java.lang.UnsupportedOperationException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace java::lang

