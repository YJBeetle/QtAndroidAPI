#include "./DuplicateFormatFlagsException.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	DuplicateFormatFlagsException::DuplicateFormatFlagsException(QAndroidJniObject obj) : java::util::IllegalFormatException(obj) {}
	
	// Constructors
	DuplicateFormatFlagsException::DuplicateFormatFlagsException(jstring arg0)
		: java::util::IllegalFormatException(
			"java.util.DuplicateFormatFlagsException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	jstring DuplicateFormatFlagsException::getFlags()
	{
		return callObjectMethod(
			"getFlags",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DuplicateFormatFlagsException::getMessage()
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util

