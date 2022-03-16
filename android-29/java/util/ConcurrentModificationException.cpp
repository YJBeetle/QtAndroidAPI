#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./ConcurrentModificationException.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	ConcurrentModificationException::ConcurrentModificationException()
		: java::lang::RuntimeException(
			"java.util.ConcurrentModificationException",
			"()V"
		) {}
	ConcurrentModificationException::ConcurrentModificationException(JString arg0)
		: java::lang::RuntimeException(
			"java.util.ConcurrentModificationException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	ConcurrentModificationException::ConcurrentModificationException(JThrowable arg0)
		: java::lang::RuntimeException(
			"java.util.ConcurrentModificationException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	ConcurrentModificationException::ConcurrentModificationException(JString arg0, JThrowable arg1)
		: java::lang::RuntimeException(
			"java.util.ConcurrentModificationException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::util

