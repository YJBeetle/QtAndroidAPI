#include "./DuplicateFormatFlagsException.hpp"

namespace java::util
{
	// Fields
	
	DuplicateFormatFlagsException::DuplicateFormatFlagsException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DuplicateFormatFlagsException::DuplicateFormatFlagsException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.DuplicateFormatFlagsException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	DuplicateFormatFlagsException::DuplicateFormatFlagsException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.DuplicateFormatFlagsException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	jstring DuplicateFormatFlagsException::getFlags()
	{
		return __thiz.callObjectMethod(
			"getFlags",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DuplicateFormatFlagsException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util

