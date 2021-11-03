#include "../../../JString.hpp"
#include "./UnmappableCharacterException.hpp"

namespace java::nio::charset
{
	// Fields
	
	// QJniObject forward
	UnmappableCharacterException::UnmappableCharacterException(QJniObject obj) : java::nio::charset::CharacterCodingException(obj) {}
	
	// Constructors
	UnmappableCharacterException::UnmappableCharacterException(jint arg0)
		: java::nio::charset::CharacterCodingException(
			"java.nio.charset.UnmappableCharacterException",
			"(I)V",
			arg0
		) {}
	
	// Methods
	jint UnmappableCharacterException::getInputLength() const
	{
		return callMethod<jint>(
			"getInputLength",
			"()I"
		);
	}
	JString UnmappableCharacterException::getMessage() const
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::nio::charset

