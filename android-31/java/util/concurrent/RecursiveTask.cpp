#include "../../../JObject.hpp"
#include "./RecursiveTask.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QJniObject forward
	RecursiveTask::RecursiveTask(QJniObject obj) : java::util::concurrent::ForkJoinTask(obj) {}
	
	// Constructors
	RecursiveTask::RecursiveTask()
		: java::util::concurrent::ForkJoinTask(
			"java.util.concurrent.RecursiveTask",
			"()V"
		) {}
	
	// Methods
	JObject RecursiveTask::getRawResult()
	{
		return callObjectMethod(
			"getRawResult",
			"()Ljava/lang/Object;"
		);
	}
} // namespace java::util::concurrent

