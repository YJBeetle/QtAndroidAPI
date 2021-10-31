#include "./UnmappableCharacterException.hpp"

namespace java::nio::charset
{
	// Fields
	
	// QAndroidJniObject forward
	UnmappableCharacterException::UnmappableCharacterException(QAndroidJniObject obj) : java::nio::charset::CharacterCodingException(obj) {}
	
	// Constructors
	UnmappableCharacterException::UnmappableCharacterException(jint arg0)
		: java::nio::charset::CharacterCodingException(
			"java.nio.charset.UnmappableCharacterException",
			"(I)V",
			arg0
		) {}
	
	// Methods
	jint UnmappableCharacterException::getInputLength()
	{
		return callMethod<jint>(
			"getInputLength",
			"()I"
		);
	}
	jstring UnmappableCharacterException::getMessage()
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::nio::charset

