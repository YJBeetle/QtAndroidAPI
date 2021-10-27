#include "./ExecutionException.hpp"

namespace java::util::concurrent
{
	// Fields
	
	ExecutionException::ExecutionException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ExecutionException::ExecutionException(jthrowable &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ExecutionException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	ExecutionException::ExecutionException(jstring &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ExecutionException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	ExecutionException::ExecutionException(const QString &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ExecutionException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace java::util::concurrent

