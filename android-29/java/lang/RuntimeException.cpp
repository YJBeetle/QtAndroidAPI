#include "./RuntimeException.hpp"

namespace java::lang
{
	// Fields
	
	// QJniObject forward
	RuntimeException::RuntimeException(QJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	RuntimeException::RuntimeException()
		: java::lang::Exception(
			"java.lang.RuntimeException",
			"()V"
		) {}
	RuntimeException::RuntimeException(jstring arg0)
		: java::lang::Exception(
			"java.lang.RuntimeException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	RuntimeException::RuntimeException(jthrowable arg0)
		: java::lang::Exception(
			"java.lang.RuntimeException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	RuntimeException::RuntimeException(jstring arg0, jthrowable arg1)
		: java::lang::Exception(
			"java.lang.RuntimeException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace java::lang

