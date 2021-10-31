#include "./CharacterCodingException.hpp"

namespace java::nio::charset
{
	// Fields
	
	// QJniObject forward
	CharacterCodingException::CharacterCodingException(QJniObject obj) : java::io::IOException(obj) {}
	
	// Constructors
	CharacterCodingException::CharacterCodingException()
		: java::io::IOException(
			"java.nio.charset.CharacterCodingException",
			"()V"
		) {}
	
	// Methods
} // namespace java::nio::charset

