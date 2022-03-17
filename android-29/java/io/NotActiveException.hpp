#pragma once

#include "../../JString.hpp"
#include "./NotActiveException.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	inline NotActiveException::NotActiveException()
		: java::io::ObjectStreamException(
			"java.io.NotActiveException",
			"()V"
		) {}
	inline NotActiveException::NotActiveException(JString arg0)
		: java::io::ObjectStreamException(
			"java.io.NotActiveException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::io

// Base class headers
#include "../lang/Exception.hpp"
#include "./IOException.hpp"
#include "./ObjectStreamException.hpp"

