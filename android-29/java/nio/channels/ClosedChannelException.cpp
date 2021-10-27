#include "./ClosedChannelException.hpp"

namespace java::nio::channels
{
	// Fields
	
	ClosedChannelException::ClosedChannelException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ClosedChannelException::ClosedChannelException()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.ClosedChannelException",
			"()V"
		);
	}
	
	// Methods
} // namespace java::nio::channels

