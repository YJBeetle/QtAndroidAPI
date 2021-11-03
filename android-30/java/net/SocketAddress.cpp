#include "./SocketAddress.hpp"

namespace java::net
{
	// Fields
	
	// QAndroidJniObject forward
	SocketAddress::SocketAddress(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	SocketAddress::SocketAddress()
		: JObject(
			"java.net.SocketAddress",
			"()V"
		) {}
	
	// Methods
} // namespace java::net

