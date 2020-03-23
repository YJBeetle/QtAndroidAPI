#pragma once

#ifndef ANDROID_OS_COUNTDOWNTIMER
#define ANDROID_OS_COUNTDOWNTIMER

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::os
{
	class CountDownTimer : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jlong arg0, jlong arg1);
		
		// Methods
		QAndroidJniObject start();
		void cancel();
		void onFinish();
		void onTick(jlong arg0);
	};
} // namespace __jni_impl::android::os


namespace __jni_impl::android::os
{
	// Fields
	
	// Constructors
	void CountDownTimer::__constructor(jlong arg0, jlong arg1)
	{
		__thiz = QAndroidJniObject(
			"android.os.CountDownTimer",
			"(JJ)V",
			arg0,
			arg1);
	}
	
	// Methods
	QAndroidJniObject CountDownTimer::start()
	{
		return __thiz.callObjectMethod(
			"start",
			"()Landroid/os/CountDownTimer;");
	}
	void CountDownTimer::cancel()
	{
		__thiz.callMethod<void>(
			"cancel",
			"()V");
	}
	void CountDownTimer::onFinish()
	{
		__thiz.callMethod<void>(
			"onFinish",
			"()V");
	}
	void CountDownTimer::onTick(jlong arg0)
	{
		__thiz.callMethod<void>(
			"onTick",
			"(J)V",
			arg0);
	}
} // namespace __jni_impl::android::os

namespace android::os
{
	class CountDownTimer : public __jni_impl::android::os::CountDownTimer
	{
	public:
		CountDownTimer(QAndroidJniObject obj) { __thiz = obj; }
		CountDownTimer(jlong arg0, jlong arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::os

#endif // ANDROID_OS_COUNTDOWNTIMER

