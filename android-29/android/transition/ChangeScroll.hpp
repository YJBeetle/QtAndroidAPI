#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Transition.hpp"

namespace android::animation
{
	class Animator;
}
namespace android::content
{
	class Context;
}
namespace android::transition
{
	class TransitionValues;
}
namespace android::view
{
	class ViewGroup;
}

namespace android::transition
{
	class ChangeScroll : public android::transition::Transition
	{
	public:
		// Fields
		
		ChangeScroll(QAndroidJniObject obj);
		// Constructors
		ChangeScroll();
		ChangeScroll(android::content::Context arg0, __JniBaseClass arg1);
		
		// Methods
		void captureEndValues(android::transition::TransitionValues arg0);
		void captureStartValues(android::transition::TransitionValues arg0);
		QAndroidJniObject createAnimator(android::view::ViewGroup arg0, android::transition::TransitionValues arg1, android::transition::TransitionValues arg2);
		jarray getTransitionProperties();
	};
} // namespace android::transition

