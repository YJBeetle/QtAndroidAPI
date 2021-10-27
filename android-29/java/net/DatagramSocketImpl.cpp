#include "../io/FileDescriptor.hpp"
#include "./DatagramPacket.hpp"
#include "./InetAddress.hpp"
#include "./NetworkInterface.hpp"
#include "./SocketAddress.hpp"
#include "./DatagramSocketImpl.hpp"

namespace java::net
{
	// Fields
	
	DatagramSocketImpl::DatagramSocketImpl(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DatagramSocketImpl::DatagramSocketImpl()
	{
		__thiz = QAndroidJniObject(
			"java.net.DatagramSocketImpl",
			"()V"
		);
	}
	
	// Methods
} // namespace java::net

