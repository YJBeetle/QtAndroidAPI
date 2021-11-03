#include "../io/FileDescriptor.hpp"
#include "../../JObject.hpp"
#include "./DatagramPacket.hpp"
#include "./InetAddress.hpp"
#include "./NetworkInterface.hpp"
#include "./SocketAddress.hpp"
#include "./DatagramSocketImpl.hpp"

namespace java::net
{
	// Fields
	
	// QAndroidJniObject forward
	DatagramSocketImpl::DatagramSocketImpl(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	DatagramSocketImpl::DatagramSocketImpl()
		: JObject(
			"java.net.DatagramSocketImpl",
			"()V"
		) {}
	
	// Methods
} // namespace java::net

