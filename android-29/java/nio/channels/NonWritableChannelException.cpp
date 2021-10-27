#include "./NonWritableChannelException.hpp"

namespace java::nio::channels
{
	// Fields
	
	NonWritableChannelException::NonWritableChannelException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	NonWritableChannelException::NonWritableChannelException()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.NonWritableChannelException",
			"()V"
		);
	}
	
	// Methods
} // namespace java::nio::channels

