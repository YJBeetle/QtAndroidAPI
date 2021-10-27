#include "./DateTimeException.hpp"

namespace java::time
{
	// Fields
	
	DateTimeException::DateTimeException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DateTimeException::DateTimeException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.time.DateTimeException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	DateTimeException::DateTimeException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.time.DateTimeException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	DateTimeException::DateTimeException(jstring &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.time.DateTimeException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	DateTimeException::DateTimeException(const QString &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.time.DateTimeException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace java::time

