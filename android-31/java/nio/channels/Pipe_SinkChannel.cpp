#include "./spi/SelectorProvider.hpp"
#include "./Pipe_SinkChannel.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	
	// Methods
	jint Pipe_SinkChannel::validOps() const
	{
		return callMethod<jint>(
			"validOps",
			"()I"
		);
	}
} // namespace java::nio::channels

