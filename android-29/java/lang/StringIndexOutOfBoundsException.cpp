#include "../../JString.hpp"
#include "./StringIndexOutOfBoundsException.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	StringIndexOutOfBoundsException::StringIndexOutOfBoundsException(QAndroidJniObject obj) : java::lang::IndexOutOfBoundsException(obj) {}
	
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
	StringIndexOutOfBoundsException::StringIndexOutOfBoundsException(JString arg0)
		: java::lang::IndexOutOfBoundsException(
			"java.lang.StringIndexOutOfBoundsException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::lang

