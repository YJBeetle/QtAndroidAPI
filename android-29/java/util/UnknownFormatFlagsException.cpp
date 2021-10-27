#include "./UnknownFormatFlagsException.hpp"

namespace java::util
{
	// Fields
	
	UnknownFormatFlagsException::UnknownFormatFlagsException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	UnknownFormatFlagsException::UnknownFormatFlagsException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.UnknownFormatFlagsException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	UnknownFormatFlagsException::UnknownFormatFlagsException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.UnknownFormatFlagsException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	jstring UnknownFormatFlagsException::getFlags()
	{
		return __thiz.callObjectMethod(
			"getFlags",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UnknownFormatFlagsException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util

