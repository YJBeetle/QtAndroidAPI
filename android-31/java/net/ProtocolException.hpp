#pragma once

#include "../../JString.hpp"
#include "./ProtocolException.def.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	inline ProtocolException::ProtocolException()
		: java::io::IOException(
			"java.net.ProtocolException",
			"()V"
		) {}
	inline ProtocolException::ProtocolException(JString arg0)
		: java::io::IOException(
			"java.net.ProtocolException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::net

// Base class headers
#include "../lang/Exception.hpp"
#include "../io/IOException.hpp"

