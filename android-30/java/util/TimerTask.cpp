#include "../../JObject.hpp"
#include "./TimerTask.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	TimerTask::TimerTask(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean TimerTask::cancel() const
	{
		return callMethod<jboolean>(
			"cancel",
			"()Z"
		);
	}
	void TimerTask::run() const
	{
		callMethod<void>(
			"run",
			"()V"
		);
	}
	jlong TimerTask::scheduledExecutionTime() const
	{
		return callMethod<jlong>(
			"scheduledExecutionTime",
			"()J"
		);
	}
} // namespace java::util

