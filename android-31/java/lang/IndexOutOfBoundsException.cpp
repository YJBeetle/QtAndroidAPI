#include "../../JString.hpp"
#include "./IndexOutOfBoundsException.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	IndexOutOfBoundsException::IndexOutOfBoundsException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	IndexOutOfBoundsException::IndexOutOfBoundsException()
		: java::lang::RuntimeException(
			"java.lang.IndexOutOfBoundsException",
			"()V"
		) {}
	IndexOutOfBoundsException::IndexOutOfBoundsException(jint arg0)
		: java::lang::RuntimeException(
			"java.lang.IndexOutOfBoundsException",
			"(I)V",
			arg0
		) {}
	IndexOutOfBoundsException::IndexOutOfBoundsException(JString arg0)
		: java::lang::RuntimeException(
			"java.lang.IndexOutOfBoundsException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	IndexOutOfBoundsException::IndexOutOfBoundsException(jlong arg0)
		: java::lang::RuntimeException(
			"java.lang.IndexOutOfBoundsException",
			"(J)V",
			arg0
		) {}
	
	// Methods
} // namespace java::lang

