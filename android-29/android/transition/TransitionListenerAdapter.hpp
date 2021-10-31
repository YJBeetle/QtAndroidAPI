#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::transition
{
	class Transition;
}

namespace android::transition
{
	class TransitionListenerAdapter : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TransitionListenerAdapter(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TransitionListenerAdapter(QJniObject obj);
		
		// Constructors
		TransitionListenerAdapter();
		
		// Methods
		void onTransitionCancel(android::transition::Transition arg0);
		void onTransitionEnd(android::transition::Transition arg0);
		void onTransitionPause(android::transition::Transition arg0);
		void onTransitionResume(android::transition::Transition arg0);
		void onTransitionStart(android::transition::Transition arg0);
	};
} // namespace android::transition

