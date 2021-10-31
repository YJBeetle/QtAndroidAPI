#include "./IllegalFormatFlagsException.hpp"

namespace java::util
{
	// Fields
	
	IllegalFormatFlagsException::IllegalFormatFlagsException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	IllegalFormatFlagsException::IllegalFormatFlagsException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.IllegalFormatFlagsException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
	jstring IllegalFormatFlagsException::getFlags()
	{
		return __thiz.callObjectMethod(
			"getFlags",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring IllegalFormatFlagsException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util

