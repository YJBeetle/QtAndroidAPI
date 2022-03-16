#pragma once

#include "../../JString.hpp"
#include "./FormatFlagsConversionMismatchException.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	inline FormatFlagsConversionMismatchException::FormatFlagsConversionMismatchException(JString arg0, jchar arg1)
		: java::util::IllegalFormatException(
			"java.util.FormatFlagsConversionMismatchException",
			"(Ljava/lang/String;C)V",
			arg0.object<jstring>(),
			arg1
		) {}
	
	// Methods
	inline jchar FormatFlagsConversionMismatchException::getConversion() const
	{
		return callMethod<jchar>(
			"getConversion",
			"()C"
		);
	}
	inline JString FormatFlagsConversionMismatchException::getFlags() const
	{
		return callObjectMethod(
			"getFlags",
			"()Ljava/lang/String;"
		);
	}
	inline JString FormatFlagsConversionMismatchException::getMessage() const
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

