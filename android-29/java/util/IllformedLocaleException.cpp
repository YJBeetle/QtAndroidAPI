#include "./IllformedLocaleException.hpp"

namespace java::util
{
	// Fields
	
	IllformedLocaleException::IllformedLocaleException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	IllformedLocaleException::IllformedLocaleException()
	{
		__thiz = QAndroidJniObject(
			"java.util.IllformedLocaleException",
			"()V"
		);
	}
	IllformedLocaleException::IllformedLocaleException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.IllformedLocaleException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	IllformedLocaleException::IllformedLocaleException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.IllformedLocaleException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	IllformedLocaleException::IllformedLocaleException(jstring &arg0, jint &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.IllformedLocaleException",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	IllformedLocaleException::IllformedLocaleException(const QString &arg0, jint &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.IllformedLocaleException",
			"(Ljava/lang/String;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
	jint IllformedLocaleException::getErrorIndex()
	{
		return __thiz.callMethod<jint>(
			"getErrorIndex",
			"()I"
		);
	}
} // namespace java::util

