#include "./NumberFormatException.hpp"

namespace java::lang
{
	// Fields
	
	// QJniObject forward
	NumberFormatException::NumberFormatException(QJniObject obj) : java::lang::IllegalArgumentException(obj) {}
	
	// Constructors
	NumberFormatException::NumberFormatException()
		: java::lang::IllegalArgumentException(
			"java.lang.NumberFormatException",
			"()V"
		) {}
	NumberFormatException::NumberFormatException(jstring arg0)
		: java::lang::IllegalArgumentException(
			"java.lang.NumberFormatException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::lang

