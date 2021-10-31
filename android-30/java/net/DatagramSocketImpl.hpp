#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class FileDescriptor;
}
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
	class DatagramSocketImpl : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DatagramSocketImpl(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DatagramSocketImpl(QJniObject obj);
		
		// Constructors
		DatagramSocketImpl();
		
		// Methods
	};
} // namespace java::net

