#include "./TimeoutException.hpp"

namespace java::util::concurrent
{
	// Fields
	
	TimeoutException::TimeoutException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TimeoutException::TimeoutException()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.TimeoutException",
			"()V"
		);
	}
	TimeoutException::TimeoutException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.TimeoutException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	TimeoutException::TimeoutException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.TimeoutException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::util::concurrent

