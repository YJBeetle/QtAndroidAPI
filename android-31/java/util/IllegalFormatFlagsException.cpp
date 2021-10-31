#include "./IllegalFormatFlagsException.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	IllegalFormatFlagsException::IllegalFormatFlagsException(QAndroidJniObject obj) : java::util::IllegalFormatException(obj) {}
	
	// Constructors
	IllegalFormatFlagsException::IllegalFormatFlagsException(jstring arg0)
		: java::util::IllegalFormatException(
			"java.util.IllegalFormatFlagsException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	jstring IllegalFormatFlagsException::getFlags()
	{
		return callObjectMethod(
			"getFlags",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring IllegalFormatFlagsException::getMessage()
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util

