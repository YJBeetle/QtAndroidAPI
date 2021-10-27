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
		
		AnimatorSet_Builder(QAndroidJniObject obj);
		// Constructors
		AnimatorSet_Builder() = default;
		
		// Methods
		QAndroidJniObject after(android::animation::Animator arg0);
		QAndroidJniObject after(jlong arg0);
		QAndroidJniObject before(android::animation::Animator arg0);
		QAndroidJniObject with(android::animation::Animator arg0);
	};
} // namespace android::animation

