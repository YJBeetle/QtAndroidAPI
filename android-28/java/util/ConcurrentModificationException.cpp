#include "./ConcurrentModificationException.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	ConcurrentModificationException::ConcurrentModificationException(QJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	ConcurrentModificationException::ConcurrentModificationException()
		: java::lang::RuntimeException(
			"java.util.ConcurrentModificationException",
			"()V"
		) {}
	ConcurrentModificationException::ConcurrentModificationException(jstring arg0)
		: java::lang::RuntimeException(
			"java.util.ConcurrentModificationException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	ConcurrentModificationException::ConcurrentModificationException(jthrowable arg0)
		: java::lang::RuntimeException(
			"java.util.ConcurrentModificationException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	ConcurrentModificationException::ConcurrentModificationException(jstring arg0, jthrowable arg1)
		: java::lang::RuntimeException(
			"java.util.ConcurrentModificationException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace java::util

