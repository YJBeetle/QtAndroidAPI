#pragma once

#include "../../JString.hpp"
#include "./IllegalFormatFlagsException.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	inline IllegalFormatFlagsException::IllegalFormatFlagsException(JString arg0)
		: java::util::IllegalFormatException(
			"java.util.IllegalFormatFlagsException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline JString IllegalFormatFlagsException::getFlags() const
	{
		return callObjectMethod(
			"getFlags",
			"()Ljava/lang/String;"
		);
	}
	inline JString IllegalFormatFlagsException::getMessage() const
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
