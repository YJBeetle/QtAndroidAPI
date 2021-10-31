#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::animation
{
	class Animator;
}
namespace android::animation
{
	class AnimatorSet;
}

namespace android::animation
{
	class AnimatorSet_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AnimatorSet_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AnimatorSet_Builder(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::animation::AnimatorSet_Builder after(android::animation::Animator arg0);
		android::animation::AnimatorSet_Builder after(jlong arg0);
		android::animation::AnimatorSet_Builder before(android::animation::Animator arg0);
		android::animation::AnimatorSet_Builder with(android::animation::Animator arg0);
	};
} // namespace android::animation

