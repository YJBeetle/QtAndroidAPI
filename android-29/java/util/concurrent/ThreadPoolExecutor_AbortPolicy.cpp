#include "./ThreadPoolExecutor.hpp"
#include "./ThreadPoolExecutor_AbortPolicy.hpp"

namespace java::util::concurrent
{
	// Fields
	
	ThreadPoolExecutor_AbortPolicy::ThreadPoolExecutor_AbortPolicy(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ThreadPoolExecutor_AbortPolicy::ThreadPoolExecutor_AbortPolicy()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ThreadPoolExecutor$AbortPolicy",
			"()V"
		);
	}
	
	// Methods
	void ThreadPoolExecutor_AbortPolicy::rejectedExecution(__JniBaseClass arg0, java::util::concurrent::ThreadPoolExecutor arg1)
	{
		__thiz.callMethod<void>(
			"rejectedExecution",
			"(Ljava/lang/Runnable;Ljava/util/concurrent/ThreadPoolExecutor;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace java::util::concurrent

