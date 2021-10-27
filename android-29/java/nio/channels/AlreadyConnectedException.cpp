#include "./AlreadyConnectedException.hpp"

namespace java::nio::channels
{
	// Fields
	
	AlreadyConnectedException::AlreadyConnectedException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AlreadyConnectedException::AlreadyConnectedException()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.AlreadyConnectedException",
			"()V"
		);
	}
	
	// Methods
} // namespace java::nio::channels

