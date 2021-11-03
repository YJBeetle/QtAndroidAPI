#include "./ThreadPoolExecutor.hpp"
#include "./ThreadPoolExecutor_CallerRunsPolicy.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QJniObject forward
	ThreadPoolExecutor_CallerRunsPolicy::ThreadPoolExecutor_CallerRunsPolicy(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ThreadPoolExecutor_CallerRunsPolicy::ThreadPoolExecutor_CallerRunsPolicy()
		: JObject(
			"java.util.concurrent.ThreadPoolExecutor$CallerRunsPolicy",
			"()V"
		) {}
	
	// Methods
	void ThreadPoolExecutor_CallerRunsPolicy::rejectedExecution(JObject arg0, java::util::concurrent::ThreadPoolExecutor arg1)
	{
		callMethod<void>(
			"rejectedExecution",
			"(Ljava/lang/Runnable;Ljava/util/concurrent/ThreadPoolExecutor;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace java::util::concurrent

