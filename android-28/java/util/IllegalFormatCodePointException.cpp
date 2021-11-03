#include "../../JString.hpp"
#include "./IllegalFormatCodePointException.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	IllegalFormatCodePointException::IllegalFormatCodePointException(QAndroidJniObject obj) : java::util::IllegalFormatException(obj) {}
	
	// Constructors
	IllegalFormatCodePointException::IllegalFormatCodePointException(jint arg0)
		: java::util::IllegalFormatException(
			"java.util.IllegalFormatCodePointException",
			"(I)V",
			arg0
		) {}
	
	// Methods
	jint IllegalFormatCodePointException::getCodePoint()
	{
		return callMethod<jint>(
			"getCodePoint",
			"()I"
		);
	}
	JString IllegalFormatCodePointException::getMessage()
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util

