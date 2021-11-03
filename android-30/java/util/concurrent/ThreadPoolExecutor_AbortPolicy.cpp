#include "./ThreadPoolExecutor.hpp"
#include "./ThreadPoolExecutor_AbortPolicy.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QAndroidJniObject forward
	ThreadPoolExecutor_AbortPolicy::ThreadPoolExecutor_AbortPolicy(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ThreadPoolExecutor_AbortPolicy::ThreadPoolExecutor_AbortPolicy()
		: JObject(
			"java.util.concurrent.ThreadPoolExecutor$AbortPolicy",
			"()V"
		) {}
	
	// Methods
	void ThreadPoolExecutor_AbortPolicy::rejectedExecution(JObject arg0, java::util::concurrent::ThreadPoolExecutor arg1)
	{
		callMethod<void>(
			"rejectedExecution",
			"(Ljava/lang/Runnable;Ljava/util/concurrent/ThreadPoolExecutor;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace java::util::concurrent

