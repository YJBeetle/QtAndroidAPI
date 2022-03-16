#include "./CharacterCodingException.hpp"

namespace java::nio::charset
{
	// Fields
	
	// Constructors
	CharacterCodingException::CharacterCodingException()
		: java::io::IOException(
			"java.nio.charset.CharacterCodingException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::charset

