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
	NoSuchElementException::NoSuchElementException(jstring arg0)
		: java::lang::RuntimeException(
			"java.util.NoSuchElementException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	NoSuchElementException::NoSuchElementException(jthrowable arg0)
		: java::lang::RuntimeException(
			"java.util.NoSuchElementException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	NoSuchElementException::NoSuchElementException(jstring arg0, jthrowable arg1)
		: java::lang::RuntimeException(
			"java.util.NoSuchElementException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace java::util

