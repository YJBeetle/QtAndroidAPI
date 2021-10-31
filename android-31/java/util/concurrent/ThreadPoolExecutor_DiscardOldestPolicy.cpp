#include "./ThreadPoolExecutor.hpp"
#include "./ThreadPoolExecutor_DiscardOldestPolicy.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QJniObject forward
	ThreadPoolExecutor_DiscardOldestPolicy::ThreadPoolExecutor_DiscardOldestPolicy(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ThreadPoolExecutor_DiscardOldestPolicy::ThreadPoolExecutor_DiscardOldestPolicy()
		: __JniBaseClass(
			"java.util.concurrent.ThreadPoolExecutor$DiscardOldestPolicy",
			"()V"
		) {}
	
	// Methods
	void ThreadPoolExecutor_DiscardOldestPolicy::rejectedExecution(__JniBaseClass arg0, java::util::concurrent::ThreadPoolExecutor arg1)
	{
		callMethod<void>(
			"rejectedExecution",
			"(Ljava/lang/Runnable;Ljava/util/concurrent/ThreadPoolExecutor;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace java::util::concurrent

