#include "./TimerTask.hpp"

namespace java::util
{
	// Fields
	
	TimerTask::TimerTask(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jboolean TimerTask::cancel()
	{
		return __thiz.callMethod<jboolean>(
			"cancel",
			"()Z"
		);
	}
	void TimerTask::run()
	{
		__thiz.callMethod<void>(
			"run",
			"()V"
		);
	}
	jlong TimerTask::scheduledExecutionTime()
	{
		return __thiz.callMethod<jlong>(
			"scheduledExecutionTime",
			"()J"
		);
	}
} // namespace java::util

