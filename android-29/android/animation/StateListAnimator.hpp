#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::animation
{
	class Animator;
}

namespace android::animation
{
	class StateListAnimator : public __JniBaseClass
	{
	public:
		// Fields
		
		StateListAnimator(QAndroidJniObject obj);
		// Constructors
		StateListAnimator();
		
		// Methods
		void addState(jintArray arg0, android::animation::Animator arg1);
		QAndroidJniObject clone();
		void jumpToCurrentState();
	};
} // namespace android::animation

