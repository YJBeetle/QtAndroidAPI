#include "./CompletionException.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QJniObject forward
	CompletionException::CompletionException(QJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	CompletionException::CompletionException(jthrowable arg0)
		: java::lang::RuntimeException(
			"java.util.concurrent.CompletionException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	CompletionException::CompletionException(jstring arg0, jthrowable arg1)
		: java::lang::RuntimeException(
			"java.util.concurrent.CompletionException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace java::util::concurrent

