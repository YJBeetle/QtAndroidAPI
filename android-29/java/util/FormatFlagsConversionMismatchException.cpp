#include "./FormatFlagsConversionMismatchException.hpp"

namespace java::util
{
	// Fields
	
	FormatFlagsConversionMismatchException::FormatFlagsConversionMismatchException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	FormatFlagsConversionMismatchException::FormatFlagsConversionMismatchException(jstring arg0, jchar arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.FormatFlagsConversionMismatchException",
			"(Ljava/lang/String;C)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jchar FormatFlagsConversionMismatchException::getConversion()
	{
		return __thiz.callMethod<jchar>(
			"getConversion",
			"()C"
		);
	}
	jstring FormatFlagsConversionMismatchException::getFlags()
	{
		return __thiz.callObjectMethod(
			"getFlags",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring FormatFlagsConversionMismatchException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util

