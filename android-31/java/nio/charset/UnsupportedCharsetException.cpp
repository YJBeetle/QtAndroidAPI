#include "./UnsupportedCharsetException.hpp"

namespace java::nio::charset
{
	// Fields
	
	// QAndroidJniObject forward
	UnsupportedCharsetException::UnsupportedCharsetException(QAndroidJniObject obj) : java::lang::IllegalArgumentException(obj) {}
	
	// Constructors
	UnsupportedCharsetException::UnsupportedCharsetException(jstring arg0)
		: java::lang::IllegalArgumentException(
			"java.nio.charset.UnsupportedCharsetException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	jstring UnsupportedCharsetException::getCharsetName()
	{
		return callObjectMethod(
			"getCharsetName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::nio::charset

