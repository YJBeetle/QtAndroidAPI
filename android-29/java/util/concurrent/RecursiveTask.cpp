#include "../../../JObject.hpp"
#include "./RecursiveTask.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QAndroidJniObject forward
	RecursiveTask::RecursiveTask(QAndroidJniObject obj) : java::util::concurrent::ForkJoinTask(obj) {}
	
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

