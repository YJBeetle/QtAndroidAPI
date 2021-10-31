#include "./ArithmeticException.hpp"

namespace java::lang
{
	// Fields
	
	// QJniObject forward
	ArithmeticException::ArithmeticException(QJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	ArithmeticException::ArithmeticException()
		: java::lang::RuntimeException(
			"java.lang.ArithmeticException",
			"()V"
		) {}
	ArithmeticException::ArithmeticException(jstring arg0)
		: java::lang::RuntimeException(
			"java.lang.ArithmeticException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::lang

