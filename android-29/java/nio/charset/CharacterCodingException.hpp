#pragma once

#include "./CharacterCodingException.def.hpp"

namespace java::nio::charset
{
	// Fields
	
	// Constructors
	inline CharacterCodingException::CharacterCodingException()
		: java::io::IOException(
			"java.nio.charset.CharacterCodingException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::charset

// Base class headers
#include "../../lang/Exception.hpp"
#include "../../io/IOException.hpp"

