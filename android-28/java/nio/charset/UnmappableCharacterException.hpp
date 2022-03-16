#pragma once

#include "../../../JString.hpp"
#include "./UnmappableCharacterException.def.hpp"

namespace java::nio::charset
{
	// Fields
	
	// Constructors
	inline UnmappableCharacterException::UnmappableCharacterException(jint arg0)
		: java::nio::charset::CharacterCodingException(
			"java.nio.charset.UnmappableCharacterException",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline jint UnmappableCharacterException::getInputLength() const
	{
		return callMethod<jint>(
			"getInputLength",
			"()I"
		);
	}
	inline JString UnmappableCharacterException::getMessage() const
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

