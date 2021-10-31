#include "./ExecutionException.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QJniObject forward
	ExecutionException::ExecutionException(QJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	ExecutionException::ExecutionException(jthrowable arg0)
		: java::lang::Exception(
			"java.util.concurrent.ExecutionException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	ExecutionException::ExecutionException(jstring arg0, jthrowable arg1)
		: java::lang::Exception(
			"java.util.concurrent.ExecutionException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace java::util::concurrent

