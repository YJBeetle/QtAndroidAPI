#include "../../JString.hpp"
#include "./IllegalAccessError.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	IllegalAccessError::IllegalAccessError()
		: java::lang::IncompatibleClassChangeError(
			"java.lang.IllegalAccessError",
			"()V"
		) {}
	IllegalAccessError::IllegalAccessError(JString arg0)
		: java::lang::IncompatibleClassChangeError(
			"java.lang.IllegalAccessError",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang

