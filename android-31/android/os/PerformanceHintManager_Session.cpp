#include "./PerformanceHintManager_Session.hpp"

namespace android::os
{
	// Fields
	
	// QAndroidJniObject forward
	PerformanceHintManager_Session::PerformanceHintManager_Session(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void PerformanceHintManager_Session::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void PerformanceHintManager_Session::reportActualWorkDuration(jlong arg0)
	{
		callMethod<void>(
			"reportActualWorkDuration",
			"(J)V",
			arg0
		);
	}
	void PerformanceHintManager_Session::updateTargetWorkDuration(jlong arg0)
	{
		callMethod<void>(
			"updateTargetWorkDuration",
			"(J)V",
			arg0
		);
	}
} // namespace android::os

