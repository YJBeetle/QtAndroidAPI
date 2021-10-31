#include "./spi/SelectorProvider.hpp"
#include "./Pipe_SourceChannel.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QAndroidJniObject forward
	Pipe_SourceChannel::Pipe_SourceChannel(QAndroidJniObject obj) : java::nio::channels::spi::AbstractSelectableChannel(obj) {}
	
	// Constructors
	
	// Methods
	jint Pipe_SourceChannel::validOps()
	{
		return callMethod<jint>(
			"validOps",
			"()I"
		);
	}
} // namespace java::nio::channels

