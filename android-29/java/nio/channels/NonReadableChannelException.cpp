#include "./NonReadableChannelException.hpp"

namespace java::nio::channels
{
	// Fields
	
	NonReadableChannelException::NonReadableChannelException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	NonReadableChannelException::NonReadableChannelException()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.NonReadableChannelException",
			"()V"
		);
	}
	
	// Methods
} // namespace java::nio::channels

