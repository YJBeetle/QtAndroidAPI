#include "./NonReadableChannelException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QJniObject forward
	NonReadableChannelException::NonReadableChannelException(QJniObject obj) : java::lang::IllegalStateException(obj) {}
	
	// Constructors
	NonReadableChannelException::NonReadableChannelException()
		: java::lang::IllegalStateException(
			"java.nio.channels.NonReadableChannelException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

