#include "../../JString.hpp"
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
	NegativeArraySizeException::NegativeArraySizeException(JString arg0)
		: java::lang::RuntimeException(
			"java.lang.NegativeArraySizeException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang

