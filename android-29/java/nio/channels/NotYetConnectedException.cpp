#include "./NotYetConnectedException.hpp"

namespace java::nio::channels
{
	// Fields
	
	NotYetConnectedException::NotYetConnectedException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	NotYetConnectedException::NotYetConnectedException()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.NotYetConnectedException",
			"()V"
		);
	}
	
	// Methods
} // namespace java::nio::channels

