#include "./IllegalChannelGroupException.hpp"

namespace java::nio::channels
{
	// Fields
	
	IllegalChannelGroupException::IllegalChannelGroupException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	IllegalChannelGroupException::IllegalChannelGroupException()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.IllegalChannelGroupException",
			"()V"
		);
	}
	
	// Methods
} // namespace java::nio::channels

