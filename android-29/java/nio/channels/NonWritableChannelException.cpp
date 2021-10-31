#include "./NonWritableChannelException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QAndroidJniObject forward
	NonWritableChannelException::NonWritableChannelException(QAndroidJniObject obj) : java::lang::IllegalStateException(obj) {}
	
	// Constructors
	NonWritableChannelException::NonWritableChannelException()
		: java::lang::IllegalStateException(
			"java.nio.channels.NonWritableChannelException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

