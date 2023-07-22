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
		CountDownTimer(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		CountDownTimer(jlong arg0, jlong arg1);
		
		// Methods
		void cancel() const;
		void onFinish() const;
		void onTick(jlong arg0) const;
		android::os::CountDownTimer start() const;
	};
} // namespace android::os

