#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::transition
{
	class Scene;
}
namespace android::transition
{
	class Transition;
}
namespace android::view
{
	class ViewGroup;
}

namespace android::transition
{
	class TransitionManager : public __JniBaseClass
	{
	public:
		// Fields
		
		TransitionManager(QAndroidJniObject obj);
		// Constructors
		TransitionManager();
		
		// Methods
		static void beginDelayedTransition(android::view::ViewGroup arg0);
		static void beginDelayedTransition(android::view::ViewGroup arg0, android::transition::Transition arg1);
		static void endTransitions(android::view::ViewGroup arg0);
		static void go(android::transition::Scene arg0);
		static void go(android::transition::Scene arg0, android::transition::Transition arg1);
		void setTransition(android::transition::Scene arg0, android::transition::Transition arg1);
		void setTransition(android::transition::Scene arg0, android::transition::Scene arg1, android::transition::Transition arg2);
		void transitionTo(android::transition::Scene arg0);
	};
} // namespace android::transition

