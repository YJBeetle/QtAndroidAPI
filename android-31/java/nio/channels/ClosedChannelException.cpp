#include "./ClosedChannelException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QAndroidJniObject forward
	ClosedChannelException::ClosedChannelException(QAndroidJniObject obj) : java::io::IOException(obj) {}
	
	// Constructors
	ClosedChannelException::ClosedChannelException()
		: java::io::IOException(
			"java.nio.channels.ClosedChannelException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

