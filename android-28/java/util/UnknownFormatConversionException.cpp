#include "../../JString.hpp"
#include "./UnknownFormatConversionException.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	UnknownFormatConversionException::UnknownFormatConversionException(QAndroidJniObject obj) : java::util::IllegalFormatException(obj) {}
	
	// Constructors
	UnknownFormatConversionException::UnknownFormatConversionException(JString arg0)
		: java::util::IllegalFormatException(
			"java.util.UnknownFormatConversionException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	JString UnknownFormatConversionException::getConversion()
	{
		return callObjectMethod(
			"getConversion",
			"()Ljava/lang/String;"
		);
	}
	JString UnknownFormatConversionException::getMessage()
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util

