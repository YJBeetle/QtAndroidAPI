#include "./CharConversionException.hpp"

namespace java::io
{
	// Fields
	
	CharConversionException::CharConversionException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CharConversionException::CharConversionException()
	{
		__thiz = QAndroidJniObject(
			"java.io.CharConversionException",
			"()V"
		);
	}
	CharConversionException::CharConversionException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.CharConversionException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace java::io

