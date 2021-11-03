#include "../../JClass.hpp"
#include "../../JString.hpp"
#include "./IllegalFormatConversionException.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	IllegalFormatConversionException::IllegalFormatConversionException(QJniObject obj) : java::util::IllegalFormatException(obj) {}
	
	// Constructors
	IllegalFormatConversionException::IllegalFormatConversionException(jchar arg0, JClass arg1)
		: java::util::IllegalFormatException(
			"java.util.IllegalFormatConversionException",
			"(CLjava/lang/Class;)V",
			arg0,
			arg1.object<jclass>()
		) {}
	
	// Methods
	JClass IllegalFormatConversionException::getArgumentClass()
	{
		return callObjectMethod(
			"getArgumentClass",
			"()Ljava/lang/Class;"
		);
	}
	jchar IllegalFormatConversionException::getConversion()
	{
		return callMethod<jchar>(
			"getConversion",
			"()C"
		);
	}
	JString IllegalFormatConversionException::getMessage()
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util

