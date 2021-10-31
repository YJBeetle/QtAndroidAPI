#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Transition.hpp"
#include "./TransitionSet.hpp"

namespace android::content
{
	class Context;
}

namespace android::transition
{
	class AutoTransition : public android::transition::TransitionSet
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AutoTransition(const char *className, const char *sig, Ts...agv) : android::transition::TransitionSet(className, sig, std::forward<Ts>(agv)...) {}
		AutoTransition(QJniObject obj);
		
		// Constructors
		AutoTransition();
		AutoTransition(android::content::Context arg0, __JniBaseClass arg1);
		
		// Methods
	};
} // namespace android::transition

