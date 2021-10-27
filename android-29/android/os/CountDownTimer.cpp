#include "./CountDownTimer.hpp"

namespace android::os
{
	// Fields
	
	CountDownTimer::CountDownTimer(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CountDownTimer::CountDownTimer(jlong &arg0, jlong &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.os.CountDownTimer",
			"(JJ)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	void CountDownTimer::cancel()
	{
		__thiz.callMethod<void>(
			"cancel",
			"()V"
		);
	}
	void CountDownTimer::onFinish()
	{
		__thiz.callMethod<void>(
			"onFinish",
			"()V"
		);
	}
	void CountDownTimer::onTick(jlong arg0)
	{
		__thiz.callMethod<void>(
			"onTick",
			"(J)V",
			arg0
		);
	}
	QAndroidJniObject CountDownTimer::start()
	{
		return __thiz.callObjectMethod(
			"start",
			"()Landroid/os/CountDownTimer;"
		);
	}
} // namespace android::os

