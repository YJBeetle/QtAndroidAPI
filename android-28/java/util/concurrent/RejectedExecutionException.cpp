#include "./RejectedExecutionException.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QJniObject forward
	RejectedExecutionException::RejectedExecutionException(QJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	RejectedExecutionException::RejectedExecutionException()
		: java::lang::RuntimeException(
			"java.util.concurrent.RejectedExecutionException",
			"()V"
		) {}
	RejectedExecutionException::RejectedExecutionException(jstring arg0)
		: java::lang::RuntimeException(
			"java.util.concurrent.RejectedExecutionException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	RejectedExecutionException::RejectedExecutionException(jthrowable arg0)
		: java::lang::RuntimeException(
			"java.util.concurrent.RejectedExecutionException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	RejectedExecutionException::RejectedExecutionException(jstring arg0, jthrowable arg1)
		: java::lang::RuntimeException(
			"java.util.concurrent.RejectedExecutionException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace java::util::concurrent

