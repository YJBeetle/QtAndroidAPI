#pragma once

#include "../../JObject.hpp"

class JIntArray;
namespace android::animation
{
	class Animator;
}
class JObject;

namespace android::animation
{
	class StateListAnimator : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StateListAnimator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StateListAnimator(QAndroidJniObject obj);
		
		// Constructors
		StateListAnimator();
		
		// Methods
		void addState(JIntArray arg0, android::animation::Animator arg1);
		android::animation::StateListAnimator clone();
		void jumpToCurrentState();
	};
} // namespace android::animation

