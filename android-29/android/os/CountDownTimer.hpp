#pragma once

#include "./CountDownTimer.def.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	inline CountDownTimer::CountDownTimer(jlong arg0, jlong arg1)
		: JObject(
			"android.os.CountDownTimer",
			"(JJ)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline void CountDownTimer::cancel() const
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	inline void CountDownTimer::onFinish() const
	{
		callMethod<void>(
			"onFinish",
			"()V"
		);
	}
	inline void CountDownTimer::onTick(jlong arg0) const
	{
		callMethod<void>(
			"onTick",
			"(J)V",
			arg0
		);
	}
	inline android::os::CountDownTimer CountDownTimer::start() const
	{
		return callObjectMethod(
			"start",
			"()Landroid/os/CountDownTimer;"
		);
	}
} // namespace android::os

// Base class headers

