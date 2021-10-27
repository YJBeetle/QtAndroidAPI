#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::os
{
	class CountDownTimer : public __JniBaseClass
	{
	public:
		// Fields
		
		CountDownTimer(QAndroidJniObject obj);
		// Constructors
		CountDownTimer(jlong &arg0, jlong &arg1);
		CountDownTimer() = default;
		
		// Methods
		void cancel();
		void onFinish();
		void onTick(jlong arg0);
		QAndroidJniObject start();
	};
} // namespace android::os

