#include "../../JString.hpp"
#include "./MissingFormatWidthException.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	MissingFormatWidthException::MissingFormatWidthException(QJniObject obj) : java::util::IllegalFormatException(obj) {}
	
	// Constructors
	MissingFormatWidthException::MissingFormatWidthException(JString arg0)
		: java::util::IllegalFormatException(
			"java.util.MissingFormatWidthException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	JString MissingFormatWidthException::getFormatSpecifier()
	{
		return callObjectMethod(
			"getFormatSpecifier",
			"()Ljava/lang/String;"
		);
	}
	JString MissingFormatWidthException::getMessage()
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util

