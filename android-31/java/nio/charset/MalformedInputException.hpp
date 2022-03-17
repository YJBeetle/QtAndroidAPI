#pragma once

#include "../../../JString.hpp"
#include "./MalformedInputException.def.hpp"

namespace java::nio::charset
{
	// Fields
	
	// Constructors
	inline MalformedInputException::MalformedInputException(jint arg0)
		: java::nio::charset::CharacterCodingException(
			"java.nio.charset.MalformedInputException",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline jint MalformedInputException::getInputLength() const
	{
		return callMethod<jint>(
			"getInputLength",
			"()I"
		);
	}
	inline JString MalformedInputException::getMessage() const
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::nio::charset

// Base class headers
#include "../../lang/Exception.hpp"
#include "../../io/IOException.hpp"
#include "./CharacterCodingException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::nio::charset;
#endif
