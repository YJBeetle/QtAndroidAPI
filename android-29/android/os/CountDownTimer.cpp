#include "./CountDownTimer.hpp"

namespace android::os
{
	// Fields
	
	// QAndroidJniObject forward
	CountDownTimer::CountDownTimer(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	CountDownTimer::CountDownTimer(jlong arg0, jlong arg1)
		: __JniBaseClass(
			"android.os.CountDownTimer",
			"(JJ)V",
			arg0,
			arg1
		) {}
	
	// Methods
	void CountDownTimer::cancel()
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	void CountDownTimer::onFinish()
	{
		callMethod<void>(
			"onFinish",
			"()V"
		);
	}
	void CountDownTimer::onTick(jlong arg0)
	{
		callMethod<void>(
			"onTick",
			"(J)V",
			arg0
		);
	}
	android::os::CountDownTimer CountDownTimer::start()
	{
		return callObjectMethod(
			"start",
			"()Landroid/os/CountDownTimer;"
		);
	}
} // namespace android::os

