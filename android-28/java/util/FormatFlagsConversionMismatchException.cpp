#include "./FormatFlagsConversionMismatchException.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	FormatFlagsConversionMismatchException::FormatFlagsConversionMismatchException(QJniObject obj) : java::util::IllegalFormatException(obj) {}
	
	// Constructors
	FormatFlagsConversionMismatchException::FormatFlagsConversionMismatchException(jstring arg0, jchar arg1)
		: java::util::IllegalFormatException(
			"java.util.FormatFlagsConversionMismatchException",
			"(Ljava/lang/String;C)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jchar FormatFlagsConversionMismatchException::getConversion()
	{
		return callMethod<jchar>(
			"getConversion",
			"()C"
		);
	}
	jstring FormatFlagsConversionMismatchException::getFlags()
	{
		return callObjectMethod(
			"getFlags",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring FormatFlagsConversionMismatchException::getMessage()
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util

