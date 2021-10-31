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
	class ChangeBounds : public android::transition::Transition
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ChangeBounds(const char *className, const char *sig, Ts...agv) : android::transition::Transition(className, sig, std::forward<Ts>(agv)...) {}
		ChangeBounds(QAndroidJniObject obj);
		
		// Constructors
		ChangeBounds();
		ChangeBounds(android::content::Context arg0, __JniBaseClass arg1);
		
		// Methods
		void captureEndValues(android::transition::TransitionValues arg0);
		void captureStartValues(android::transition::TransitionValues arg0);
		QAndroidJniObject createAnimator(android::view::ViewGroup arg0, android::transition::TransitionValues arg1, android::transition::TransitionValues arg2);
		jboolean getResizeClip();
		jarray getTransitionProperties();
		void setReparent(jboolean arg0);
		void setResizeClip(jboolean arg0);
	};
} // namespace android::transition

