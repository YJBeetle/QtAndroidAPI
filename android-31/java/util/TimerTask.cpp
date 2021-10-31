#include "./TimerTask.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	TimerTask::TimerTask(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jboolean TimerTask::cancel()
	{
		return callMethod<jboolean>(
			"cancel",
			"()Z"
		);
	}
	void TimerTask::run()
	{
		callMethod<void>(
			"run",
			"()V"
		);
	}
	jlong TimerTask::scheduledExecutionTime()
	{
		return callMethod<jlong>(
			"scheduledExecutionTime",
			"()J"
		);
	}
} // namespace java::util

