#include "./UnsupportedCharsetException.hpp"

namespace java::nio::charset
{
	// Fields
	
	UnsupportedCharsetException::UnsupportedCharsetException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	UnsupportedCharsetException::UnsupportedCharsetException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.charset.UnsupportedCharsetException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
	jstring UnsupportedCharsetException::getCharsetName()
	{
		return __thiz.callObjectMethod(
			"getCharsetName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::nio::charset

