#pragma once

#include "../../JObject.hpp"
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
	class View;
}
namespace android::view
{
	class ViewGroup;
}

namespace android::transition
{
	class Visibility : public android::transition::Transition
	{
	public:
		// Fields
		static jint MODE_IN();
		static jint MODE_OUT();
		
		// QJniObject forward
		template<typename ...Ts> explicit Visibility(const char *className, const char *sig, Ts...agv) : android::transition::Transition(className, sig, std::forward<Ts>(agv)...) {}
		Visibility(QJniObject obj);
		
		// Constructors
		Visibility();
		Visibility(android::content::Context arg0, JObject arg1);
		
		// Methods
		void captureEndValues(android::transition::TransitionValues arg0);
		void captureStartValues(android::transition::TransitionValues arg0);
		android::animation::Animator createAnimator(android::view::ViewGroup arg0, android::transition::TransitionValues arg1, android::transition::TransitionValues arg2);
		jint getMode();
		jarray getTransitionProperties();
		jboolean isTransitionRequired(android::transition::TransitionValues arg0, android::transition::TransitionValues arg1);
		jboolean isVisible(android::transition::TransitionValues arg0);
		android::animation::Animator onAppear(android::view::ViewGroup arg0, android::view::View arg1, android::transition::TransitionValues arg2, android::transition::TransitionValues arg3);
		android::animation::Animator onAppear(android::view::ViewGroup arg0, android::transition::TransitionValues arg1, jint arg2, android::transition::TransitionValues arg3, jint arg4);
		android::animation::Animator onDisappear(android::view::ViewGroup arg0, android::view::View arg1, android::transition::TransitionValues arg2, android::transition::TransitionValues arg3);
		android::animation::Animator onDisappear(android::view::ViewGroup arg0, android::transition::TransitionValues arg1, jint arg2, android::transition::TransitionValues arg3, jint arg4);
		void setMode(jint arg0);
	};
} // namespace android::transition

