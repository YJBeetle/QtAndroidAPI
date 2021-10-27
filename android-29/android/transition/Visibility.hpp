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
		
		Visibility(QAndroidJniObject obj);
		// Constructors
		Visibility();
		Visibility(android::content::Context &arg0, __JniBaseClass &arg1);
		
		// Methods
		void captureEndValues(android::transition::TransitionValues arg0);
		void captureStartValues(android::transition::TransitionValues arg0);
		QAndroidJniObject createAnimator(android::view::ViewGroup arg0, android::transition::TransitionValues arg1, android::transition::TransitionValues arg2);
		jint getMode();
		jarray getTransitionProperties();
		jboolean isTransitionRequired(android::transition::TransitionValues arg0, android::transition::TransitionValues arg1);
		jboolean isVisible(android::transition::TransitionValues arg0);
		QAndroidJniObject onAppear(android::view::ViewGroup arg0, android::view::View arg1, android::transition::TransitionValues arg2, android::transition::TransitionValues arg3);
		QAndroidJniObject onAppear(android::view::ViewGroup arg0, android::transition::TransitionValues arg1, jint arg2, android::transition::TransitionValues arg3, jint arg4);
		QAndroidJniObject onDisappear(android::view::ViewGroup arg0, android::view::View arg1, android::transition::TransitionValues arg2, android::transition::TransitionValues arg3);
		QAndroidJniObject onDisappear(android::view::ViewGroup arg0, android::transition::TransitionValues arg1, jint arg2, android::transition::TransitionValues arg3, jint arg4);
		void setMode(jint arg0);
	};
} // namespace android::transition

