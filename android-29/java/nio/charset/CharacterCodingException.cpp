#include "./CharacterCodingException.hpp"

namespace java::nio::charset
{
	// Fields
	
	CharacterCodingException::CharacterCodingException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CharacterCodingException::CharacterCodingException()
	{
		__thiz = QAndroidJniObject(
			"java.nio.charset.CharacterCodingException",
			"()V"
		);
	}
	
	// Methods
} // namespace java::nio::charset

