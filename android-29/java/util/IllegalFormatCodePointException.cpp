#include "./IllegalFormatCodePointException.hpp"

namespace java::util
{
	// Fields
	
	IllegalFormatCodePointException::IllegalFormatCodePointException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	IllegalFormatCodePointException::IllegalFormatCodePointException(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.IllegalFormatCodePointException",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	jint IllegalFormatCodePointException::getCodePoint()
	{
		return __thiz.callMethod<jint>(
			"getCodePoint",
			"()I"
		);
	}
	jstring IllegalFormatCodePointException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util

