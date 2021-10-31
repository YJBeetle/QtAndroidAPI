#include "./IllegalCharsetNameException.hpp"

namespace java::nio::charset
{
	// Fields
	
	IllegalCharsetNameException::IllegalCharsetNameException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	IllegalCharsetNameException::IllegalCharsetNameException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.charset.IllegalCharsetNameException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
	jstring IllegalCharsetNameException::getCharsetName()
	{
		return __thiz.callObjectMethod(
			"getCharsetName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::nio::charset

