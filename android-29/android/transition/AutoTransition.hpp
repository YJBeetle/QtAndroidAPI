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
		
		AutoTransition(QAndroidJniObject obj);
		// Constructors
		AutoTransition();
		AutoTransition(android::content::Context &arg0, __JniBaseClass &arg1);
		
		// Methods
	};
} // namespace android::transition

