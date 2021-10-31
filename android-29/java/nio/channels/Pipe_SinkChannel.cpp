#include "./spi/SelectorProvider.hpp"
#include "./Pipe_SinkChannel.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QJniObject forward
	Pipe_SinkChannel::Pipe_SinkChannel(QJniObject obj) : java::nio::channels::spi::AbstractSelectableChannel(obj) {}
	
	// Constructors
	
	// Methods
	jint Pipe_SinkChannel::validOps()
	{
		return callMethod<jint>(
			"validOps",
			"()I"
		);
	}
} // namespace java::nio::channels

