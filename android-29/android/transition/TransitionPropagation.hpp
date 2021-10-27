#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::transition
{
	class Transition;
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
	class TransitionPropagation : public __JniBaseClass
	{
	public:
		// Fields
		
		TransitionPropagation(QAndroidJniObject obj);
		// Constructors
		TransitionPropagation();
		
		// Methods
		void captureValues(android::transition::TransitionValues arg0);
		jarray getPropagationProperties();
		jlong getStartDelay(android::view::ViewGroup arg0, android::transition::Transition arg1, android::transition::TransitionValues arg2, android::transition::TransitionValues arg3);
	};
} // namespace android::transition

