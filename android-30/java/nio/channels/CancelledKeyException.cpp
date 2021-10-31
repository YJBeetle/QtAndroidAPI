#include "./CancelledKeyException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QJniObject forward
	CancelledKeyException::CancelledKeyException(QJniObject obj) : java::lang::IllegalStateException(obj) {}
	
	// Constructors
	CancelledKeyException::CancelledKeyException()
		: java::lang::IllegalStateException(
			"java.nio.channels.CancelledKeyException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

