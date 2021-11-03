#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./RuntimeException.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	RuntimeException::RuntimeException(QAndroidJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	RuntimeException::RuntimeException()
		: java::lang::Exception(
			"java.lang.RuntimeException",
			"()V"
		) {}
	RuntimeException::RuntimeException(JString arg0)
		: java::lang::Exception(
			"java.lang.RuntimeException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	RuntimeException::RuntimeException(JThrowable arg0)
		: java::lang::Exception(
			"java.lang.RuntimeException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	RuntimeException::RuntimeException(JString arg0, JThrowable arg1)
		: java::lang::Exception(
			"java.lang.RuntimeException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::lang

