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
		
		// QJniObject forward
		template<typename ...Ts> explicit TransitionPropagation(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TransitionPropagation(QJniObject obj);
		
		// Constructors
		TransitionPropagation();
		
		// Methods
		void captureValues(android::transition::TransitionValues arg0);
		jarray getPropagationProperties();
		jlong getStartDelay(android::view::ViewGroup arg0, android::transition::Transition arg1, android::transition::TransitionValues arg2, android::transition::TransitionValues arg3);
	};
} // namespace android::transition

