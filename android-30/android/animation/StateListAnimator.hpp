#pragma once

#include "../../JObject.hpp"

namespace android::animation
{
	class Animator;
}

namespace android::animation
{
	class StateListAnimator : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit StateListAnimator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StateListAnimator(QJniObject obj);
		
		// Constructors
		StateListAnimator();
		
		// Methods
		void addState(jintArray arg0, android::animation::Animator arg1);
		android::animation::StateListAnimator clone();
		void jumpToCurrentState();
	};
} // namespace android::animation

