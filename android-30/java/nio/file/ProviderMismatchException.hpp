#pragma once

#include "../../../JString.hpp"
#include "./ProviderMismatchException.def.hpp"

namespace java::nio::file
{
	// Fields
	
	// Constructors
	inline ProviderMismatchException::ProviderMismatchException()
		: java::lang::IllegalArgumentException(
			"java.nio.file.ProviderMismatchException",
			"()V"
		) {}
	inline ProviderMismatchException::ProviderMismatchException(JString arg0)
		: java::lang::IllegalArgumentException(
			"java.nio.file.ProviderMismatchException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::nio::file

// Base class headers
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalArgumentException.hpp"

