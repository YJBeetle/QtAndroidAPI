#include "./CancelledKeyException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QAndroidJniObject forward
	CancelledKeyException::CancelledKeyException(QAndroidJniObject obj) : java::lang::IllegalStateException(obj) {}
	
	// Constructors
	CancelledKeyException::CancelledKeyException()
		: java::lang::IllegalStateException(
			"java.nio.channels.CancelledKeyException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

