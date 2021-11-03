#include "../../JString.hpp"
#include "./UnknownFormatFlagsException.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	UnknownFormatFlagsException::UnknownFormatFlagsException(QAndroidJniObject obj) : java::util::IllegalFormatException(obj) {}
	
	// Constructors
	UnknownFormatFlagsException::UnknownFormatFlagsException(JString arg0)
		: java::util::IllegalFormatException(
			"java.util.UnknownFormatFlagsException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	JString UnknownFormatFlagsException::getFlags() const
	{
		return callObjectMethod(
			"getFlags",
			"()Ljava/lang/String;"
		);
	}
	JString UnknownFormatFlagsException::getMessage() const
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util

