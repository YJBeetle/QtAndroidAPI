#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./NoSuchElementException.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	NoSuchElementException::NoSuchElementException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	NoSuchElementException::NoSuchElementException()
		: java::lang::RuntimeException(
			"java.util.NoSuchElementException",
			"()V"
		) {}
	NoSuchElementException::NoSuchElementException(JString arg0)
		: java::lang::RuntimeException(
			"java.util.NoSuchElementException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	NoSuchElementException::NoSuchElementException(JThrowable arg0)
		: java::lang::RuntimeException(
			"java.util.NoSuchElementException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	NoSuchElementException::NoSuchElementException(JString arg0, JThrowable arg1)
		: java::lang::RuntimeException(
			"java.util.NoSuchElementException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::util

