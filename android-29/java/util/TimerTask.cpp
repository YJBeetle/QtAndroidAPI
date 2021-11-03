#include "../../JObject.hpp"
#include "./TimerTask.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	TimerTask::TimerTask(QJniObject obj) : JObject(obj) {}
	
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

