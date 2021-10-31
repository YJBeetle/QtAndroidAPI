#include "./SocketAddress.hpp"

namespace java::net
{
	// Fields
	
	// QAndroidJniObject forward
	SocketAddress::SocketAddress(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SocketAddress::SocketAddress()
		: __JniBaseClass(
			"java.net.SocketAddress",
			"()V"
		) {}
	
	// Methods
} // namespace java::net

