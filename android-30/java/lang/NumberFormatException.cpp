#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./NumberFormatException.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	NumberFormatException::NumberFormatException(QAndroidJniObject obj) : java::lang::IllegalArgumentException(obj) {}
	
	// Constructors
	NumberFormatException::NumberFormatException()
		: java::lang::IllegalArgumentException(
			"java.lang.NumberFormatException",
			"()V"
		) {}
	NumberFormatException::NumberFormatException(JString arg0)
		: java::lang::IllegalArgumentException(
			"java.lang.NumberFormatException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang

