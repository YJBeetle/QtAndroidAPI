#pragma once

#include "../../../JString.hpp"
#include "./UnsupportedCharsetException.def.hpp"

namespace java::nio::charset
{
	// Fields
	
	// Constructors
	inline UnsupportedCharsetException::UnsupportedCharsetException(JString arg0)
		: java::lang::IllegalArgumentException(
			"java.nio.charset.UnsupportedCharsetException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline JString UnsupportedCharsetException::getCharsetName() const
	{
		return callObjectMethod(
			"getCharsetName",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::nio::charset

// Base class headers
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalArgumentException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::nio::charset;
#endif
