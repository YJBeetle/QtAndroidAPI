#include "./UnknownFormatConversionException.hpp"

namespace java::util
{
	// Fields
	
	UnknownFormatConversionException::UnknownFormatConversionException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	UnknownFormatConversionException::UnknownFormatConversionException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.UnknownFormatConversionException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
	jstring UnknownFormatConversionException::getConversion()
	{
		return __thiz.callObjectMethod(
			"getConversion",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UnknownFormatConversionException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util

