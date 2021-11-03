#include "./SocketAddress.hpp"

namespace java::net
{
	// Fields
	
	// QJniObject forward
	SocketAddress::SocketAddress(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	SocketAddress::SocketAddress()
		: JObject(
			"java.net.SocketAddress",
			"()V"
		) {}
	
	// Methods
} // namespace java::net

