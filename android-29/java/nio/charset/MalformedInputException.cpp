#include "./MalformedInputException.hpp"

namespace java::nio::charset
{
	// Fields
	
	MalformedInputException::MalformedInputException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MalformedInputException::MalformedInputException(jint &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.charset.MalformedInputException",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	jint MalformedInputException::getInputLength()
	{
		return __thiz.callMethod<jint>(
			"getInputLength",
			"()I"
		);
	}
	jstring MalformedInputException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::nio::charset

