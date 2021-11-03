#include "../../JString.hpp"
#include "./FormatFlagsConversionMismatchException.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	FormatFlagsConversionMismatchException::FormatFlagsConversionMismatchException(QAndroidJniObject obj) : java::util::IllegalFormatException(obj) {}
	
	// Constructors
	FormatFlagsConversionMismatchException::FormatFlagsConversionMismatchException(JString arg0, jchar arg1)
		: java::util::IllegalFormatException(
			"java.util.FormatFlagsConversionMismatchException",
			"(Ljava/lang/String;C)V",
			arg0.object<jstring>(),
			arg1
		) {}
	
	// Methods
	jchar FormatFlagsConversionMismatchException::getConversion() const
	{
		return callMethod<jchar>(
			"getConversion",
			"()C"
		);
	}
	JString FormatFlagsConversionMismatchException::getFlags() const
	{
		return callObjectMethod(
			"getFlags",
			"()Ljava/lang/String;"
		);
	}
	JString FormatFlagsConversionMismatchException::getMessage() const
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util

