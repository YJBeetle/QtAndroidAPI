#include "./ArrayIndexOutOfBoundsException.hpp"

namespace java::lang
{
	// Fields
	
	// QJniObject forward
	ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException(QJniObject obj) : java::lang::IndexOutOfBoundsException(obj) {}
	
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
	ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException(jstring arg0)
		: java::lang::IndexOutOfBoundsException(
			"java.lang.ArrayIndexOutOfBoundsException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::lang

