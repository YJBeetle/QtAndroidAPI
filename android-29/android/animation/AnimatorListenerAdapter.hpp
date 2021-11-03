#pragma once

#include "../../JObject.hpp"

namespace android::animation
{
	class Animator;
}

namespace android::animation
{
	class AnimatorListenerAdapter : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AnimatorListenerAdapter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AnimatorListenerAdapter(QAndroidJniObject obj);
		
		// Constructors
		AnimatorListenerAdapter();
		
		// Methods
		void onAnimationCancel(android::animation::Animator arg0) const;
		void onAnimationEnd(android::animation::Animator arg0) const;
		void onAnimationPause(android::animation::Animator arg0) const;
		void onAnimationRepeat(android::animation::Animator arg0) const;
		void onAnimationResume(android::animation::Animator arg0) const;
		void onAnimationStart(android::animation::Animator arg0) const;
	};
} // namespace android::animation

