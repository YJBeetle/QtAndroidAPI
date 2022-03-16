#pragma once

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
	class CircularPropagation : public android::transition::VisibilityPropagation
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CircularPropagation(const char *className, const char *sig, Ts...agv) : android::transition::VisibilityPropagation(className, sig, std::forward<Ts>(agv)...) {}
		CircularPropagation(QAndroidJniObject obj) : android::transition::VisibilityPropagation(obj) {}
		
		// Constructors
		CircularPropagation();
		
		// Methods
		jlong getStartDelay(android::view::ViewGroup arg0, android::transition::Transition arg1, android::transition::TransitionValues arg2, android::transition::TransitionValues arg3) const;
		void setPropagationSpeed(jfloat arg0) const;
	};
} // namespace android::transition

