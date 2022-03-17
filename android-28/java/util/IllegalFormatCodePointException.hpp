#pragma once

#include "../../JString.hpp"
#include "./IllegalFormatCodePointException.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	inline IllegalFormatCodePointException::IllegalFormatCodePointException(jint arg0)
		: java::util::IllegalFormatException(
			"java.util.IllegalFormatCodePointException",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline jint IllegalFormatCodePointException::getCodePoint() const
	{
		return callMethod<jint>(
			"getCodePoint",
			"()I"
		);
	}
	inline JString IllegalFormatCodePointException::getMessage() const
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

