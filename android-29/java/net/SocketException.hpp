#pragma once

#include "../../JString.hpp"
#include "./SocketException.def.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	inline SocketException::SocketException()
		: java::io::IOException(
			"java.net.SocketException",
			"()V"
		) {}
	inline SocketException::SocketException(JString arg0)
		: java::io::IOException(
			"java.net.SocketException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::net

// Base class headers
#include "../lang/Exception.hpp"
#include "../io/IOException.hpp"

