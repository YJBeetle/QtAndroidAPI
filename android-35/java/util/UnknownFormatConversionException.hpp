#pragma once

#include "../../JString.hpp"
#include "./UnknownFormatConversionException.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	inline UnknownFormatConversionException::UnknownFormatConversionException(JString arg0)
		: java::util::IllegalFormatException(
			"java.util.UnknownFormatConversionException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline JString UnknownFormatConversionException::getConversion() const
	{
		return callObjectMethod(
			"getConversion",
			"()Ljava/lang/String;"
		);
	}
	inline JString UnknownFormatConversionException::getMessage() const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util;
#endif
