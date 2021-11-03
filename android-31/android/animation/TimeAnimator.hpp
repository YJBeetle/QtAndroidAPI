#pragma once

#include "../../JObject.hpp"
#include "./Animator.hpp"
#include "./ValueAnimator.hpp"


namespace android::animation
{
	class TimeAnimator : public android::animation::ValueAnimator
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TimeAnimator(const char *className, const char *sig, Ts...agv) : android::animation::ValueAnimator(className, sig, std::forward<Ts>(agv)...) {}
		TimeAnimator(QAndroidJniObject obj);
		
		// Constructors
		TimeAnimator();
		
		// Methods
		void setCurrentPlayTime(jlong arg0);
		void setTimeListener(JObject arg0);
		void start();
	};
} // namespace android::animation

