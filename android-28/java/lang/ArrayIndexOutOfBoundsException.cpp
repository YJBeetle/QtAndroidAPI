#include "../../JString.hpp"
#include "./ArrayIndexOutOfBoundsException.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException()
		: java::lang::IndexOutOfBoundsException(
			"java.lang.ArrayIndexOutOfBoundsException",
			"()V"
		) {}
	ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException(jint arg0)
		: java::lang::IndexOutOfBoundsException(
			"java.lang.ArrayIndexOutOfBoundsException",
			"(I)V",
			arg0
		) {}
	ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException(JString arg0)
		: java::lang::IndexOutOfBoundsException(
			"java.lang.ArrayIndexOutOfBoundsException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang

