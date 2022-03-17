#pragma once

#include "./TransitionSet.def.hpp"

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AutoTransition(const char *className, const char *sig, Ts...agv) : android::transition::TransitionSet(className, sig, std::forward<Ts>(agv)...) {}
		AutoTransition(QAndroidJniObject obj) : android::transition::TransitionSet(obj) {}
		
		// Constructors
		AutoTransition();
		AutoTransition(android::content::Context arg0, JObject arg1);
		
		// Methods
	};
} // namespace android::transition

