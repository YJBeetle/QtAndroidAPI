#include "../../../JObject.hpp"
#include "./RecursiveTask.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// Constructors
	RecursiveTask::RecursiveTask()
		: java::util::concurrent::ForkJoinTask(
			"java.util.concurrent.RecursiveTask",
			"()V"
		) {}
	
	// Methods
	JObject RecursiveTask::getRawResult() const
	{
		return callObjectMethod(
			"getRawResult",
			"()Ljava/lang/Object;"
		);
	}
} // namespace java::util::concurrent

