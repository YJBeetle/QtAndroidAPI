#include "../../../JString.hpp"
#include "./MalformedInputException.hpp"

namespace java::nio::charset
{
	// Fields
	
	// Constructors
	MalformedInputException::MalformedInputException(jint arg0)
		: java::nio::charset::CharacterCodingException(
			"java.nio.charset.MalformedInputException",
			"(I)V",
			arg0
		) {}
	
	// Methods
	jint MalformedInputException::getInputLength() const
	{
		return callMethod<jint>(
			"getInputLength",
			"()I"
		);
	}
	JString MalformedInputException::getMessage() const
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::nio::charset

