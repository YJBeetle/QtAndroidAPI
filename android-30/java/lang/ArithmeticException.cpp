#include "../../JString.hpp"
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
	ArithmeticException::ArithmeticException(JString arg0)
		: java::lang::RuntimeException(
			"java.lang.ArithmeticException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang

