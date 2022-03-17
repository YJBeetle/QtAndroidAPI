#pragma once

#include "../../../JString.hpp"
#include "./IllegalCharsetNameException.def.hpp"

namespace java::nio::charset
{
	// Fields
	
	// Constructors
	inline IllegalCharsetNameException::IllegalCharsetNameException(JString arg0)
		: java::lang::IllegalArgumentException(
			"java.nio.charset.IllegalCharsetNameException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline JString IllegalCharsetNameException::getCharsetName() const
	{
		return callObjectMethod(
			"getCharsetName",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::nio::charset

// Base class headers
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalArgumentException.hpp"

