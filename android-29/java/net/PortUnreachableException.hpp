#pragma once

#include "../../JString.hpp"
#include "./PortUnreachableException.def.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	inline PortUnreachableException::PortUnreachableException()
		: java::net::SocketException(
			"java.net.PortUnreachableException",
			"()V"
		) {}
	inline PortUnreachableException::PortUnreachableException(JString arg0)
		: java::net::SocketException(
			"java.net.PortUnreachableException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::net

// Base class headers
#include "../lang/Exception.hpp"
#include "../io/IOException.hpp"
#include "./SocketException.hpp"

