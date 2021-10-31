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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StateListAnimator(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		StateListAnimator(QAndroidJniObject obj);
		
		// Constructors
		StateListAnimator();
		
		// Methods
		void addState(jintArray arg0, android::animation::Animator arg1);
		android::animation::StateListAnimator clone();
		void jumpToCurrentState();
	};
} // namespace android::animation

