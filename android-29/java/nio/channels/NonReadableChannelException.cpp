#include "./NonReadableChannelException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QAndroidJniObject forward
	NonReadableChannelException::NonReadableChannelException(QAndroidJniObject obj) : java::lang::IllegalStateException(obj) {}
	
	// Constructors
	NonReadableChannelException::NonReadableChannelException()
		: java::lang::IllegalStateException(
			"java.nio.channels.NonReadableChannelException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

