#include "./spi/SelectorProvider.hpp"
#include "./Pipe_SourceChannel.hpp"

namespace java::nio::channels
{
	// Fields
	
	Pipe_SourceChannel::Pipe_SourceChannel(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint Pipe_SourceChannel::validOps()
	{
		return __thiz.callMethod<jint>(
			"validOps",
			"()I"
		);
	}
} // namespace java::nio::channels

