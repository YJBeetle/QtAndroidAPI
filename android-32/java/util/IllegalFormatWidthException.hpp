#pragma once

#include "../../JString.hpp"
#include "./IllegalFormatWidthException.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	inline IllegalFormatWidthException::IllegalFormatWidthException(jint arg0)
		: java::util::IllegalFormatException(
			"java.util.IllegalFormatWidthException",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline JString IllegalFormatWidthException::getMessage() const
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
	inline jint IllegalFormatWidthException::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
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
