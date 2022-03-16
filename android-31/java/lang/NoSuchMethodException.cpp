#include "../../JString.hpp"
#include "./NoSuchMethodException.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	NoSuchMethodException::NoSuchMethodException()
		: java::lang::ReflectiveOperationException(
			"java.lang.NoSuchMethodException",
			"()V"
		) {}
	NoSuchMethodException::NoSuchMethodException(JString arg0)
		: java::lang::ReflectiveOperationException(
			"java.lang.NoSuchMethodException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang

