#include "./RejectedExecutionException.hpp"

namespace java::util::concurrent
{
	// Fields
	
	RejectedExecutionException::RejectedExecutionException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RejectedExecutionException::RejectedExecutionException()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.RejectedExecutionException",
			"()V"
		);
	}
	RejectedExecutionException::RejectedExecutionException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.RejectedExecutionException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	RejectedExecutionException::RejectedExecutionException(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.RejectedExecutionException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	RejectedExecutionException::RejectedExecutionException(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.RejectedExecutionException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace java::util::concurrent

