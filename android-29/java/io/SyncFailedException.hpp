#pragma once

#include "../../JString.hpp"
#include "./SyncFailedException.def.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	inline SyncFailedException::SyncFailedException(JString arg0)
		: java::io::IOException(
			"java.io.SyncFailedException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::io

// Base class headers
#include "../lang/Exception.hpp"
#include "./IOException.hpp"

