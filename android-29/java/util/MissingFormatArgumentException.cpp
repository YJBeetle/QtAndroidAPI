#include "../../JString.hpp"
#include "./MissingFormatArgumentException.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	MissingFormatArgumentException::MissingFormatArgumentException(JString arg0)
		: java::util::IllegalFormatException(
			"java.util.MissingFormatArgumentException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	JString MissingFormatArgumentException::getFormatSpecifier() const
	{
		return callObjectMethod(
			"getFormatSpecifier",
			"()Ljava/lang/String;"
		);
	}
	JString MissingFormatArgumentException::getMessage() const
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util

