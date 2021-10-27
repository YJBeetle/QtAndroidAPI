#include "./SocketAddress.hpp"

namespace java::net
{
	// Fields
	
	SocketAddress::SocketAddress(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SocketAddress::SocketAddress()
	{
		__thiz = QAndroidJniObject(
			"java.net.SocketAddress",
			"()V"
		);
	}
	
	// Methods
} // namespace java::net

