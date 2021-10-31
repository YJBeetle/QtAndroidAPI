#include "./UnsupportedEncodingException.hpp"

namespace java::io
{
	// Fields
	
	UnsupportedEncodingException::UnsupportedEncodingException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	UnsupportedEncodingException::UnsupportedEncodingException()
	{
		__thiz = QAndroidJniObject(
			"java.io.UnsupportedEncodingException",
			"()V"
		);
	}
	UnsupportedEncodingException::UnsupportedEncodingException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.UnsupportedEncodingException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace java::io

