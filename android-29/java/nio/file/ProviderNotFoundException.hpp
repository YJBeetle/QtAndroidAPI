#pragma once

#include "../../../JString.hpp"
#include "./ProviderNotFoundException.def.hpp"

namespace java::nio::file
{
	// Fields
	
	// Constructors
	inline ProviderNotFoundException::ProviderNotFoundException()
		: java::lang::RuntimeException(
			"java.nio.file.ProviderNotFoundException",
			"()V"
		) {}
	inline ProviderNotFoundException::ProviderNotFoundException(JString arg0)
		: java::lang::RuntimeException(
			"java.nio.file.ProviderNotFoundException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::nio::file

// Base class headers
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"

