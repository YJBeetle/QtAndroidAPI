#include "./SocketAddress.hpp"

namespace java::net
{
	// Fields
	
	// QJniObject forward
	SocketAddress::SocketAddress(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SocketAddress::SocketAddress()
		: __JniBaseClass(
			"java.net.SocketAddress",
			"()V"
		) {}
	
	// Methods
} // namespace java::net

