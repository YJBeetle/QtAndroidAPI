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
		
		// QJniObject forward
		template<typename ...Ts> explicit StateListAnimator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StateListAnimator(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		StateListAnimator();
		
		// Methods
		void addState(JIntArray arg0, android::animation::Animator arg1) const;
		android::animation::StateListAnimator clone() const;
		void jumpToCurrentState() const;
	};
} // namespace android::animation

