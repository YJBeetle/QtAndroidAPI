#include "../../JString.hpp"
#include "./IllegalThreadStateException.hpp"

namespace java::lang
{
	// Fields
	
	// QJniObject forward
	IllegalThreadStateException::IllegalThreadStateException(QJniObject obj) : java::lang::IllegalArgumentException(obj) {}
	
	// Constructors
	IllegalThreadStateException::IllegalThreadStateException()
		: java::lang::IllegalArgumentException(
			"java.lang.IllegalThreadStateException",
			"()V"
		) {}
	IllegalThreadStateException::IllegalThreadStateException(JString arg0)
		: java::lang::IllegalArgumentException(
			"java.lang.IllegalThreadStateException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang

