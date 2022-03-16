#include "./spi/SelectorProvider.hpp"
#include "./Pipe_SourceChannel.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	
	// Methods
	jint Pipe_SourceChannel::validOps() const
	{
		return callMethod<jint>(
			"validOps",
			"()I"
		);
	}
} // namespace java::nio::channels

