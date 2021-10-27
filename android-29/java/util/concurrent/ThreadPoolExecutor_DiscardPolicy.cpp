#include "./ThreadPoolExecutor.hpp"
#include "./ThreadPoolExecutor_DiscardPolicy.hpp"

namespace java::util::concurrent
{
	// Fields
	
	ThreadPoolExecutor_DiscardPolicy::ThreadPoolExecutor_DiscardPolicy(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ThreadPoolExecutor_DiscardPolicy::ThreadPoolExecutor_DiscardPolicy()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.ThreadPoolExecutor$DiscardPolicy",
			"()V"
		);
	}
	
	// Methods
	void ThreadPoolExecutor_DiscardPolicy::rejectedExecution(__JniBaseClass arg0, java::util::concurrent::ThreadPoolExecutor arg1)
	{
		__thiz.callMethod<void>(
			"rejectedExecution",
			"(Ljava/lang/Runnable;Ljava/util/concurrent/ThreadPoolExecutor;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace java::util::concurrent

