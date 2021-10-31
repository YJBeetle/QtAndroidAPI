#include "./IllegalFormatCodePointException.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	IllegalFormatCodePointException::IllegalFormatCodePointException(QJniObject obj) : java::util::IllegalFormatException(obj) {}
	
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
	jstring IllegalFormatCodePointException::getMessage()
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util

