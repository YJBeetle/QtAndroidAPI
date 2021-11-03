#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./UnsupportedOperationException.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	UnsupportedOperationException::UnsupportedOperationException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	UnsupportedOperationException::UnsupportedOperationException()
		: java::lang::RuntimeException(
			"java.lang.UnsupportedOperationException",
			"()V"
		) {}
	UnsupportedOperationException::UnsupportedOperationException(JString arg0)
		: java::lang::RuntimeException(
			"java.lang.UnsupportedOperationException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	UnsupportedOperationException::UnsupportedOperationException(JThrowable arg0)
		: java::lang::RuntimeException(
			"java.lang.UnsupportedOperationException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	UnsupportedOperationException::UnsupportedOperationException(JString arg0, JThrowable arg1)
		: java::lang::RuntimeException(
			"java.lang.UnsupportedOperationException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::lang

