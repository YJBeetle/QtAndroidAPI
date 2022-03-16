#include "../../JString.hpp"
#include "./MissingFormatWidthException.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	MissingFormatWidthException::MissingFormatWidthException(JString arg0)
		: java::util::IllegalFormatException(
			"java.util.MissingFormatWidthException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	JString MissingFormatWidthException::getFormatSpecifier() const
	{
		return callObjectMethod(
			"getFormatSpecifier",
			"()Ljava/lang/String;"
		);
	}
	JString MissingFormatWidthException::getMessage() const
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util

