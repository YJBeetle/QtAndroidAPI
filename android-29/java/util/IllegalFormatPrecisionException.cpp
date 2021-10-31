#include "./IllegalFormatPrecisionException.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	IllegalFormatPrecisionException::IllegalFormatPrecisionException(QAndroidJniObject obj) : java::util::IllegalFormatException(obj) {}
	
	// Constructors
	IllegalFormatPrecisionException::IllegalFormatPrecisionException(jint arg0)
		: java::util::IllegalFormatException(
			"java.util.IllegalFormatPrecisionException",
			"(I)V",
			arg0
		) {}
	
	// Methods
	jstring IllegalFormatPrecisionException::getMessage()
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint IllegalFormatPrecisionException::getPrecision()
	{
		return callMethod<jint>(
			"getPrecision",
			"()I"
		);
	}
} // namespace java::util

