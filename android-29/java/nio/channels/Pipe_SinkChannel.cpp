#include "./spi/SelectorProvider.hpp"
#include "./Pipe_SinkChannel.hpp"

namespace java::nio::channels
{
	// Fields
	
	Pipe_SinkChannel::Pipe_SinkChannel(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint Pipe_SinkChannel::validOps()
	{
		return __thiz.callMethod<jint>(
			"validOps",
			"()I"
		);
	}
} // namespace java::nio::channels

