#include "./NegativeArraySizeException.hpp"

namespace java::lang
{
	// Fields
	
	// QJniObject forward
	NegativeArraySizeException::NegativeArraySizeException(QJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	NegativeArraySizeException::NegativeArraySizeException()
		: java::lang::RuntimeException(
			"java.lang.NegativeArraySizeException",
			"()V"
		) {}
	NegativeArraySizeException::NegativeArraySizeException(jstring arg0)
		: java::lang::RuntimeException(
			"java.lang.NegativeArraySizeException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::lang

