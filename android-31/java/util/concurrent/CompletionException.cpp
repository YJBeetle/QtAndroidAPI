#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./CompletionException.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// Constructors
	CompletionException::CompletionException(JThrowable arg0)
		: java::lang::RuntimeException(
			"java.util.concurrent.CompletionException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	CompletionException::CompletionException(JString arg0, JThrowable arg1)
		: java::lang::RuntimeException(
			"java.util.concurrent.CompletionException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::util::concurrent

