#include "./MalformedInputException.hpp"

namespace java::nio::charset
{
	// Fields
	
	// QJniObject forward
	MalformedInputException::MalformedInputException(QJniObject obj) : java::nio::charset::CharacterCodingException(obj) {}
	
	// Constructors
	MalformedInputException::MalformedInputException(jint arg0)
		: java::nio::charset::CharacterCodingException(
			"java.nio.charset.MalformedInputException",
			"(I)V",
			arg0
		) {}
	
	// Methods
	jint MalformedInputException::getInputLength()
	{
		return callMethod<jint>(
			"getInputLength",
			"()I"
		);
	}
	jstring MalformedInputException::getMessage()
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::nio::charset

