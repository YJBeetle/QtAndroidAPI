#include "./MissingFormatArgumentException.hpp"

namespace java::util
{
	// Fields
	
	MissingFormatArgumentException::MissingFormatArgumentException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MissingFormatArgumentException::MissingFormatArgumentException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.MissingFormatArgumentException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
	jstring MissingFormatArgumentException::getFormatSpecifier()
	{
		return __thiz.callObjectMethod(
			"getFormatSpecifier",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MissingFormatArgumentException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util

