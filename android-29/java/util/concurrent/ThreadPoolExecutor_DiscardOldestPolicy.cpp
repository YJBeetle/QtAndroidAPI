#include "./ThreadPoolExecutor.hpp"
#include "./ThreadPoolExecutor_DiscardOldestPolicy.hpp"

namespace java::util::concurrent
{
	// Fields
	
	ThreadPoolExecutor_DiscardOldestPolicy::ThreadPoolExecutor_DiscardOldestPolicy(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ThreadPoolExecutor_DiscardOldestPolicy::ThreadPoolExecutor_DiscardOldestPolicy()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ThreadPoolExecutor$DiscardOldestPolicy",
			"()V"
		);
	}
	
	// Methods
	void ThreadPoolExecutor_DiscardOldestPolicy::rejectedExecution(__JniBaseClass arg0, java::util::concurrent::ThreadPoolExecutor arg1)
	{
		__thiz.callMethod<void>(
			"rejectedExecution",
			"(Ljava/lang/Runnable;Ljava/util/concurrent/ThreadPoolExecutor;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace java::util::concurrent

