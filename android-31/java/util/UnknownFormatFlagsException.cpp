#include "./UnknownFormatFlagsException.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	UnknownFormatFlagsException::UnknownFormatFlagsException(QJniObject obj) : java::util::IllegalFormatException(obj) {}
	
	// Constructors
	UnknownFormatFlagsException::UnknownFormatFlagsException(jstring arg0)
		: java::util::IllegalFormatException(
			"java.util.UnknownFormatFlagsException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	jstring UnknownFormatFlagsException::getFlags()
	{
		return callObjectMethod(
			"getFlags",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UnknownFormatFlagsException::getMessage()
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util

