#include "./WritePendingException.hpp"

namespace java::nio::channels
{
	// Fields
	
	WritePendingException::WritePendingException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	WritePendingException::WritePendingException()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.WritePendingException",
			"()V"
		);
	}
	
	// Methods
} // namespace java::nio::channels

