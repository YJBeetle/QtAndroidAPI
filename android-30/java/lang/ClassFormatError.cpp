#include "../../JString.hpp"
#include "./ClassFormatError.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	ClassFormatError::ClassFormatError()
		: java::lang::LinkageError(
			"java.lang.ClassFormatError",
			"()V"
		) {}
	ClassFormatError::ClassFormatError(JString arg0)
		: java::lang::LinkageError(
			"java.lang.ClassFormatError",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang

