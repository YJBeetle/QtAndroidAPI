#include "../../JString.hpp"
#include "./IllegalFormatPrecisionException.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	IllegalFormatPrecisionException::IllegalFormatPrecisionException(QJniObject obj) : java::util::IllegalFormatException(obj) {}
	
	// Constructors
	IllegalFormatPrecisionException::IllegalFormatPrecisionException(jint arg0)
		: java::util::IllegalFormatException(
			"java.util.IllegalFormatPrecisionException",
			"(I)V",
			arg0
		) {}
	
	// Methods
	JString IllegalFormatPrecisionException::getMessage()
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
	jint IllegalFormatPrecisionException::getPrecision()
	{
		return callMethod<jint>(
			"getPrecision",
			"()I"
		);
	}
} // namespace java::util

