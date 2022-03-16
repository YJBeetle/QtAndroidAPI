#pragma once

#include "./SocketAddress.def.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	inline SocketAddress::SocketAddress()
		: JObject(
			"java.net.SocketAddress",
			"()V"
		) {}
	
	// Methods
} // namespace java::net

// Base class headers

