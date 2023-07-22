#pragma once

#include "../../JString.hpp"
#include "./DuplicateFormatFlagsException.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	inline DuplicateFormatFlagsException::DuplicateFormatFlagsException(JString arg0)
		: java::util::IllegalFormatException(
			"java.util.DuplicateFormatFlagsException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline JString DuplicateFormatFlagsException::getFlags() const
	{
		return callObjectMethod(
			"getFlags",
			"()Ljava/lang/String;"
		);
	}
	inline JString DuplicateFormatFlagsException::getMessage() const
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
