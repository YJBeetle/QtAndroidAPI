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
		
		DatagramSocketImpl(QAndroidJniObject obj);
		// Constructors
		DatagramSocketImpl();
		
		// Methods
	};
} // namespace java::net

