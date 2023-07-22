#pragma once

#include "../../JString.hpp"
#include "./MissingFormatWidthException.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	inline MissingFormatWidthException::MissingFormatWidthException(JString arg0)
		: java::util::IllegalFormatException(
			"java.util.MissingFormatWidthException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline JString MissingFormatWidthException::getFormatSpecifier() const
	{
		return callObjectMethod(
			"getFormatSpecifier",
			"()Ljava/lang/String;"
		);
	}
	inline JString MissingFormatWidthException::getMessage() const
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
