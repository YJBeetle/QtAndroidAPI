#include "../../JString.hpp"
#include "./NoSuchFieldException.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	NoSuchFieldException::NoSuchFieldException()
		: java::lang::ReflectiveOperationException(
			"java.lang.NoSuchFieldException",
			"()V"
		) {}
	NoSuchFieldException::NoSuchFieldException(JString arg0)
		: java::lang::ReflectiveOperationException(
			"java.lang.NoSuchFieldException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang

