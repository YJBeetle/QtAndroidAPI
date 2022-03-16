#include "../../JString.hpp"
#include "./IllegalFormatWidthException.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	IllegalFormatWidthException::IllegalFormatWidthException(jint arg0)
		: java::util::IllegalFormatException(
			"java.util.IllegalFormatWidthException",
			"(I)V",
			arg0
		) {}
	
	// Methods
	JString IllegalFormatWidthException::getMessage() const
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
	jint IllegalFormatWidthException::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
} // namespace java::util

