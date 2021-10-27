#include "./ThreadPoolExecutor.hpp"
#include "./ThreadPoolExecutor_CallerRunsPolicy.hpp"

namespace java::util::concurrent
{
	// Fields
	
	ThreadPoolExecutor_CallerRunsPolicy::ThreadPoolExecutor_CallerRunsPolicy(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ThreadPoolExecutor_CallerRunsPolicy::ThreadPoolExecutor_CallerRunsPolicy()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ThreadPoolExecutor$CallerRunsPolicy",
			"()V"
		);
	}
	
	// Methods
	void ThreadPoolExecutor_CallerRunsPolicy::rejectedExecution(__JniBaseClass arg0, java::util::concurrent::ThreadPoolExecutor arg1)
	{
		__thiz.callMethod<void>(
			"rejectedExecution",
			"(Ljava/lang/Runnable;Ljava/util/concurrent/ThreadPoolExecutor;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace java::util::concurrent

