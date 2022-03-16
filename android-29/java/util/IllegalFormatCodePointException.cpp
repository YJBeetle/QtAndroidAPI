#include "../../JString.hpp"
#include "./IllegalFormatCodePointException.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	IllegalFormatCodePointException::IllegalFormatCodePointException(jint arg0)
		: java::util::IllegalFormatException(
			"java.util.IllegalFormatCodePointException",
			"(I)V",
			arg0
		) {}
	
	// Methods
	jint IllegalFormatCodePointException::getCodePoint() const
	{
		return callMethod<jint>(
			"getCodePoint",
			"()I"
		);
	}
	JString IllegalFormatCodePointException::getMessage() const
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util

