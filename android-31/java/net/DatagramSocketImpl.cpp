#include "../io/FileDescriptor.hpp"
#include "./DatagramPacket.hpp"
#include "./InetAddress.hpp"
#include "./NetworkInterface.hpp"
#include "./SocketAddress.hpp"
#include "./DatagramSocketImpl.hpp"

namespace java::net
{
	// Fields
	
	// QAndroidJniObject forward
	DatagramSocketImpl::DatagramSocketImpl(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	DatagramSocketImpl::DatagramSocketImpl()
		: __JniBaseClass(
			"java.net.DatagramSocketImpl",
			"()V"
		) {}
	
	// Methods
} // namespace java::net

