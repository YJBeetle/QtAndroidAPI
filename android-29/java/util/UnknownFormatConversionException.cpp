#include "./UnknownFormatConversionException.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	UnknownFormatConversionException::UnknownFormatConversionException(QJniObject obj) : java::util::IllegalFormatException(obj) {}
	
	// Constructors
	UnknownFormatConversionException::UnknownFormatConversionException(jstring arg0)
		: java::util::IllegalFormatException(
			"java.util.UnknownFormatConversionException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	jstring UnknownFormatConversionException::getConversion()
	{
		return callObjectMethod(
			"getConversion",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UnknownFormatConversionException::getMessage()
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util

