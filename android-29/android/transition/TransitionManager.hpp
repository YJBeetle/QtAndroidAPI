#pragma once

#include "../../JObject.hpp"

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
	class TransitionManager : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TransitionManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TransitionManager(QJniObject obj);
		
		// Constructors
		TransitionManager();
		
		// Methods
		static void beginDelayedTransition(android::view::ViewGroup arg0);
		static void beginDelayedTransition(android::view::ViewGroup arg0, android::transition::Transition arg1);
		static void endTransitions(android::view::ViewGroup arg0);
		static void go(android::transition::Scene arg0);
		static void go(android::transition::Scene arg0, android::transition::Transition arg1);
		void setTransition(android::transition::Scene arg0, android::transition::Transition arg1) const;
		void setTransition(android::transition::Scene arg0, android::transition::Scene arg1, android::transition::Transition arg2) const;
		void transitionTo(android::transition::Scene arg0) const;
	};
} // namespace android::transition

