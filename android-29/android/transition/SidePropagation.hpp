#pragma once

#include "../../__JniBaseClass.hpp"
#include "./TransitionPropagation.hpp"
#include "./VisibilityPropagation.hpp"

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
	class SidePropagation : public android::transition::VisibilityPropagation
	{
	public:
		// Fields
		
		SidePropagation(QAndroidJniObject obj);
		// Constructors
		SidePropagation();
		
		// Methods
		jlong getStartDelay(android::view::ViewGroup arg0, android::transition::Transition arg1, android::transition::TransitionValues arg2, android::transition::TransitionValues arg3);
		void setPropagationSpeed(jfloat arg0);
		void setSide(jint arg0);
	};
} // namespace android::transition

