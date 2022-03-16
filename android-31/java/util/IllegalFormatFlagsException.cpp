#include "../../JString.hpp"
#include "./IllegalFormatFlagsException.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	IllegalFormatFlagsException::IllegalFormatFlagsException(JString arg0)
		: java::util::IllegalFormatException(
			"java.util.IllegalFormatFlagsException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	JString IllegalFormatFlagsException::getFlags() const
	{
		return callObjectMethod(
			"getFlags",
			"()Ljava/lang/String;"
		);
	}
	JString IllegalFormatFlagsException::getMessage() const
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util

