#include "../../../JString.hpp"
#include "./CancellationException.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QJniObject forward
	CancellationException::CancellationException(QJniObject obj) : java::lang::IllegalStateException(obj) {}
	
	// Constructors
	CancellationException::CancellationException()
		: java::lang::IllegalStateException(
			"java.util.concurrent.CancellationException",
			"()V"
		) {}
	CancellationException::CancellationException(JString arg0)
		: java::lang::IllegalStateException(
			"java.util.concurrent.CancellationException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::util::concurrent

