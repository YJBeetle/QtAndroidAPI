#include "./ThreadPoolExecutor.hpp"
#include "./ThreadPoolExecutor_AbortPolicy.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QJniObject forward
	ThreadPoolExecutor_AbortPolicy::ThreadPoolExecutor_AbortPolicy(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ThreadPoolExecutor_AbortPolicy::ThreadPoolExecutor_AbortPolicy()
		: __JniBaseClass(
			"java.util.concurrent.ThreadPoolExecutor$AbortPolicy",
			"()V"
		) {}
	
	// Methods
	void ThreadPoolExecutor_AbortPolicy::rejectedExecution(__JniBaseClass arg0, java::util::concurrent::ThreadPoolExecutor arg1)
	{
		callMethod<void>(
			"rejectedExecution",
			"(Ljava/lang/Runnable;Ljava/util/concurrent/ThreadPoolExecutor;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace java::util::concurrent

