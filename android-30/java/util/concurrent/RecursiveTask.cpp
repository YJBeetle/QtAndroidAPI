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
	jobject RecursiveTask::getRawResult()
	{
		return callObjectMethod(
			"getRawResult",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
} // namespace java::util::concurrent

