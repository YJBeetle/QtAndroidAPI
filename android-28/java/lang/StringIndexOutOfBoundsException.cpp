#include "./StringIndexOutOfBoundsException.hpp"

namespace java::lang
{
	// Fields
	
	// QJniObject forward
	StringIndexOutOfBoundsException::StringIndexOutOfBoundsException(QJniObject obj) : java::lang::IndexOutOfBoundsException(obj) {}
	
	// Constructors
	StringIndexOutOfBoundsException::StringIndexOutOfBoundsException()
		: java::lang::IndexOutOfBoundsException(
			"java.lang.StringIndexOutOfBoundsException",
			"()V"
		) {}
	StringIndexOutOfBoundsException::StringIndexOutOfBoundsException(jint arg0)
		: java::lang::IndexOutOfBoundsException(
			"java.lang.StringIndexOutOfBoundsException",
			"(I)V",
			arg0
		) {}
	StringIndexOutOfBoundsException::StringIndexOutOfBoundsException(jstring arg0)
		: java::lang::IndexOutOfBoundsException(
			"java.lang.StringIndexOutOfBoundsException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::lang

