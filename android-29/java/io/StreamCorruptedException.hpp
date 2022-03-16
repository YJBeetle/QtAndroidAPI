#pragma once

#include "../../JString.hpp"
#include "./StreamCorruptedException.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	inline StreamCorruptedException::StreamCorruptedException()
		: java::io::ObjectStreamException(
			"java.io.StreamCorruptedException",
			"()V"
		) {}
	inline StreamCorruptedException::StreamCorruptedException(JString arg0)
		: java::io::ObjectStreamException(
			"java.io.StreamCorruptedException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::io

// Base class headers
#include "../lang/Exception.hpp"
#include "./IOException.hpp"
#include "./ObjectStreamException.hpp"

