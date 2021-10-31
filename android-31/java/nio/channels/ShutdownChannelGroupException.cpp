#include "./ShutdownChannelGroupException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QAndroidJniObject forward
	ShutdownChannelGroupException::ShutdownChannelGroupException(QAndroidJniObject obj) : java::lang::IllegalStateException(obj) {}
	
	// Constructors
	ShutdownChannelGroupException::ShutdownChannelGroupException()
		: java::lang::IllegalStateException(
			"java.nio.channels.ShutdownChannelGroupException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

