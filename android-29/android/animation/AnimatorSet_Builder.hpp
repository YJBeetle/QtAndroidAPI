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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AnimatorSet_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AnimatorSet_Builder(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		QAndroidJniObject after(android::animation::Animator arg0);
		QAndroidJniObject after(jlong arg0);
		QAndroidJniObject before(android::animation::Animator arg0);
		QAndroidJniObject with(android::animation::Animator arg0);
	};
} // namespace android::animation

