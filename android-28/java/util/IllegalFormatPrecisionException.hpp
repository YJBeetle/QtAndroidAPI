#pragma once

#include "../../JString.hpp"
#include "./IllegalFormatPrecisionException.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	inline IllegalFormatPrecisionException::IllegalFormatPrecisionException(jint arg0)
		: java::util::IllegalFormatException(
			"java.util.IllegalFormatPrecisionException",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline JString IllegalFormatPrecisionException::getMessage() const
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
	inline jint IllegalFormatPrecisionException::getPrecision() const
	{
		return callMethod<jint>(
			"getPrecision",
			"()I"
		);
	}
} // namespace java::util

// Base class headers
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
#include "../lang/IllegalArgumentException.hpp"
#include "./IllegalFormatException.hpp"

