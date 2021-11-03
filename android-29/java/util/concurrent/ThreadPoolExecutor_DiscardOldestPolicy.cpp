#include "./ThreadPoolExecutor.hpp"
#include "./ThreadPoolExecutor_DiscardOldestPolicy.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QAndroidJniObject forward
	ThreadPoolExecutor_DiscardOldestPolicy::ThreadPoolExecutor_DiscardOldestPolicy(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ThreadPoolExecutor_DiscardOldestPolicy::ThreadPoolExecutor_DiscardOldestPolicy()
		: JObject(
			"java.util.concurrent.ThreadPoolExecutor$DiscardOldestPolicy",
			"()V"
		) {}
	
	// Methods
	void ThreadPoolExecutor_DiscardOldestPolicy::rejectedExecution(JObject arg0, java::util::concurrent::ThreadPoolExecutor arg1) const
	{
		callMethod<void>(
			"rejectedExecution",
			"(Ljava/lang/Runnable;Ljava/util/concurrent/ThreadPoolExecutor;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace java::util::concurrent

