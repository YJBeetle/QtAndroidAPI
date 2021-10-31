#include "./ClosedChannelException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QJniObject forward
	ClosedChannelException::ClosedChannelException(QJniObject obj) : java::io::IOException(obj) {}
	
	// Constructors
	ClosedChannelException::ClosedChannelException()
		: java::io::IOException(
			"java.nio.channels.ClosedChannelException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

