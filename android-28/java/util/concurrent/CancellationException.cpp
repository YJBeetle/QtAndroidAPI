#include "./CancellationException.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QAndroidJniObject forward
	CancellationException::CancellationException(QAndroidJniObject obj) : java::lang::IllegalStateException(obj) {}
	
	// Constructors
	CancellationException::CancellationException()
		: java::lang::IllegalStateException(
			"java.util.concurrent.CancellationException",
			"()V"
		) {}
	CancellationException::CancellationException(jstring arg0)
		: java::lang::IllegalStateException(
			"java.util.concurrent.CancellationException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::util::concurrent

