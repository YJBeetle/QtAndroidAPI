#include "./CompletionException.hpp"

namespace java::util::concurrent
{
	// Fields
	
	CompletionException::CompletionException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CompletionException::CompletionException(jthrowable &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.CompletionException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	CompletionException::CompletionException(jstring &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.CompletionException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	CompletionException::CompletionException(const QString &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.CompletionException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace java::util::concurrent

