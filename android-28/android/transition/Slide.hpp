#pragma once

#include "../../JObject.hpp"
#include "./Transition.hpp"
#include "./Visibility.hpp"

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
	class Slide : public android::transition::Visibility
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Slide(const char *className, const char *sig, Ts...agv) : android::transition::Visibility(className, sig, std::forward<Ts>(agv)...) {}
		Slide(QAndroidJniObject obj);
		
		// Constructors
		Slide();
		Slide(jint arg0);
		Slide(android::content::Context arg0, JObject arg1);
		
		// Methods
		void captureEndValues(android::transition::TransitionValues arg0);
		void captureStartValues(android::transition::TransitionValues arg0);
		jint getSlideEdge();
		android::animation::Animator onAppear(android::view::ViewGroup arg0, android::view::View arg1, android::transition::TransitionValues arg2, android::transition::TransitionValues arg3);
		android::animation::Animator onDisappear(android::view::ViewGroup arg0, android::view::View arg1, android::transition::TransitionValues arg2, android::transition::TransitionValues arg3);
		void setSlideEdge(jint arg0);
	};
} // namespace android::transition

