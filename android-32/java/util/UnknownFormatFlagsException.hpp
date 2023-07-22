#pragma once

#include "../../JString.hpp"
#include "./UnknownFormatFlagsException.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	inline UnknownFormatFlagsException::UnknownFormatFlagsException(JString arg0)
		: java::util::IllegalFormatException(
			"java.util.UnknownFormatFlagsException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline JString UnknownFormatFlagsException::getFlags() const
	{
		return callObjectMethod(
			"getFlags",
			"()Ljava/lang/String;"
		);
	}
	inline JString UnknownFormatFlagsException::getMessage() const
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
