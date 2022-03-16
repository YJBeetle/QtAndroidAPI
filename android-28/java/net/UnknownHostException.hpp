#pragma once

#include "../../JString.hpp"
#include "./UnknownHostException.def.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	inline UnknownHostException::UnknownHostException()
		: java::io::IOException(
			"java.net.UnknownHostException",
			"()V"
		) {}
	inline UnknownHostException::UnknownHostException(JString arg0)
		: java::io::IOException(
			"java.net.UnknownHostException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::net

// Base class headers
#include "../lang/Exception.hpp"
#include "../io/IOException.hpp"

