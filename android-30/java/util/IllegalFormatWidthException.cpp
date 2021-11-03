#include "../../JString.hpp"
#include "./IllegalFormatWidthException.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	IllegalFormatWidthException::IllegalFormatWidthException(QJniObject obj) : java::util::IllegalFormatException(obj) {}
	
	// Constructors
	IllegalFormatWidthException::IllegalFormatWidthException(jint arg0)
		: java::util::IllegalFormatException(
			"java.util.IllegalFormatWidthException",
			"(I)V",
			arg0
		) {}
	
	// Methods
	JString IllegalFormatWidthException::getMessage()
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
	jint IllegalFormatWidthException::getWidth()
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
} // namespace java::util

