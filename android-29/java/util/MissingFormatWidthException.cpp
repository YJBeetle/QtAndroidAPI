#include "./MissingFormatWidthException.hpp"

namespace java::util
{
	// Fields
	
	MissingFormatWidthException::MissingFormatWidthException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MissingFormatWidthException::MissingFormatWidthException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.MissingFormatWidthException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	MissingFormatWidthException::MissingFormatWidthException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.MissingFormatWidthException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	jstring MissingFormatWidthException::getFormatSpecifier()
	{
		return __thiz.callObjectMethod(
			"getFormatSpecifier",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MissingFormatWidthException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util

