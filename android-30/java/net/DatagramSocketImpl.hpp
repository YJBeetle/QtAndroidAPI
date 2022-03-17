#pragma once

#include "../io/FileDescriptor.def.hpp"
#include "../../JObject.hpp"
#include "./DatagramPacket.def.hpp"
#include "./InetAddress.def.hpp"
#include "./NetworkInterface.def.hpp"
#include "./SocketAddress.def.hpp"
#include "./DatagramSocketImpl.def.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	inline DatagramSocketImpl::DatagramSocketImpl()
		: JObject(
			"java.net.DatagramSocketImpl",
			"()V"
		) {}
	
	// Methods
} // namespace java::net

// Base class headers

