#include "./IllegalChannelGroupException.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QJniObject forward
	IllegalChannelGroupException::IllegalChannelGroupException(QJniObject obj) : java::lang::IllegalArgumentException(obj) {}
	
	// Constructors
	IllegalChannelGroupException::IllegalChannelGroupException()
		: java::lang::IllegalArgumentException(
			"java.nio.channels.IllegalChannelGroupException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::channels

