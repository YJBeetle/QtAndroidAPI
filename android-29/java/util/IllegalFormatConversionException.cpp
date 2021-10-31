#include "./IllegalFormatConversionException.hpp"

namespace java::util
{
	// Fields
	
	IllegalFormatConversionException::IllegalFormatConversionException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	IllegalFormatConversionException::IllegalFormatConversionException(jchar arg0, jclass arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.IllegalFormatConversionException",
			"(CLjava/lang/Class;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jclass IllegalFormatConversionException::getArgumentClass()
	{
		return __thiz.callObjectMethod(
			"getArgumentClass",
			"()Ljava/lang/Class;"
		).object<jclass>();
	}
	jchar IllegalFormatConversionException::getConversion()
	{
		return __thiz.callMethod<jchar>(
			"getConversion",
			"()C"
		);
	}
	jstring IllegalFormatConversionException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util

