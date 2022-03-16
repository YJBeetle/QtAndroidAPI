#pragma once

#include "../../JString.hpp"
#include "./ConnectException.def.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	inline ConnectException::ConnectException()
		: java::net::SocketException(
			"java.net.ConnectException",
			"()V"
		) {}
	inline ConnectException::ConnectException(JString arg0)
		: java::net::SocketException(
			"java.net.ConnectException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::net

// Base class headers
#include "../lang/Exception.hpp"
#include "../io/IOException.hpp"
#include "./SocketException.hpp"

