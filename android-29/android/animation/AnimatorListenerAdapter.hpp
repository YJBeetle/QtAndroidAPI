#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::animation
{
	class Animator;
}

namespace android::animation
{
	class AnimatorListenerAdapter : public __JniBaseClass
	{
	public:
		// Fields
		
		AnimatorListenerAdapter(QAndroidJniObject obj);
		// Constructors
		AnimatorListenerAdapter();
		
		// Methods
		void onAnimationCancel(android::animation::Animator arg0);
		void onAnimationEnd(android::animation::Animator arg0);
		void onAnimationPause(android::animation::Animator arg0);
		void onAnimationRepeat(android::animation::Animator arg0);
		void onAnimationResume(android::animation::Animator arg0);
		void onAnimationStart(android::animation::Animator arg0);
	};
} // namespace android::animation

