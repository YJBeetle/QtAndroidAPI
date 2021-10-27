#include "./ShutdownChannelGroupException.hpp"

namespace java::nio::channels
{
	// Fields
	
	ShutdownChannelGroupException::ShutdownChannelGroupException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ShutdownChannelGroupException::ShutdownChannelGroupException()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.ShutdownChannelGroupException",
			"()V"
		);
	}
	
	// Methods
} // namespace java::nio::channels

