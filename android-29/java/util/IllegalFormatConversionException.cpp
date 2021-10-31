#include "./IllegalFormatConversionException.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	IllegalFormatConversionException::IllegalFormatConversionException(QJniObject obj) : java::util::IllegalFormatException(obj) {}
	
	// Constructors
	IllegalFormatConversionException::IllegalFormatConversionException(jchar arg0, jclass arg1)
		: java::util::IllegalFormatException(
			"java.util.IllegalFormatConversionException",
			"(CLjava/lang/Class;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jclass IllegalFormatConversionException::getArgumentClass()
	{
		return callObjectMethod(
			"getArgumentClass",
			"()Ljava/lang/Class;"
		).object<jclass>();
	}
	jchar IllegalFormatConversionException::getConversion()
	{
		return callMethod<jchar>(
			"getConversion",
			"()C"
		);
	}
	jstring IllegalFormatConversionException::getMessage()
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util

