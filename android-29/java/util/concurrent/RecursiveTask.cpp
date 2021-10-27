#include "./RecursiveTask.hpp"

namespace java::util::concurrent
{
	// Fields
	
	RecursiveTask::RecursiveTask(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RecursiveTask::RecursiveTask()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.RecursiveTask",
			"()V"
		);
	}
	
	// Methods
	jobject RecursiveTask::getRawResult()
	{
		return __thiz.callObjectMethod(
			"getRawResult",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
} // namespace java::util::concurrent

