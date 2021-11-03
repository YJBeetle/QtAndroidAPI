#include "./CountDownTimer.hpp"

namespace android::os
{
	// Fields
	
	// QJniObject forward
	CountDownTimer::CountDownTimer(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	CountDownTimer::CountDownTimer(jlong arg0, jlong arg1)
		: JObject(
			"android.os.CountDownTimer",
			"(JJ)V",
			arg0,
			arg1
		) {}
	
	// Methods
	void CountDownTimer::cancel() const
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	void CountDownTimer::onFinish() const
	{
		callMethod<void>(
			"onFinish",
			"()V"
		);
	}
	void CountDownTimer::onTick(jlong arg0) const
	{
		callMethod<void>(
			"onTick",
			"(J)V",
			arg0
		);
	}
	android::os::CountDownTimer CountDownTimer::start() const
	{
		return callObjectMethod(
			"start",
			"()Landroid/os/CountDownTimer;"
		);
	}
} // namespace android::os

