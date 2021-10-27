#include "./IllegalFormatPrecisionException.hpp"

namespace java::util
{
	// Fields
	
	IllegalFormatPrecisionException::IllegalFormatPrecisionException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	IllegalFormatPrecisionException::IllegalFormatPrecisionException(jint &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.IllegalFormatPrecisionException",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	jstring IllegalFormatPrecisionException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint IllegalFormatPrecisionException::getPrecision()
	{
		return __thiz.callMethod<jint>(
			"getPrecision",
			"()I"
		);
	}
} // namespace java::util

