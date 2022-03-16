#include "../../../JString.hpp"
#include "./TimeoutException.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// Constructors
	TimeoutException::TimeoutException()
		: java::lang::Exception(
			"java.util.concurrent.TimeoutException",
			"()V"
		) {}
	TimeoutException::TimeoutException(JString arg0)
		: java::lang::Exception(
			"java.util.concurrent.TimeoutException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::util::concurrent

