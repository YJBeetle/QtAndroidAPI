#pragma once

#include "../../JString.hpp"
#include "./MissingFormatArgumentException.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	inline MissingFormatArgumentException::MissingFormatArgumentException(JString arg0)
		: java::util::IllegalFormatException(
			"java.util.MissingFormatArgumentException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline JString MissingFormatArgumentException::getFormatSpecifier() const
	{
		return callObjectMethod(
			"getFormatSpecifier",
			"()Ljava/lang/String;"
		);
	}
	inline JString MissingFormatArgumentException::getMessage() const
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util

// Base class headers
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
#include "../lang/IllegalArgumentException.hpp"
#include "./IllegalFormatException.hpp"

