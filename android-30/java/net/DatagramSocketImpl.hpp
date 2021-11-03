#pragma once

#include "../../JObject.hpp"

namespace java::io
{
	class FileDescriptor;
}
class JObject;
namespace java::net
{
	class DatagramPacket;
}
namespace java::net
{
	class InetAddress;
}
namespace java::net
{
	class NetworkInterface;
}
namespace java::net
{
	class SocketAddress;
}

namespace java::net
{
	class DatagramSocketImpl : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DatagramSocketImpl(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DatagramSocketImpl(QJniObject obj);
		
		// Constructors
		DatagramSocketImpl();
		
		// Methods
	};
} // namespace java::net

