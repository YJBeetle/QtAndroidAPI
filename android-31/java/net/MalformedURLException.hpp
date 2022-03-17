#pragma once

#include "../../JString.hpp"
#include "./MalformedURLException.def.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	inline MalformedURLException::MalformedURLException()
		: java::io::IOException(
			"java.net.MalformedURLException",
			"()V"
		) {}
	inline MalformedURLException::MalformedURLException(JString arg0)
		: java::io::IOException(
			"java.net.MalformedURLException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::net

// Base class headers
#include "../lang/Exception.hpp"
#include "../io/IOException.hpp"

