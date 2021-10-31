#include "./ShutdownChannelGroupException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QJniObject forward
	ShutdownChannelGroupException::ShutdownChannelGroupException(QJniObject obj) : java::lang::IllegalStateException(obj) {}
	
	// Constructors
	ShutdownChannelGroupException::ShutdownChannelGroupException()
		: java::lang::IllegalStateException(
			"java.nio.channels.ShutdownChannelGroupException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

