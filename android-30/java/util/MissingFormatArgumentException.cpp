#include "../../JString.hpp"
#include "./MissingFormatArgumentException.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	MissingFormatArgumentException::MissingFormatArgumentException(QJniObject obj) : java::util::IllegalFormatException(obj) {}
	
	// Constructors
	MissingFormatArgumentException::MissingFormatArgumentException(JString arg0)
		: java::util::IllegalFormatException(
			"java.util.MissingFormatArgumentException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	JString MissingFormatArgumentException::getFormatSpecifier()
	{
		return callObjectMethod(
			"getFormatSpecifier",
			"()Ljava/lang/String;"
		);
	}
	JString MissingFormatArgumentException::getMessage()
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util

