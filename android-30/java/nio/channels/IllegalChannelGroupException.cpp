#include "./IllegalChannelGroupException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QAndroidJniObject forward
	IllegalChannelGroupException::IllegalChannelGroupException(QAndroidJniObject obj) : java::lang::IllegalArgumentException(obj) {}
	
	// Constructors
	IllegalChannelGroupException::IllegalChannelGroupException()
		: java::lang::IllegalArgumentException(
			"java.nio.channels.IllegalChannelGroupException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

