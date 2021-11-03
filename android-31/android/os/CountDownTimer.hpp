#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class CountDownTimer : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CountDownTimer(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CountDownTimer(QJniObject obj);
		
		// Constructors
		CountDownTimer(jlong arg0, jlong arg1);
		
		// Methods
		void cancel();
		void onFinish();
		void onTick(jlong arg0);
		android::os::CountDownTimer start();
	};
} // namespace android::os

