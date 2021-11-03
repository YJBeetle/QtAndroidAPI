#pragma once

#include "../../JObject.hpp"

namespace android::animation
{
	class Animator;
}
namespace android::animation
{
	class StateListAnimator;
}
namespace android::content
{
	class Context;
}

namespace android::animation
{
	class AnimatorInflater : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AnimatorInflater(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AnimatorInflater(QJniObject obj);
		
		// Constructors
		AnimatorInflater();
		
		// Methods
		static android::animation::Animator loadAnimator(android::content::Context arg0, jint arg1);
		static android::animation::StateListAnimator loadStateListAnimator(android::content::Context arg0, jint arg1);
	};
} // namespace android::animation

