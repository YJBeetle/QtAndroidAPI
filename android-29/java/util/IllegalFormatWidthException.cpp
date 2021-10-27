#include "./IllegalFormatWidthException.hpp"

namespace java::util
{
	// Fields
	
	IllegalFormatWidthException::IllegalFormatWidthException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	IllegalFormatWidthException::IllegalFormatWidthException(jint &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.IllegalFormatWidthException",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	jstring IllegalFormatWidthException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint IllegalFormatWidthException::getWidth()
	{
		return __thiz.callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
} // namespace java::util

